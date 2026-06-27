// KTFGRelationshipConfigData.h
// Propósito : DataAsset central que declara todas las parejas románticas del
//             juego y el tropo inicial de cada una.
//
// Responsabilidades:
//   - Almacenar un array de FKTFGPairConfig, donde cada entrada vincula
//     dos CharacterIDs con un tropo y un flag de activación al inicio.
//   - Ser el único punto de configuración que el desarrollador edita en el
//     Content Browser para definir quién es pareja de quién.
//   - En editor, validar que no haya IDs duplicados ni tropos vacíos
//     sin necesidad de hacer Play (IsDataValid).
//
// Notas de diseño:
//   - UKTFGDramaSubsystem lee este asset en Initialize() y lo usa para
//     emparejar los personajes que se registren en la escena.
//   - CharacterAID y CharacterBID deben coincidir exactamente con el
//     CharacterID configurado en cada AKTFGRomanceCharacterBase de la escena.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KTFGData/KTFGRomanceTropeData.h"
#include "KTFGRelationshipConfigData.generated.h"


// ── ESTRUCTURA DE PAREJA ──────────────────────────────────────────────────────

/**
 * Define una pareja romántica y su configuración inicial.
 * Ambos IDs deben existir en la escena como AKTFGRomanceCharacterBase.
 */
USTRUCT(BlueprintType)
struct FKTFGPairConfig
{
    GENERATED_BODY()

    /** ID del personaje A de la pareja. Debe coincidir con su CharacterID en escena. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KTFG|RelationshipConfig")
    FName CharacterAID;

    /** ID del personaje B de la pareja. Debe coincidir con su CharacterID en escena. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KTFG|RelationshipConfig")
    FName CharacterBID;

    /** Tropo que define los valores emocionales de inicio y los modificadores de crecimiento. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KTFG|RelationshipConfig")
    TObjectPtr<UKTFGRomanceTropeData> Trope = nullptr;

    /** Si es true, la pareja se registra y activa automáticamente al comenzar el nivel. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KTFG|RelationshipConfig")
    bool bActiveAtStart = true;

    bool operator==(const FKTFGPairConfig& Other) const
    {
        return CharacterAID == Other.CharacterAID
            && CharacterBID == Other.CharacterBID
            && Trope == Other.Trope
            && bActiveAtStart == Other.bActiveAtStart;
    }
};


// ── ASSET DE CONFIGURACIÓN ────────────────────────────────────────────────────

UCLASS(BlueprintType)
class KTFGDRAMAPLUGIN_API UKTFGRelationshipConfigData : public UDataAsset
{
    GENERATED_BODY()

public:
    /**
     * Lista de todas las parejas románticas configuradas para este juego.
     * El subsistema la lee al inicio para construir el mapa de relaciones.
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG",
        meta = (ToolTip = "Lista de todas las parejas románticas del juego. Cada pareja necesita los IDs de ambos personajes y un tropo."))
    TArray<FKTFGPairConfig> Pairs;

#if WITH_EDITOR
    /**
     * Validación en editor: detecta IDs duplicados y tropos sin asignar
     * antes de hacer Play, reduciendo errores en tiempo de ejecución.
     */
    virtual EDataValidationResult IsDataValid(FDataValidationContext& Context) const override;
#endif
};
