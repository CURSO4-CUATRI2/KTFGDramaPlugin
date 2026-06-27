#include "KTFGBase/KTFGBlueprintLibrary.h"
#include "KTFGCharacters/KTFGRomanceCharacterBase.h"
#include "Engine/World.h"
#include "KTFGBase/KTFGDramaSubsystem.h"

UKTFGDramaSubsystem* UKTFGBlueprintLibrary::GetKTFGDramaSubsystem(const UObject* WorldContextObject)
{
    if (!WorldContextObject) return nullptr;

    UWorld* World = WorldContextObject->GetWorld();
    if (!World) return nullptr;

    return World->GetSubsystem<UKTFGDramaSubsystem>();
}

UKTFGDramaSubsystem* UKTFGBlueprintLibrary::InitializeKTFG(const UObject* WorldContextObject, UKTFGRelationshipConfigData* Config)
{
    UKTFGDramaSubsystem* Subsystem = GetKTFGDramaSubsystem(WorldContextObject);
    if (Subsystem)
    {
        Subsystem->LoadConfig(Config);
    }
    return Subsystem;
}

AKTFGRomanceCharacterBase* UKTFGBlueprintLibrary::GetPartnerOf(const UObject* WorldContextObject, AKTFGRomanceCharacterBase* Character)
{
    UKTFGDramaSubsystem* Subsystem = GetKTFGDramaSubsystem(WorldContextObject);
    return Subsystem ? Subsystem->GetPartnerOf(Character) : nullptr;
}

UKTFGRomanceTropeData* UKTFGBlueprintLibrary::GetActiveTrope(const UObject* WorldContextObject, AKTFGRomanceCharacterBase* Character)
{
    UKTFGDramaSubsystem* Subsystem = GetKTFGDramaSubsystem(WorldContextObject);
    return Subsystem ? Subsystem->GetActiveTrope(Character) : nullptr;
}
