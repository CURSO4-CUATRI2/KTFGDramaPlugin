// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KTFGData/KTFGRomancePhases.h"

#ifdef KTFGDRAMAPLUGIN_KTFGRomancePhases_generated_h
#error "KTFGRomancePhases.generated.h already included, missing '#pragma once' in KTFGRomancePhases.h"
#endif
#define KTFGDRAMAPLUGIN_KTFGRomancePhases_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRomancePhases_h

// ********** Begin Enum EKTFGStoryPhase ***********************************************************
#define FOREACH_ENUM_EKTFGSTORYPHASE(op) \
	op(EKTFGStoryPhase::Attraction) \
	op(EKTFGStoryPhase::Development) \
	op(EKTFGStoryPhase::Conflict) \
	op(EKTFGStoryPhase::Resolution) 

enum class EKTFGStoryPhase : uint8;
template<> struct TIsUEnumClass<EKTFGStoryPhase> { enum { Value = true }; };
template<> KTFGDRAMAPLUGIN_API UEnum* StaticEnum<EKTFGStoryPhase>();
// ********** End Enum EKTFGStoryPhase *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
