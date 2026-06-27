// KTFGDramaSubsystem.cpp
// Motor central del sistema de relaciones románticas.
// Implementa UWorldSubsystem: Unreal lo inicializa automáticamente con el mundo,
// sin que el proyecto huésped necesite tocar su GameMode ni ninguna clase global.
//
// Responsabilidades:
//   — Cargar la configuración de parejas desde el DataAsset (LoadConfig)
//   — Registrar y desregistrar personajes al entrar y salir de escena
//   — Resolver el orden de carga con la cola PendingPairConfigs
//   — Mantener el mapa de relaciones activas (RelationshipMap)

#include "KTFGBase/KTFGDramaSubsystem.h"
#include "KTFGCharacters/KTFGRomanceCharacterBase.h"
#include "KTFGComponents/KTFGRelationshipComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogKTFG, Log, All);

// ─────────────────────────────────────────────────────────────────────────────
// CICLO DE VIDA DEL SUBSISTEMA
// ─────────────────────────────────────────────────────────────────────────────

void UKTFGDramaSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    UE_LOG(LogKTFG, Log, TEXT("KTFGDramaSubsystem inicializado. Llama a LoadConfig() desde tu GameMode o Level Blueprint."));
}

void UKTFGDramaSubsystem::Deinitialize()
{
    // Limpiar todo el estado interno antes de que el mundo se destruya.
    RelationshipMap.Empty();
    PendingCharacters.Empty();
    PendingPairConfigs.Empty();
    ActiveConfig = nullptr;
    bConfigLoaded = false;

    Super::Deinitialize();
}

// ─────────────────────────────────────────────────────────────────────────────
// CONFIGURACIÓN
// ─────────────────────────────────────────────────────────────────────────────

void UKTFGDramaSubsystem::LoadConfig(UKTFGRelationshipConfigData* Config)
{
    if (!Config)
    {
        UE_LOG(LogKTFG, Error, TEXT("KTFGDramaSubsystem::LoadConfig — Config es nullptr. Asegúrate de asignar un UKTFGRelationshipConfigData válido."));
        return;
    }

    ActiveConfig = Config;
    bConfigLoaded = true;

    // Solo encolar las parejas marcadas como activas al inicio.
    // Las inactivas (bActiveAtStart = false) se activarán manualmente con ActivatePair().
    PendingPairConfigs.Empty();
    for (const FKTFGPairConfig& Pair : Config->Pairs)
    {
        if (Pair.bActiveAtStart)
        {
            PendingPairConfigs.Add(Pair);
        }
    }

    UE_LOG(LogKTFG, Log, TEXT("KTFGDramaSubsystem: Config cargado con %d parejas (%d activas al inicio)."),
        Config->Pairs.Num(), PendingPairConfigs.Num());

    // Si LoadConfig se llama tarde (después de que algunos personajes ya hicieron BeginPlay),
    // intentar enlazar los que ya estén esperando en PendingCharacters.
    TArray<TObjectPtr<AKTFGRomanceCharacterBase>> CurrentPending = PendingCharacters;
    for (AKTFGRomanceCharacterBase* Character : CurrentPending)
    {
        TryLinkPendingCharacter(Character);
    }
}

// ─────────────────────────────────────────────────────────────────────────────
// REGISTRO DE PERSONAJES
// ─────────────────────────────────────────────────────────────────────────────

void UKTFGDramaSubsystem::RegisterCharacter(AKTFGRomanceCharacterBase* Character)
{
    if (!Character) return;

    if (Character->CharacterID.IsNone())
    {
        UE_LOG(LogKTFG, Warning, TEXT("KTFGDramaSubsystem: '%s' no tiene CharacterID configurado. No podrá enlazarse automáticamente."),
            *Character->GetName());
        return;
    }

    // Añadir a la cola y tratar de enlazar inmediatamente si la pareja ya está disponible.
    PendingCharacters.AddUnique(Character);
    TryLinkPendingCharacter(Character);
}

void UKTFGDramaSubsystem::UnregisterCharacter(AKTFGRomanceCharacterBase* Character)
{
    if (!Character) return;

    PendingCharacters.Remove(Character);

    if (FKTFGActiveRelationship* Relationship = RelationshipMap.Find(Character))
    {
        // Identificar la pareja del personaje que se va.
        AKTFGRomanceCharacterBase* Partner = (Relationship->CharacterA == Character)
            ? Relationship->CharacterB
            : Relationship->CharacterA;

        if (Partner)
        {
            // La pareja queda sin enlace y vuelve a la cola de pendientes
            // para que pueda reenlazarse si el personaje reaparece.
            RelationshipMap.Remove(Partner);
            PendingCharacters.AddUnique(Partner);
            UE_LOG(LogKTFG, Log, TEXT("KTFGDramaSubsystem: '%s' destruido. Su pareja '%s' queda sin enlace."),
                *Character->GetName(), *Partner->GetName());
        }

        RelationshipMap.Remove(Character);
    }
}

// ─────────────────────────────────────────────────────────────────────────────
// REGISTRO MANUAL DE PAREJAS
// ─────────────────────────────────────────────────────────────────────────────

void UKTFGDramaSubsystem::RegisterPair(AKTFGRomanceCharacterBase* CharacterA, AKTFGRomanceCharacterBase* CharacterB, UKTFGRomanceTropeData* Trope)
{
    if (!CharacterA || !CharacterB)
    {
        UE_LOG(LogKTFG, Error, TEXT("KTFGDramaSubsystem::RegisterPair — Uno o ambos personajes son nullptr."));
        return;
    }

    if (CharacterA == CharacterB)
    {
        UE_LOG(LogKTFG, Error, TEXT("KTFGDramaSubsystem::RegisterPair — CharacterA y CharacterB son el mismo Actor."));
        return;
    }

    // Disolver relaciones previas para evitar que un personaje quede
    // referenciado en dos relaciones simultáneas.
    DissolveRelationship(CharacterA);
    DissolveRelationship(CharacterB);

    LinkPair(CharacterA, CharacterB, Trope);
}

void UKTFGDramaSubsystem::ActivatePair(FName CharacterAID, FName CharacterBID)
{
    if (!ActiveConfig)
    {
        UE_LOG(LogKTFG, Error, TEXT("KTFGDramaSubsystem::ActivatePair — No hay Config cargado. Llama a LoadConfig primero."));
        return;
    }

    // Buscar la configuración de esta pareja en el DataAsset.
    // Se acepta el par en cualquier orden (A+B o B+A).
    const FKTFGPairConfig* FoundConfig = nullptr;
    for (const FKTFGPairConfig& Pair : ActiveConfig->Pairs)
    {
        if ((Pair.CharacterAID == CharacterAID && Pair.CharacterBID == CharacterBID) ||
            (Pair.CharacterAID == CharacterBID && Pair.CharacterBID == CharacterAID))
        {
            FoundConfig = &Pair;
            break;
        }
    }

    if (!FoundConfig)
    {
        UE_LOG(LogKTFG, Error, TEXT("KTFGDramaSubsystem::ActivatePair — Pareja '%s' + '%s' no encontrada en el Config."),
            *CharacterAID.ToString(), *CharacterBID.ToString());
        return;
    }

    AKTFGRomanceCharacterBase* A = FindRegisteredCharacter(CharacterAID);
    AKTFGRomanceCharacterBase* B = FindRegisteredCharacter(CharacterBID);

    if (!A || !B)
    {
        // Uno o ambos personajes aún no están en escena.
        // Encolar la config para enlazar en cuanto lleguen.
        PendingPairConfigs.AddUnique(*FoundConfig);
        UE_LOG(LogKTFG, Log, TEXT("KTFGDramaSubsystem: Pareja '%s' + '%s' encolada (personajes aún no en escena)."),
            *CharacterAID.ToString(), *CharacterBID.ToString());
        return;
    }

    LinkPair(A, B, FoundConfig->Trope);
}

void UKTFGDramaSubsystem::DissolveRelationship(AKTFGRomanceCharacterBase* Character)
{
    if (!Character) return;

    FKTFGActiveRelationship* Relationship = RelationshipMap.Find(Character);
    if (!Relationship) return;

    AKTFGRomanceCharacterBase* Partner = (Relationship->CharacterA == Character)
        ? Relationship->CharacterB
        : Relationship->CharacterA;

    RelationshipMap.Remove(Character);
    if (Partner)
    {
        RelationshipMap.Remove(Partner);
    }

    // Notificar a los RelationshipComponents para que limpien su referencia a CharacterB.
    if (UKTFGRelationshipComponent* RelComp = Character->FindComponentByClass<UKTFGRelationshipComponent>())
    {
        RelComp->SetRelatedCharacter(nullptr);
    }
    if (Partner)
    {
        if (UKTFGRelationshipComponent* RelCompB = Partner->FindComponentByClass<UKTFGRelationshipComponent>())
        {
            RelCompB->SetRelatedCharacter(nullptr);
        }
    }

    UE_LOG(LogKTFG, Log, TEXT("KTFGDramaSubsystem: Relación disuelta para '%s'."), *Character->GetName());
}

// ─────────────────────────────────────────────────────────────────────────────
// CONSULTAS
// ─────────────────────────────────────────────────────────────────────────────

AKTFGRomanceCharacterBase* UKTFGDramaSubsystem::GetPartnerOf(AKTFGRomanceCharacterBase* Character) const
{
    if (!Character) return nullptr;

    const FKTFGActiveRelationship* Relationship = RelationshipMap.Find(Character);
    if (!Relationship) return nullptr;

    return (Relationship->CharacterA == Character) ? Relationship->CharacterB : Relationship->CharacterA;
}

UKTFGRomanceTropeData* UKTFGDramaSubsystem::GetActiveTrope(AKTFGRomanceCharacterBase* Character) const
{
    if (!Character) return nullptr;

    const FKTFGActiveRelationship* Relationship = RelationshipMap.Find(Character);
    return Relationship ? Relationship->Trope : nullptr;
}

FKTFGActiveRelationship UKTFGDramaSubsystem::GetRelationshipOf(AKTFGRomanceCharacterBase* Character, bool& bFound) const
{
    if (const FKTFGActiveRelationship* Relationship = RelationshipMap.Find(Character))
    {
        bFound = true;
        return *Relationship;
    }

    bFound = false;
    return FKTFGActiveRelationship();
}

TArray<FKTFGActiveRelationship> UKTFGDramaSubsystem::GetAllActiveRelationships() const
{
    TArray<FKTFGActiveRelationship> Result;
    TSet<AKTFGRomanceCharacterBase*> Seen;

    // El mapa almacena cada relación dos veces (una por personaje).
    // Seen evita devolver duplicados.
    for (const auto& Pair : RelationshipMap)
    {
        if (!Seen.Contains(Pair.Key))
        {
            Result.Add(Pair.Value);
            Seen.Add(Pair.Value.CharacterA);
            Seen.Add(Pair.Value.CharacterB);
        }
    }

    return Result;
}

// ─────────────────────────────────────────────────────────────────────────────
// MÉTODOS PRIVADOS
// ─────────────────────────────────────────────────────────────────────────────

void UKTFGDramaSubsystem::TryLinkPendingCharacter(AKTFGRomanceCharacterBase* Character)
{
    if (!Character || !bConfigLoaded) return;

    for (int32 i = PendingPairConfigs.Num() - 1; i >= 0; --i)
    {
        const FKTFGPairConfig& Config = PendingPairConfigs[i];

        FName MyID = Character->CharacterID;
        FName PartnerID;
        bool bIsCharacterA = false;

        if (Config.CharacterAID == MyID)
        {
            PartnerID = Config.CharacterBID;
            bIsCharacterA = true;
        }
        else if (Config.CharacterBID == MyID)
        {
            PartnerID = Config.CharacterAID;
        }
        else
        {
            continue; // Este personaje no pertenece a esta pareja.
        }

        AKTFGRomanceCharacterBase* Partner = FindRegisteredCharacter(PartnerID);
        if (!Partner)
        {
            // La pareja aún no llegó a escena; esperar a su BeginPlay.
            continue;
        }

        AKTFGRomanceCharacterBase* A = bIsCharacterA ? Character : Partner;
        AKTFGRomanceCharacterBase* B = bIsCharacterA ? Partner : Character;

        LinkPair(A, B, Config.Trope);
        PendingPairConfigs.RemoveAt(i);
        PendingCharacters.Remove(A);
        PendingCharacters.Remove(B);

        break; // Un personaje solo puede pertenecer a una pareja activa a la vez.
    }
}

void UKTFGDramaSubsystem::LinkPair(AKTFGRomanceCharacterBase* A, AKTFGRomanceCharacterBase* B, UKTFGRomanceTropeData* Trope)
{
    if (!A || !B) return;

    FKTFGActiveRelationship NewRelationship;
    NewRelationship.CharacterA = A;
    NewRelationship.CharacterB = B;
    NewRelationship.Trope = Trope;

    // Registrar la relación para ambos personajes.
    // El mapa permite consultas en O(1) desde cualquiera de los dos extremos.
    RelationshipMap.Add(A, NewRelationship);
    RelationshipMap.Add(B, NewRelationship);

    // Notificar a los RelationshipComponents para que inicialicen
    // el tropo y apliquen los valores emocionales iniciales.
    if (UKTFGRelationshipComponent* RelCompA = A->FindComponentByClass<UKTFGRelationshipComponent>())
    {
        RelCompA->SetRelatedCharacter(B);
        if (Trope) RelCompA->SetRomanceProfile(Trope);
    }

    if (UKTFGRelationshipComponent* RelCompB = B->FindComponentByClass<UKTFGRelationshipComponent>())
    {
        RelCompB->SetRelatedCharacter(A);
        if (Trope) RelCompB->SetRomanceProfile(Trope);
    }

    UE_LOG(LogKTFG, Log, TEXT("KTFGDramaSubsystem: Pareja enlazada — '%s' + '%s' | Tropo: %s"),
        *A->CharacterID.ToString(),
        *B->CharacterID.ToString(),
        Trope ? *Trope->TropeName.ToString() : TEXT("Sin tropo"));
}

AKTFGRomanceCharacterBase* UKTFGDramaSubsystem::FindRegisteredCharacter(FName CharacterID) const
{
    // Buscar primero en los personajes que aún esperan pareja.
    for (AKTFGRomanceCharacterBase* Character : PendingCharacters)
    {
        if (Character && Character->CharacterID == CharacterID)
        {
            return Character;
        }
    }

    // Buscar en los que ya están enlazados en el mapa.
    for (const auto& Pair : RelationshipMap)
    {
        if (Pair.Key && Pair.Key->CharacterID == CharacterID)
        {
            return Pair.Key;
        }
    }

    return nullptr;
}
