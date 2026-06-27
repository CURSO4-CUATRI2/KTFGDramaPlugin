// KTFGRelationshipConfigData.cpp
// DataAsset principal de configuración del plugin.
// Define las parejas románticas del juego (array de FKTFGPairConfig) y
// sobreescribe IsDataValid() para detectar errores de configuración en el editor,
// antes de que lleguen a ejecución.

#include "KTFGData/KTFGRelationshipConfigData.h"

#if WITH_EDITOR
#include "Misc/DataValidation.h"

EDataValidationResult UKTFGRelationshipConfigData::IsDataValid(FDataValidationContext& Context) const
{
    EDataValidationResult Result = Super::IsDataValid(Context);

    TSet<FName> SeenIDs;

    for (int32 i = 0; i < Pairs.Num(); ++i)
    {
        const FKTFGPairConfig& Pair = Pairs[i];

        if (Pair.CharacterAID.IsNone())
        {
            Context.AddError(FText::FromString(
                FString::Printf(TEXT("KTFG: Pair[%d] tiene CharacterAID vacío."), i)));
            Result = EDataValidationResult::Invalid;
        }

        if (Pair.CharacterBID.IsNone())
        {
            Context.AddError(FText::FromString(
                FString::Printf(TEXT("KTFG: Pair[%d] tiene CharacterBID vacío."), i)));
            Result = EDataValidationResult::Invalid;
        }

        if (!Pair.CharacterAID.IsNone() && Pair.CharacterAID == Pair.CharacterBID)
        {
            Context.AddError(FText::FromString(
                FString::Printf(TEXT("KTFG: Pair[%d] — CharacterAID y CharacterBID son iguales ('%s'). Un personaje no puede ser pareja de sí mismo."),
                    i, *Pair.CharacterAID.ToString())));
            Result = EDataValidationResult::Invalid;
        }

        // Sin tropo asignado: warning, no error.
        // La relación usará las emociones por defecto del personaje.
        if (!Pair.Trope)
        {
            Context.AddWarning(FText::FromString(
                FString::Printf(TEXT("KTFG: Pair[%d] ('%s' + '%s') no tiene Tropo asignado. Se usarán los valores emocionales por defecto."),
                    i, *Pair.CharacterAID.ToString(), *Pair.CharacterBID.ToString())));
        }

        // Detectar parejas duplicadas (en cualquier orden).
        FName PairKey = FName(*(Pair.CharacterAID.ToString() + TEXT("_") + Pair.CharacterBID.ToString()));
        FName PairKeyReverse = FName(*(Pair.CharacterBID.ToString() + TEXT("_") + Pair.CharacterAID.ToString()));

        if (SeenIDs.Contains(PairKey) || SeenIDs.Contains(PairKeyReverse))
        {
            Context.AddError(FText::FromString(
                FString::Printf(TEXT("KTFG: Pair[%d] — La pareja '%s' + '%s' está duplicada en el config."),
                    i, *Pair.CharacterAID.ToString(), *Pair.CharacterBID.ToString())));
            Result = EDataValidationResult::Invalid;
        }

        SeenIDs.Add(PairKey);
    }

    return Result;
}
#endif
