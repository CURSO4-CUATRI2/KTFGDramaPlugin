// KTFGBlueprintLibrary.h
// Librería de funciones estáticas para acceder al sistema KTFG desde Blueprint.
// Reduce la fricción para el usuario: en lugar de obtener el Subsistema, castearlo
// y encadenar llamadas, el diseñador dispone de nodos directos con WorldContext.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KTFGBase/KTFGDramaSubsystem.h"
#include "KTFGBlueprintLibrary.generated.h"

UCLASS()
class KTFGDRAMAPLUGIN_API UKTFGBlueprintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    /** Obtiene el Subsistema central de KTFG.
     *  Punto de entrada para operaciones avanzadas que no tienen nodo propio. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "KTFG",
        meta = (WorldContext = "WorldContextObject",
            ToolTip = "Obtiene el subsistema central del plugin KTFG."))
    static UKTFGDramaSubsystem* GetKTFGDramaSubsystem(const UObject* WorldContextObject);

    /** Carga el DataAsset de configuración y devuelve el Subsistema en un solo nodo.
     *  Uso recomendado: conectar directamente al BeginPlay del GameMode. */
    UFUNCTION(BlueprintCallable, Category = "KTFG",
        meta = (WorldContext = "WorldContextObject",
            ToolTip = "Carga la configuración de parejas e inicializa el sistema KTFG. Llama desde BeginPlay del GameMode."))
    static UKTFGDramaSubsystem* InitializeKTFG(const UObject* WorldContextObject, UKTFGRelationshipConfigData* Config);

    /** Devuelve la pareja activa del personaje sin necesidad de acceder al Subsistema manualmente. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "KTFG|Query",
        meta = (WorldContext = "WorldContextObject",
            ToolTip = "Devuelve la pareja romántica activa del personaje, o nullptr si no tiene."))
    static AKTFGRomanceCharacterBase* GetPartnerOf(const UObject* WorldContextObject, AKTFGRomanceCharacterBase* Character);

    /** Devuelve el tropo activo de la relación del personaje. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "KTFG|Query",
        meta = (WorldContext = "WorldContextObject",
            ToolTip = "Devuelve el tropo romántico activo de la relación del personaje."))
    static UKTFGRomanceTropeData* GetActiveTrope(const UObject* WorldContextObject, AKTFGRomanceCharacterBase* Character);
};
