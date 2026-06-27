// KTFGRomanceTropeData.h
// Propósito : DataAsset que encapsula la "personalidad narrativa" de una
//             relación romántica mediante su tropo de origen.
//
// Responsabilidades:
//   - Fijar los valores emocionales de partida de la pareja (Initial*).
//     Estos se aplican al inicio de la relación y determinan el RPS base.
//   - Definir multiplicadores de crecimiento por emoción (*GrowthModifier),
//     que UKTFGRelationshipComponent aplica al procesar los deltas de
//     situaciones y eventos.
//   - Almacenar el umbral de confesión (ConfessionThreshold), que la
//     situación "Confess" usa para decidir si puede ejecutarse.
//
// Notas de diseño:
//   - Los valores iniciales NO son neutrales: modelan el estado emocional
//     previo implícito en cada tropo. EnemiestoLovers empieza con Pride=80
//     (score ≈ 0) y FriendstoLovers con Aff=60, Trust=70 (score ≈ 40).
//     Esta asimetría intencional es parte del diseño del sistema.
//   - El RPS parte en 0 salvo que el tropo lo justifique narrativamente,
//     ya que la fórmula pondera emociones promediadas de ambos personajes.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KTFGRomanceTropeData.generated.h"


UCLASS(BlueprintType)
class KTFGDRAMAPLUGIN_API UKTFGRomanceTropeData : public UDataAsset
{
    GENERATED_BODY()

public:

    // ── IDENTIFICACIÓN ────────────────────────────────────────────────────────

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|RomanceTrope")
    FName TropeName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|RomanceTrope")
    FText DisplayName;


    // ── VALORES EMOCIONALES INICIALES ─────────────────────────────────────────
    // Se aplican al EmotionComponent del personaje en el momento en que
    // el tropo se asigna a la relación.

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EmotionTrope",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float InitialAffection = 10.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EmotionTrope",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float InitialTrust = 10.0f;

    /** Un Pride alto al inicio (ej. EnemiestoLovers = 80) penaliza el RPS base y retrasa la progresión. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EmotionTrope",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float InitialPride = 50.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EmotionTrope",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float InitialJealousy = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EmotionTrope",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float InitialVulnerability = 10.0f;


    // ── MODIFICADORES DE CRECIMIENTO ──────────────────────────────────────────
    // Multiplican los deltas emocionales cuando se aplica una situación.
    // > 1.0 amplifica el efecto; < 1.0 lo amortigua.

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EmotionGrowth",
        meta = (ClampMin = "0.1", ClampMax = "5.0"))
    float AffectionGrowthModifier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EmotionGrowth",
        meta = (ClampMin = "0.1", ClampMax = "5.0"))
    float TrustGrowthModifier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EmotionGrowth",
        meta = (ClampMin = "0.1", ClampMax = "5.0"))
    float PrideGrowthModifier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EmotionGrowth",
        meta = (ClampMin = "0.1", ClampMax = "5.0"))
    float JealousyGrowthModifier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|EmotionGrowth",
        meta = (ClampMin = "0.1", ClampMax = "5.0"))
    float VulnerabilityGrowthModifier = 1.0f;


    // ── UMBRALES ──────────────────────────────────────────────────────────────

    /**
     * Score mínimo necesario para que la situación "Confess" pueda ejecutarse.
     * Por defecto 75, coincidiendo con la entrada a la fase Resolution,
     * aunque puede ajustarse por tropo para modular la dificultad narrativa.
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|Thresholds",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float ConfessionThreshold = 75.0f;
};
