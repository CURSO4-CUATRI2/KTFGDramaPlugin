// KTFGSituationData.h
// Propósito : DataAsset que representa una situación interactiva —una acción
//             que el jugador puede desencadenar sobre la relación.
//
// Responsabilidades:
//   - Definir los deltas emocionales que la situación aplica (pueden ser
//     positivos o negativos, según si la interacción favorece o tensiona).
//   - Establecer condiciones de activación opcionales: fase mínima y/o
//     score mínimo, para que ciertas situaciones solo sean accesibles
//     cuando la relación ha madurado lo suficiente.
//
// Notas de diseño:
//   - Las condiciones no son exclusivas: una situación puede requerir
//     simultaneamente fase mínima Y score mínimo (ej. "Confess" requiere
//     fase Conflict Y score ≥ ConfessionThreshold del tropo).
//   - Los deltas no se aplican directamente: pasan por los modificadores
//     de crecimiento del tropo antes de sumarse a las emociones.
//   - Cada situación se asigna a un botón en el prototipo; UKTFGRelationshipComponent
//     desactiva ese botón tras la ejecución para impedir repeticiones.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KTFGData/KTFGRomancePhases.h"
#include "KTFGSituationData.generated.h"


UCLASS(BlueprintType)
class KTFGDRAMAPLUGIN_API UKTFGSituationData : public UDataAsset
{
    GENERATED_BODY()

public:

    // ── IDENTIFICACIÓN ────────────────────────────────────────────────────────

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|Situation")
    FName SituationID;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|Situation")
    FText DisplayName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|Situation")
    FText Description;


    // ── DELTAS EMOCIONALES ────────────────────────────────────────────────────
    // Cuánto cambia cada emoción al ejecutar esta situación.
    // Valores positivos suben; negativos bajan. 0 = sin efecto.

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|SituationDeltas")
    float AffectionDelta = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|SituationDeltas")
    float TrustDelta = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|SituationDeltas")
    float PrideDelta = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|SituationDeltas")
    float JealousyDelta = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|SituationDeltas")
    float VulnerabilityDelta = 0.0f;


    // ── CONDICIONES DE ACTIVACIÓN ─────────────────────────────────────────────

    /**
     * Si está activado, esta situación solo se puede ejecutar cuando la
     * relación haya alcanzado MinRequiredPhase o una posterior.
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|SituationConditions")
    bool bRequiresMinPhase = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|SituationConditions",
        meta = (EditCondition = "bRequiresMinPhase"))
    EKTFGStoryPhase MinRequiredPhase = EKTFGStoryPhase::Attraction;

    /**
     * Si está activado, esta situación requiere además que el RPS sea
     * igual o superior a MinRequiredScore.
     * Útil para situaciones críticas como "Confess".
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|SituationConditions")
    bool bRequiresMinScore = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|SituationConditions",
        meta = (EditCondition = "bRequiresMinScore", ClampMin = "0.0", ClampMax = "100.0"))
    float MinRequiredScore = 0.0f;
};
