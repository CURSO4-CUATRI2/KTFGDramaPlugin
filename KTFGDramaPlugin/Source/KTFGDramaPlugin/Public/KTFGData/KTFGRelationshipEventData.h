// KTFGRelationshipEventData.h
// Propósito : DataAsset que define un hito narrativo dentro de la progresión
//             romántica entre dos personajes.
//
// Responsabilidades:
//   - Especificar las condiciones de activación del evento (fase, score,
//     umbrales emocionales), que el sistema evalúa en cada recálculo.
//   - Definir los deltas emocionales opcionales que el evento aplica
//     al dispararse.
//   - Controlar si el evento es de uso único (bFireOnlyOnce) o recurrente.
//
// Instrucciones de uso:
//   1. Crea un asset de este tipo en el Content Browser
//      (clic derecho → Miscellaneous → DataAsset → KTFGRelationshipEventData).
//   2. Configura las condiciones de activación (fase, score, emociones).
//   3. Añade el asset al array RelationshipEvents del RelationshipComponent.
//
// Eventos recomendados para empezar:
//   - DA_Event_FirstConnection   (Attraction,  score > 20)
//   - DA_Event_StrongArgument    (Development, pride  > 70)
//   - DA_Event_EmotionalOpening  (Development, vulnerability > 60)
//   - DA_Event_Confession        (Resolution,  score > 75)

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KTFGData/KTFGRomancePhases.h"
#include "KTFGRelationshipEventData.generated.h"


UCLASS(BlueprintType)
class KTFGDRAMAPLUGIN_API UKTFGRelationshipEventData : public UDataAsset
{
    GENERATED_BODY()

public:

    // ── IDENTIFICACIÓN ────────────────────────────────────────────────────────

    /** ID único del evento. Usado internamente para rastrear si ya se disparó. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|Event",
        meta = (ToolTip = "ID único del evento. Debe ser distinto en cada DataAsset de evento."))
    FName EventID;

    /** Nombre legible del evento, para logs y UI. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|Event")
    FText DisplayName;

    /** Descripción narrativa del evento (opcional, para documentar o mostrar en pantalla). */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|Event",
        meta = (MultiLine = true))
    FText Description;


    // ── CONDICIONES DE ACTIVACIÓN ─────────────────────────────────────────────
    // Todas las condiciones habilitadas deben cumplirse simultáneamente
    // para que el evento se dispare.

    /** Si está activado, el evento solo se dispara cuando la relación está en esta fase o superior. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EventConditions",
        meta = (ToolTip = "Activa para requerir una fase mínima."))
    bool bRequiresPhase = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EventConditions",
        meta = (EditCondition = "bRequiresPhase",
            ToolTip = "Fase mínima requerida para que este evento pueda activarse."))
    EKTFGStoryPhase RequiredPhase = EKTFGStoryPhase::Attraction;

    /** Si está activado, el evento requiere un RomanticProgressionScore mínimo. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EventConditions")
    bool bRequiresMinScore = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EventConditions",
        meta = (EditCondition = "bRequiresMinScore", ClampMin = "0.0", ClampMax = "100.0"))
    float MinScore = 0.0f;

    /** Si está activado, requiere que Affection supere este valor. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EventConditions")
    bool bRequiresMinAffection = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EventConditions",
        meta = (EditCondition = "bRequiresMinAffection", ClampMin = "0.0", ClampMax = "100.0"))
    float MinAffection = 0.0f;

    /** Si está activado, requiere que Trust supere este valor. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EventConditions")
    bool bRequiresMinTrust = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EventConditions",
        meta = (EditCondition = "bRequiresMinTrust", ClampMin = "0.0", ClampMax = "100.0"))
    float MinTrust = 0.0f;

    /** Si está activado, requiere que Pride supere este valor (útil para StrongArgument). */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EventConditions")
    bool bRequiresMinPride = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EventConditions",
        meta = (EditCondition = "bRequiresMinPride", ClampMin = "0.0", ClampMax = "100.0"))
    float MinPride = 0.0f;

    /** Si está activado, requiere que Vulnerability supere este valor (útil para EmotionalOpening). */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EventConditions")
    bool bRequiresMinVulnerability = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EventConditions",
        meta = (EditCondition = "bRequiresMinVulnerability", ClampMin = "0.0", ClampMax = "100.0"))
    float MinVulnerability = 0.0f;


    // ── EFECTOS AL ACTIVARSE ──────────────────────────────────────────────────
    // Deltas emocionales opcionales que se aplican en el momento del disparo.
    // Valores positivos suben, negativos bajan. 0 = sin cambio.

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EventEffects",
        meta = (ToolTip = "Cuánto cambia Affection cuando se dispara este evento."))
    float AffectionDelta = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EventEffects")
    float TrustDelta = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EventEffects")
    float PrideDelta = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EventEffects")
    float JealousyDelta = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EventEffects")
    float VulnerabilityDelta = 0.0f;


    // ── COMPORTAMIENTO ────────────────────────────────────────────────────────

    /**
     * Si es true, el evento solo puede dispararse una vez por relación y queda
     * registrado en FiredEventIDs. Recomendado para hitos narrativos únicos
     * (FirstConnection, Confession).
     * Si es false, se disparará cada vez que se cumplan las condiciones;
     * adecuado para eventos recurrentes como StrongArgument.
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EventBehavior",
        meta = (ToolTip = "Si está activado, el evento solo se dispara una vez durante toda la relación."))
    bool bFireOnlyOnce = true;
};
