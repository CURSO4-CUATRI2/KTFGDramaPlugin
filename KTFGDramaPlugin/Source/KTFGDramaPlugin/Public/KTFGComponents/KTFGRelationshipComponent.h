// KTFGRelationshipComponent.h
// Propósito : Gestiona el estado y la progresión de una relación romántica
//             entre dos personajes.
//
// Responsabilidades:
//   - Calcular el RomanticProgressionScore (RPS) a partir de las emociones
//     de ambos personajes usando la fórmula ponderada del sistema.
//   - Determinar y avanzar la fase narrativa (Attraction → Development →
//     Conflict → Resolution), que es siempre unidireccional.
//   - Aplicar los valores emocionales iniciales del tropo asignado.
//   - Ejecutar situaciones (UKTFGSituationData) que modifican emociones
//     y disparan el recálculo.
//   - Comprobar y disparar eventos narrativos (UKTFGRelationshipEventData)
//     cuando se cumplen sus condiciones.
//   - Exponer delegates Blueprint para cambios de fase y activación de eventos.
//
// Notas de diseño:
//   - CharacterB es la referencia al otro personaje de la pareja. Las emociones
//     se leen de ambos y se promedian en CalculateProgressionScore().
//   - Las fases son ONE-WAY: nunca retroceden aunque el score caiga,
//     para preservar la coherencia narrativa.
//   - FiredEventIDs persiste durante toda la vida del componente; para
//     reiniciar eventos usa ResetFiredEvents().

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KTFGData/KTFGCharacterPersonalityData.h"
#include "KTFGData/KTFGRomanceTropeData.h"
#include "KTFGData/KTFGSituationData.h"
#include "KTFGData/KTFGRomancePhases.h"
#include "KTFGData/KTFGRelationshipEventData.h"
#include "KTFGBase/KTFGDramaSubsystem.h"
#include "KTFGRelationshipComponent.generated.h"

class AKTFGRomanceCharacterBase;

// ── DELEGATES ─────────────────────────────────────────────────────────────────

/** Notifica a Blueprint cuando la relación avanza a una nueva fase narrativa. */
UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
    FOnPhaseChanged,
    EKTFGStoryPhase, OldPhase,
    EKTFGStoryPhase, NewPhase
);

/** Notifica a Blueprint cuando un evento relacional supera sus condiciones. */
UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
    FOnRelationshipEventFired,
    UKTFGRelationshipEventData*, EventData,
    AKTFGRomanceCharacterBase*, FiredBy
);


// ── CLASE PRINCIPAL ───────────────────────────────────────────────────────────

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class KTFGDRAMAPLUGIN_API UKTFGRelationshipComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UKTFGRelationshipComponent();

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


    // ── ESTADO DE LA RELACIÓN ─────────────────────────────────────────────────

    /** Fase narrativa actual. Solo avanza; nunca retrocede. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "KTFG|Relationship")
    EKTFGStoryPhase CurrentPhase = EKTFGStoryPhase::Attraction;

    /**
     * Tropo que define los valores emocionales de partida y los modificadores
     * de crecimiento de esta relación.
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|Relationship")
    UKTFGRomanceTropeData* RelationshipTrope = nullptr;

    /** El otro personaje de la pareja. Sus emociones se leen para calcular el RPS. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|Relationship")
    AKTFGRomanceCharacterBase* CharacterB = nullptr;

    /**
     * Puntuación de progresión romántica [0, 100].
     * Calculada a partir de la media de emociones de ambos personajes
     * con la fórmula ponderada del sistema.
     */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "KTFG|Relationship",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float RomanticProgressionScore = 0.0f;

    /**
     * Lista de eventos narrativos a comprobar en cada recálculo.
     * Añade aquí los DataAssets de tipo UKTFGRelationshipEventData que
     * quieras que esta relación pueda activar.
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|RelationshipEvents",
        meta = (ToolTip = "Eventos narrativos que se comprueban automáticamente en cada recálculo de la relación."))
    TArray<UKTFGRelationshipEventData*> RelationshipEvents;


    // ── FUNCIONES DE RELACIÓN ─────────────────────────────────────────────────

    /**
     * Recalcula el RPS y actualiza la fase si corresponde.
     * Llamar tras cualquier modificación de emociones para mantener
     * el estado de la relación sincronizado.
     */
    UFUNCTION(BlueprintCallable, Category = "KTFG|Relationship")
    void RecalculateRelationshipState();

    /** Asigna un tropo nuevo y aplica sus valores emocionales iniciales. */
    UFUNCTION(BlueprintCallable, Category = "KTFG|Relationship")
    void SetRomanceProfile(UKTFGRomanceTropeData* NewRelationshipTrope);

    /** Cambia el personaje B de la pareja sin resetear el estado actual. */
    UFUNCTION(BlueprintCallable, Category = "KTFG|Relationship")
    void SetRelatedCharacter(AKTFGRomanceCharacterBase* NewCharacterB);

    /**
     * Aplica inmediatamente los valores emocionales iniciales del tropo
     * al EmotionComponent de este personaje.
     * Normalmente no hace falta llamarlo a mano: SetRomanceProfile() ya lo hace.
     */
    UFUNCTION(BlueprintCallable, Category = "KTFG|Relationship")
    void ApplyTropeInitialValues();

    /**
     * Ejecuta una situación: aplica sus deltas emocionales y, si el botón
     * asociado no está vacío, lo desactiva para evitar doble activación.
     * Llama automáticamente a RecalculateRelationshipState() al terminar.
     */
    UFUNCTION(BlueprintCallable, Category = "KTFG|Relationship")
    void TriggerSituation(UKTFGSituationData* Situation);

    /** Versión interna sin parámetros para llamadas desde BeginPlay. */
    void TryApplyTropeInitialValues();


    // ── SISTEMA DE EVENTOS NARRATIVOS ─────────────────────────────────────────

    /**
     * Comprueba todos los eventos en RelationshipEvents y dispara los que
     * cumplan sus condiciones. Llamado automáticamente por RecalculateRelationshipState().
     * También puedes llamarlo manualmente desde Blueprint si lo necesitas.
     */
    UFUNCTION(BlueprintCallable, Category = "KTFG|RelationshipEvents",
        meta = (ToolTip = "Comprueba y dispara los eventos relacionales cuyas condiciones se cumplan ahora."))
    void CheckAndFireEvents();

    /**
     * Devuelve true si un evento con ese ID ya se ha disparado en esta relación.
     * Útil para controlar el estado narrativo desde Blueprint.
     */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "KTFG|RelationshipEvents",
        meta = (ToolTip = "Devuelve true si el evento con ese ID ya se disparó en esta relación."))
    bool HasEventFired(FName EventID) const;

    /**
     * Resetea el historial de eventos disparados.
     * Útil si el jugador reinicia una ruta o la relación se disuelve y vuelve a empezar.
     */
    UFUNCTION(BlueprintCallable, Category = "KTFG|RelationshipEvents")
    void ResetFiredEvents();


    // ── DELEGATES / EVENTOS BLUEPRINT ─────────────────────────────────────────

    /** Se dispara cuando la relación avanza a una nueva fase narrativa. */
    UPROPERTY(BlueprintAssignable, Category = "KTFG|Relationship|Events")
    FOnPhaseChanged OnPhaseChanged;

    /**
     * Se dispara cuando se activa un evento relacional.
     * Enlaza este evento en Blueprint para mostrar diálogo, animaciones
     * o cualquier reacción narrativa al hito.
     */
    UPROPERTY(BlueprintAssignable, Category = "KTFG|RelationshipEvents",
        meta = (ToolTip = "Se dispara cuando se activa un evento relacional. Úsalo para triggerar reacciones narrativas."))
    FOnRelationshipEventFired OnRelationshipEventFired;

protected:
    /** Implementa la fórmula ponderada: Affection×0.45 + Trust×0.30 + Vulnerability×0.25 - penalizaciones. */
    float CalculateProgressionScore() const;

    /** Mapea el score a su fase correspondiente según los umbrales del diseño. */
    EKTFGStoryPhase CalculatePhaseFromScore(float Score) const;

private:
    /** IDs de los eventos bFireOnlyOnce que ya se han disparado en esta relación. */
    TSet<FName> FiredEventIDs;

    /** Evita aplicar los valores del tropo más de una vez por ciclo de vida. */
    bool bInitialTropeValuesApplied = false;
};
