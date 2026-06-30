// KTFGRelationshipComponent.cpp
// Componente de relación romántica entre dos personajes.
// Encapsula la lógica operativa de la relación: calcula el RomanticProgressionScore,
// determina la fase narrativa, aplica los valores del tropo, gestiona situaciones
// y comprueba los eventos relacionales tras cada recálculo.
//
// Flujo principal:
//   BeginPlay → RegisterCharacter (Subsistema)
//   Subsistema → SetRelatedCharacter + SetRomanceProfile → TryApplyTropeInitialValues
//   Input/BP   → TriggerSituation → RecalculateRelationshipState → CheckAndFireEvents

#include "KTFGComponents/KTFGRelationshipComponent.h"
#include "KTFGData/KTFGRelationshipEventData.h"
#include "KTFGCharacters/KTFGRomanceCharacterBase.h"
#include "KTFGComponents/KTFGEmotionComponent.h"
#include "KTFGBase/KTFGDramaSubsystem.h"
#include "EngineUtils.h"
#include "Components/Button.h"
#include "Engine/Engine.h"


UKTFGRelationshipComponent::UKTFGRelationshipComponent()
{
    // El componente no necesita tick; el estado se recalcula
    // únicamente cuando ocurre una situación o un evento.
    PrimaryComponentTick.bCanEverTick = false;
}

// ─────────────────────────────────────────────────────────────────────────────
// CICLO DE VIDA
// ─────────────────────────────────────────────────────────────────────────────

void UKTFGRelationshipComponent::BeginPlay()
{
    Super::BeginPlay();

    // Intentar aplicar el tropo si ya fue asignado antes de BeginPlay.
    // En el flujo normal el Subsistema lo asigna tras el BeginPlay,
    // pero si el diseñador lo configuró manualmente en el editor, se aplica aquí.
    TryApplyTropeInitialValues();

    // Registrarse en el Subsistema para que gestione el enlace con la pareja.
    AKTFGRomanceCharacterBase* OwnerCharacter = Cast<AKTFGRomanceCharacterBase>(GetOwner());
    if (OwnerCharacter)
    {
        if (UWorld* World = GetWorld())
        {
            if (UKTFGDramaSubsystem* Drama = World->GetSubsystem<UKTFGDramaSubsystem>())
            {
                Drama->RegisterCharacter(OwnerCharacter);
            }
            else
            {
                UE_LOG(LogKTFG, Warning, TEXT("KTFG [%s]: KTFGDramaSubsystem no encontrado. ¿Está habilitado el plugin?"),
                    *GetOwner()->GetName());
            }
        }
    }
}

void UKTFGRelationshipComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    // Desregistrar el personaje para que el Subsistema limpie el mapa
    // y notifique a la pareja que este personaje ya no está disponible.
    AKTFGRomanceCharacterBase* OwnerCharacter = Cast<AKTFGRomanceCharacterBase>(GetOwner());
    if (OwnerCharacter)
    {
        if (UWorld* World = GetWorld())
        {
            if (UKTFGDramaSubsystem* Drama = World->GetSubsystem<UKTFGDramaSubsystem>())
            {
                Drama->UnregisterCharacter(OwnerCharacter);
            }
        }
    }

    Super::EndPlay(EndPlayReason);
}

void UKTFGRelationshipComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

// ─────────────────────────────────────────────────────────────────────────────
// ESTADO DE LA RELACIÓN
// ─────────────────────────────────────────────────────────────────────────────

void UKTFGRelationshipComponent::RecalculateRelationshipState()
{
    const EKTFGStoryPhase OldPhase = CurrentPhase;

    RomanticProgressionScore = CalculateProgressionScore();
    const EKTFGStoryPhase NewPhase = CalculatePhaseFromScore(RomanticProgressionScore);

    // Las fases son unidireccionales: una situación negativa puede bajar el score
    // y bloquear situaciones que requieren score mínimo, pero no deshace el arco narrativo.
    if (NewPhase > CurrentPhase)
    {
        CurrentPhase = NewPhase;
        OnPhaseChanged.Broadcast(OldPhase, CurrentPhase);
        UE_LOG(LogKTFG, Log, TEXT("KTFG [%s]: Fase %d → %d | Score: %.1f"),
            *GetOwner()->GetName(),
            (int32)OldPhase,
            (int32)CurrentPhase,
            RomanticProgressionScore);
    }

    CheckAndFireEvents();
}

void UKTFGRelationshipComponent::SetRomanceProfile(UKTFGRomanceTropeData* NewRelationshipTrope)
{
    RelationshipTrope = NewRelationshipTrope;
    TryApplyTropeInitialValues();
    RecalculateRelationshipState();
}

void UKTFGRelationshipComponent::SetRelatedCharacter(AKTFGRomanceCharacterBase* NewCharacterB)
{
    // Caso 1: limpiar la relación
    if (NewCharacterB == nullptr)
    {
        CharacterB = nullptr;
        RelationshipTrope = nullptr;
        bInitialTropeValuesApplied = false;
        RomanticProgressionScore = 0.0f;
        CurrentPhase = EKTFGStoryPhase::Attraction;
        FiredEventIDs.Empty();
        return;
    }

    // Caso 2: evitar autorelación
    if (NewCharacterB == GetOwner())
    {
        UE_LOG(LogKTFG, Warning, TEXT("KTFG [%s]: SetRelatedCharacter bloqueado; el personaje no puede relacionarse consigo mismo."),
            *GetOwner()->GetName());
        return;
    }

    CharacterB = NewCharacterB;
    bInitialTropeValuesApplied = false;

    TryApplyTropeInitialValues();
    RecalculateRelationshipState();
}

// ─────────────────────────────────────────────────────────────────────────────
// INICIALIZACIÓN DEL TROPO
// ─────────────────────────────────────────────────────────────────────────────

void UKTFGRelationshipComponent::TryApplyTropeInitialValues()
{
    // Guardia para evitar una doble aplicación si SetRomanceProfile
    // y SetRelatedCharacter se llaman por separado desde el Subsistema.
    if (bInitialTropeValuesApplied) return;
    if (!RelationshipTrope || !CharacterB) return;

    ApplyTropeInitialValues();
    bInitialTropeValuesApplied = true;
}

void UKTFGRelationshipComponent::ApplyTropeInitialValues()
{
    if (!RelationshipTrope) return;

    AKTFGRomanceCharacterBase* OwnerCharacter = Cast<AKTFGRomanceCharacterBase>(GetOwner());
    if (!OwnerCharacter || !CharacterB) return;

    UKTFGEmotionComponent* EmotionA = OwnerCharacter->GetEmotionComponent();
    UKTFGEmotionComponent* EmotionB = CharacterB->GetEmotionComponent();
    if (!EmotionA || !EmotionB) return;

    // 1) Aplicar los valores base del tropo a ambos personajes.
    EmotionA->SetAffection(RelationshipTrope->InitialAffection);
    EmotionA->SetTrust(RelationshipTrope->InitialTrust);
    EmotionA->SetPride(RelationshipTrope->InitialPride);
    EmotionA->SetJealousy(RelationshipTrope->InitialJealousy);
    EmotionA->SetVulnerability(RelationshipTrope->InitialVulnerability);

    EmotionB->SetAffection(RelationshipTrope->InitialAffection);
    EmotionB->SetTrust(RelationshipTrope->InitialTrust);
    EmotionB->SetPride(RelationshipTrope->InitialPride);
    EmotionB->SetJealousy(RelationshipTrope->InitialJealousy);
    EmotionB->SetVulnerability(RelationshipTrope->InitialVulnerability);

    // 2) Ajustar con la personalidad de cada personaje.
    //    La personalidad no reemplaza los valores del tropo; los modula ligeramente
    //    para que dos personajes con el mismo tropo no sean idénticos.
    if (OwnerCharacter->PersonalityData)
    {
        const UKTFGCharacterPersonalityData* PersA = OwnerCharacter->PersonalityData;
        EmotionA->ModifyAffection(PersA->Warmth * 0.1f);
        EmotionA->ModifyPride((PersA->PrideBaseline - 50.0f) * 0.2f);      // 50 = valor neutro
        EmotionA->ModifyVulnerability(PersA->EmotionalOpenness * 0.1f);
        EmotionA->ModifyJealousy(PersA->JealousySensitivity * 0.05f);
    }

    if (CharacterB->PersonalityData)
    {
        const UKTFGCharacterPersonalityData* PersB = CharacterB->PersonalityData;
        EmotionB->ModifyAffection(PersB->Warmth * 0.1f);
        EmotionB->ModifyPride((PersB->PrideBaseline - 50.0f) * 0.2f);
        EmotionB->ModifyVulnerability(PersB->EmotionalOpenness * 0.1f);
        EmotionB->ModifyJealousy(PersB->JealousySensitivity * 0.05f);
    }

    // 3) Recalcular el score con los valores ya inicializados.
    RecalculateRelationshipState();

    UE_LOG(LogKTFG, Log, TEXT("========== KTFG INIT =========="));
    UE_LOG(LogKTFG, Log, TEXT("Tropo: %s"), *RelationshipTrope->TropeName.ToString());
    UE_LOG(LogKTFG, Log, TEXT("[A] %s — Aff:%.1f Tru:%.1f Pri:%.1f Jea:%.1f Vul:%.1f"),
        *OwnerCharacter->DisplayName.ToString(),
        EmotionA->Affection, EmotionA->Trust, EmotionA->Pride, EmotionA->Jealousy, EmotionA->Vulnerability);
    UE_LOG(LogKTFG, Log, TEXT("[B] %s — Aff:%.1f Tru:%.1f Pri:%.1f Jea:%.1f Vul:%.1f"),
        *CharacterB->DisplayName.ToString(),
        EmotionB->Affection, EmotionB->Trust, EmotionB->Pride, EmotionB->Jealousy, EmotionB->Vulnerability);
    UE_LOG(LogKTFG, Log, TEXT("Score: %.1f | Fase: %d"), RomanticProgressionScore, (int32)CurrentPhase);
    UE_LOG(LogKTFG, Log, TEXT("================================"));
}

// ─────────────────────────────────────────────────────────────────────────────
// SITUACIONES
// ─────────────────────────────────────────────────────────────────────────────

void UKTFGRelationshipComponent::TriggerSituation(UKTFGSituationData* Situation)
{
    if (!Situation)
    {
        UE_LOG(LogKTFG, Error, TEXT("KTFG: TriggerSituation — Situation es nullptr."));
        return;
    }

    AKTFGRomanceCharacterBase* OwnerCharacter = Cast<AKTFGRomanceCharacterBase>(GetOwner());
    if (!OwnerCharacter || !CharacterB) return;

    UKTFGEmotionComponent* EmotionA = OwnerCharacter->GetEmotionComponent();
    UKTFGEmotionComponent* EmotionB = CharacterB->GetEmotionComponent();
    if (!EmotionA || !EmotionB) return;

    // Comprobar fase mínima requerida.
    if (Situation->bRequiresMinPhase && CurrentPhase < Situation->MinRequiredPhase)
    {
        UE_LOG(LogKTFG, Warning, TEXT("KTFG: '%s' bloqueada — fase actual %d, requiere %d."),
            *Situation->SituationID.ToString(), (int32)CurrentPhase, (int32)Situation->MinRequiredPhase);
        return;
    }

    // Comprobar score mínimo requerido.
    // Si hay botón asociado, deshabilitarlo para feedback visual inmediato.
    if (Situation->bRequiresMinScore && RomanticProgressionScore < Situation->MinRequiredScore)
    {
        UE_LOG(LogKTFG, Warning, TEXT("KTFG: '%s' bloqueada — score %.1f, requiere %.1f."),
            *Situation->SituationID.ToString(), RomanticProgressionScore, Situation->MinRequiredScore);
        return;
    }

    // Calcular los deltas finales aplicando los multiplicadores del tropo.
    // Los deltas base viven en el SituationData; el tropo ajusta el ritmo
    // de crecimiento sin necesidad de editar cada situación individualmente.
    float FinalAffectionDelta = Situation->AffectionDelta;
    float FinalTrustDelta = Situation->TrustDelta;
    float FinalPrideDelta = Situation->PrideDelta;
    float FinalJealousyDelta = Situation->JealousyDelta;
    float FinalVulnerabilityDelta = Situation->VulnerabilityDelta;

    if (RelationshipTrope)
    {
        FinalAffectionDelta *= RelationshipTrope->AffectionGrowthModifier;
        FinalTrustDelta *= RelationshipTrope->TrustGrowthModifier;
        FinalPrideDelta *= RelationshipTrope->PrideGrowthModifier;
        FinalJealousyDelta *= RelationshipTrope->JealousyGrowthModifier;
        FinalVulnerabilityDelta *= RelationshipTrope->VulnerabilityGrowthModifier;
    }

    // Aplicar a ambos personajes de la pareja.
    EmotionA->ModifyAffection(FinalAffectionDelta);
    EmotionA->ModifyTrust(FinalTrustDelta);
    EmotionA->ModifyPride(FinalPrideDelta);
    EmotionA->ModifyJealousy(FinalJealousyDelta);
    EmotionA->ModifyVulnerability(FinalVulnerabilityDelta);

    EmotionB->ModifyAffection(FinalAffectionDelta);
    EmotionB->ModifyTrust(FinalTrustDelta);
    EmotionB->ModifyPride(FinalPrideDelta);
    EmotionB->ModifyJealousy(FinalJealousyDelta);
    EmotionB->ModifyVulnerability(FinalVulnerabilityDelta);

    RecalculateRelationshipState();

    const FString PhaseText =
        CurrentPhase == EKTFGStoryPhase::Attraction ? TEXT("Attraction") :
        CurrentPhase == EKTFGStoryPhase::Development ? TEXT("Development") :
        CurrentPhase == EKTFGStoryPhase::Conflict ? TEXT("Conflict") : TEXT("Resolution");

    UE_LOG(LogKTFG, Log, TEXT("KTFG: [%s] '%s' | Score: %.1f | Fase: %s"),
        RelationshipTrope ? *RelationshipTrope->TropeName.ToString() : TEXT("Sin tropo"),
        *Situation->SituationID.ToString(),
        RomanticProgressionScore,
        *PhaseText);

	//Mensaje en pantalla para debug visual rápido; comentar si no se necesita.
    //if (GEngine)
    //{
    //    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow,
    //        FString::Printf(TEXT("KTFG: [%s] '%s' | Score: %.1f | Fase: %s"),
    //            RelationshipTrope ? *RelationshipTrope->TropeName.ToString() : TEXT("Sin tropo"),
    //            *Situation->SituationID.ToString(),
    //            RomanticProgressionScore,
    //            *PhaseText));
    //}
}

// ─────────────────────────────────────────────────────────────────────────────
// CÁLCULO DEL SCORE Y LA FASE
// ─────────────────────────────────────────────────────────────────────────────

float UKTFGRelationshipComponent::CalculateProgressionScore() const
{
    const AKTFGRomanceCharacterBase* OwnerCharacter = Cast<AKTFGRomanceCharacterBase>(GetOwner());
    if (!OwnerCharacter || !CharacterB) return 0.0f;

    const UKTFGEmotionComponent* OwnerEmotion = OwnerCharacter->GetEmotionComponent();
    const UKTFGEmotionComponent* RelatedEmotion = CharacterB->GetEmotionComponent();
    if (!OwnerEmotion || !RelatedEmotion) return 0.0f;

    // El score refleja el estado emocional medio de ambos personajes,
    // no el de uno solo, para modelar que la relación es bidireccional.
    const float AvgAffection = (OwnerEmotion->Affection + RelatedEmotion->Affection) * 0.5f;
    const float AvgTrust = (OwnerEmotion->Trust + RelatedEmotion->Trust) * 0.5f;
    const float AvgPride = (OwnerEmotion->Pride + RelatedEmotion->Pride) * 0.5f;
    const float AvgJealousy = (OwnerEmotion->Jealousy + RelatedEmotion->Jealousy) * 0.5f;
    const float AvgVulnerability = (OwnerEmotion->Vulnerability + RelatedEmotion->Vulnerability) * 0.5f;

    // Contribución positiva máxima = 100:
    //   Affection 100 → +45  (peso mayor: indicador principal de avance)
    //   Trust     100 → +30
    //   Vulnerability 100 → +25  (apertura emocional facilita la intimidad)
    const float Positive =
        (AvgAffection * 0.45f) +
        (AvgTrust * 0.30f) +
        (AvgVulnerability * 0.25f);

    // Pride penaliza linealmente desde 0:
    //   Pride = 80 → −16 puntos (el personaje se resiste al acercamiento)
    const float PridePenalty = AvgPride * 0.20f;

    // Jealousy solo penaliza por encima de 50:
    //   Celos moderados no bloquean la progresión; el exceso sí.
    const float JealousyPenalty = AvgJealousy < 50.0f
        ? 0.0f
        : (AvgJealousy - 50.0f) * 0.20f;

    return FMath::Clamp(Positive - PridePenalty - JealousyPenalty, 0.0f, 100.0f);
}

EKTFGStoryPhase UKTFGRelationshipComponent::CalculatePhaseFromScore(float Score) const
{
    // Umbrales de fase: Attraction [0,25) · Development [25,50) · Conflict [50,75) · Resolution [75,100]
    if (Score < 25.0f) return EKTFGStoryPhase::Attraction;
    if (Score < 50.0f) return EKTFGStoryPhase::Development;
    if (Score < 75.0f) return EKTFGStoryPhase::Conflict;
    return EKTFGStoryPhase::Resolution;
}

// ─────────────────────────────────────────────────────────────────────────────
// EVENTOS RELACIONALES
// ─────────────────────────────────────────────────────────────────────────────

void UKTFGRelationshipComponent::CheckAndFireEvents()
{
    if (RelationshipEvents.IsEmpty()) return;

    AKTFGRomanceCharacterBase* Owner = Cast<AKTFGRomanceCharacterBase>(GetOwner());
    if (!Owner) return;

    UKTFGEmotionComponent* EmotionComp = Owner->GetEmotionComponent();
    if (!EmotionComp) return;

    for (UKTFGRelationshipEventData* EventData : RelationshipEvents)
    {
        if (!EventData || EventData->EventID.IsNone()) continue;

        // Si el evento es de disparo único y ya ocurrió, omitir sin coste adicional.
        // FiredEventIDs usa TSet → Contains en O(1).
        if (EventData->bFireOnlyOnce && HasEventFired(EventData->EventID)) continue;

        // Comprobar todas las condiciones activas. Si alguna falla, saltar al siguiente evento.
        if (EventData->bRequiresPhase && (uint8)CurrentPhase < (uint8)EventData->RequiredPhase) continue;
        if (EventData->bRequiresMinScore && RomanticProgressionScore < EventData->MinScore) continue;
        if (EventData->bRequiresMinAffection && EmotionComp->Affection < EventData->MinAffection) continue;
        if (EventData->bRequiresMinTrust && EmotionComp->Trust < EventData->MinTrust) continue;
        if (EventData->bRequiresMinPride && EmotionComp->Pride < EventData->MinPride) continue;
        if (EventData->bRequiresMinVulnerability && EmotionComp->Vulnerability < EventData->MinVulnerability) continue;

        // Todas las condiciones cumplidas: registrar, aplicar efectos y disparar el delegate.

        if (EventData->bFireOnlyOnce)
        {
            FiredEventIDs.Add(EventData->EventID);
        }

        if (EventData->AffectionDelta != 0.0f) EmotionComp->ModifyAffection(EventData->AffectionDelta);
        if (EventData->TrustDelta != 0.0f) EmotionComp->ModifyTrust(EventData->TrustDelta);
        if (EventData->PrideDelta != 0.0f) EmotionComp->ModifyPride(EventData->PrideDelta);
        if (EventData->JealousyDelta != 0.0f) EmotionComp->ModifyJealousy(EventData->JealousyDelta);
        if (EventData->VulnerabilityDelta != 0.0f) EmotionComp->ModifyVulnerability(EventData->VulnerabilityDelta);

        OnRelationshipEventFired.Broadcast(EventData, Owner);

        UE_LOG(LogKTFG, Log, TEXT("KTFG [%s]: Evento disparado — '%s'"),
            *Owner->GetName(), *EventData->EventID.ToString());
    }
}

bool UKTFGRelationshipComponent::HasEventFired(FName EventID) const
{
    return FiredEventIDs.Contains(EventID);
}

void UKTFGRelationshipComponent::ResetFiredEvents()
{
    FiredEventIDs.Empty();
    UE_LOG(LogKTFG, Log, TEXT("KTFG [%s]: Historial de eventos relacionales reseteado."),
        *GetOwner()->GetName());
}
