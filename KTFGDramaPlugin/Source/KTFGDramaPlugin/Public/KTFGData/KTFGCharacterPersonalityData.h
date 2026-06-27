// KTFGCharacterPersonalityData.h
// Propósito : DataAsset que define los rasgos de personalidad estables de un
//             personaje romántico.
//
// Responsabilidades:
//   - Almacenar seis dimensiones de personalidad en rango [0, 100].
//   - Servir de referencia para futuras extensiones del sistema que quieran
//     modular cómo un personaje responde a situaciones en función de su
//     carácter (ej. un personaje con EmotionalOpenness baja podría ampliar
//     menos los deltas de Vulnerability).
//
// Notas de diseño:
//   - En la versión actual del plugin, PersonalityData se almacena en
//     AKTFGRomanceCharacterBase pero no modifica directamente los cálculos
//     del RPS: es información de contexto disponible para el diseñador
//     y para futuras mecánicas de personalidad reactiva.
//   - Todos los valores parten en 50 (neutro) por coherencia con la escala
//     emocional del sistema.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KTFGCharacterPersonalityData.generated.h"


UCLASS(BlueprintType)
class KTFGDRAMAPLUGIN_API UKTFGCharacterPersonalityData : public UDataAsset
{
    GENERATED_BODY()

public:

    // ── RASGOS DE PERSONALIDAD ────────────────────────────────────────────────

    /**
     * Calidez y cercanía natural del personaje.
     * Alto: tendente a la ternura y la protección.
     * Bajo: distante y reservado por defecto.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KTFG|Personality",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float Warmth = 50.0f;

    /**
     * Nivel de orgullo de base del personaje, independiente de las interacciones.
     * Referencia para calibrar el InitialPride del tropo asignado.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KTFG|Personality",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float PrideBaseline = 50.0f;

    /**
     * Facilidad para abrirse emocionalmente.
     * Alto: el personaje muestra vulnerabilidad con mayor naturalidad.
     * Bajo: tiende a ocultar sus emociones.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KTFG|Personality",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float EmotionalOpenness = 50.0f;

    /**
     * Tolerancia al conflicto relacional.
     * Alto: el personaje no se cierra ante las discusiones.
     * Bajo: los conflictos le afectan con más intensidad.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KTFG|Personality",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float ConflictTolerance = 50.0f;

    /**
     * Sensibilidad a los celos.
     * Alto: los estímulos que generan Jealousy tienen mayor impacto.
     * Bajo: el personaje es emocionalmente seguro ante la rivalidad.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KTFG|Personality",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float JealousySensitivity = 50.0f;

    /**
     * Velocidad con la que el personaje forma vínculos emocionales.
     * Alto: se engancha emocionalmente con facilidad y rapidez.
     * Bajo: necesita más tiempo e interacciones para confiar.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KTFG|Personality",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float AttachmentSpeed = 50.0f;
};
