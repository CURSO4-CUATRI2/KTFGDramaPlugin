// KTFGRomancePhases.h
// Propósito : Define las cuatro fases narrativas por las que puede avanzar
//             una relación romántica en el sistema KTFG.
//
// Notas de diseño:
//   - El orden del enum es deliberado: Attraction < Development < Conflict <
//     Resolution. UKTFGRelationshipComponent usa comparación directa de valores
//     para garantizar que las fases sean ONE-WAY (nunca retroceden).
//   - Los umbrales de transición están en UKTFGRelationshipComponent::
//     CalculatePhaseFromScore():  <25 Attraction | 25-49 Development |
//     50-74 Conflict | ≥75 Resolution.

#pragma once

#include "CoreMinimal.h"
#include "KTFGRomancePhases.generated.h"


UENUM(BlueprintType)
enum class EKTFGStoryPhase : uint8
{
    /** Primera fase: atracción inicial, tensión sin definir. Score < 25. */
    Attraction   UMETA(DisplayName = "Attraction"),

    /** Segunda fase: el vínculo se consolida. Score 25–49. */
    Development  UMETA(DisplayName = "Development"),

    /**
     * Tercera fase: la relación pasa por su mayor tensión narrativa.
     * Es aquí donde se habilita la situación "Confess". Score 50–74.
     */
    Conflict     UMETA(DisplayName = "Conflict"),

    /** Cuarta y última fase: resolución del arco romántico. Score ≥ 75. */
    Resolution   UMETA(DisplayName = "Resolution")
};
