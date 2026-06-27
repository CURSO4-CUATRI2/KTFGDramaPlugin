// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KTFGBase/KTFGBlueprintLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKTFGBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGBlueprintLibrary();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGBlueprintLibrary_NoRegister();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGDramaSubsystem_NoRegister();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGRelationshipConfigData_NoRegister();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGRomanceTropeData_NoRegister();
UPackage* Z_Construct_UPackage__Script_KTFGDramaPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKTFGBlueprintLibrary Function GetActiveTrope ****************************
struct Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope_Statics
{
	struct KTFGBlueprintLibrary_eventGetActiveTrope_Parms
	{
		const UObject* WorldContextObject;
		AKTFGRomanceCharacterBase* Character;
		UKTFGRomanceTropeData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|Query" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGBlueprintLibrary.h" },
		{ "ToolTip", "Devuelve el tropo rom\xc3\xa1ntico activo de la relaci\xc3\xb3n del personaje." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGBlueprintLibrary_eventGetActiveTrope_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGBlueprintLibrary_eventGetActiveTrope_Parms, Character), Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGBlueprintLibrary_eventGetActiveTrope_Parms, ReturnValue), Z_Construct_UClass_UKTFGRomanceTropeData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGBlueprintLibrary, nullptr, "GetActiveTrope", Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope_Statics::KTFGBlueprintLibrary_eventGetActiveTrope_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope_Statics::KTFGBlueprintLibrary_eventGetActiveTrope_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGBlueprintLibrary::execGetActiveTrope)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AKTFGRomanceCharacterBase,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UKTFGRomanceTropeData**)Z_Param__Result=UKTFGBlueprintLibrary::GetActiveTrope(Z_Param_WorldContextObject,Z_Param_Character);
	P_NATIVE_END;
}
// ********** End Class UKTFGBlueprintLibrary Function GetActiveTrope ******************************

// ********** Begin Class UKTFGBlueprintLibrary Function GetKTFGDramaSubsystem *********************
struct Z_Construct_UFunction_UKTFGBlueprintLibrary_GetKTFGDramaSubsystem_Statics
{
	struct KTFGBlueprintLibrary_eventGetKTFGDramaSubsystem_Parms
	{
		const UObject* WorldContextObject;
		UKTFGDramaSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGBlueprintLibrary.h" },
		{ "ToolTip", "Obtiene el subsistema central del plugin KTFG." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGBlueprintLibrary_GetKTFGDramaSubsystem_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGBlueprintLibrary_eventGetKTFGDramaSubsystem_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGBlueprintLibrary_GetKTFGDramaSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGBlueprintLibrary_eventGetKTFGDramaSubsystem_Parms, ReturnValue), Z_Construct_UClass_UKTFGDramaSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKTFGBlueprintLibrary_GetKTFGDramaSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGBlueprintLibrary_GetKTFGDramaSubsystem_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGBlueprintLibrary_GetKTFGDramaSubsystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGBlueprintLibrary_GetKTFGDramaSubsystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGBlueprintLibrary_GetKTFGDramaSubsystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGBlueprintLibrary, nullptr, "GetKTFGDramaSubsystem", Z_Construct_UFunction_UKTFGBlueprintLibrary_GetKTFGDramaSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGBlueprintLibrary_GetKTFGDramaSubsystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKTFGBlueprintLibrary_GetKTFGDramaSubsystem_Statics::KTFGBlueprintLibrary_eventGetKTFGDramaSubsystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGBlueprintLibrary_GetKTFGDramaSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGBlueprintLibrary_GetKTFGDramaSubsystem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKTFGBlueprintLibrary_GetKTFGDramaSubsystem_Statics::KTFGBlueprintLibrary_eventGetKTFGDramaSubsystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKTFGBlueprintLibrary_GetKTFGDramaSubsystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGBlueprintLibrary_GetKTFGDramaSubsystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGBlueprintLibrary::execGetKTFGDramaSubsystem)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UKTFGDramaSubsystem**)Z_Param__Result=UKTFGBlueprintLibrary::GetKTFGDramaSubsystem(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UKTFGBlueprintLibrary Function GetKTFGDramaSubsystem ***********************

// ********** Begin Class UKTFGBlueprintLibrary Function GetPartnerOf ******************************
struct Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf_Statics
{
	struct KTFGBlueprintLibrary_eventGetPartnerOf_Parms
	{
		const UObject* WorldContextObject;
		AKTFGRomanceCharacterBase* Character;
		AKTFGRomanceCharacterBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|Query" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGBlueprintLibrary.h" },
		{ "ToolTip", "Devuelve la pareja rom\xc3\xa1ntica activa del personaje, o nullptr si no tiene." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGBlueprintLibrary_eventGetPartnerOf_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGBlueprintLibrary_eventGetPartnerOf_Parms, Character), Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGBlueprintLibrary_eventGetPartnerOf_Parms, ReturnValue), Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGBlueprintLibrary, nullptr, "GetPartnerOf", Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf_Statics::KTFGBlueprintLibrary_eventGetPartnerOf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf_Statics::KTFGBlueprintLibrary_eventGetPartnerOf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGBlueprintLibrary::execGetPartnerOf)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AKTFGRomanceCharacterBase,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AKTFGRomanceCharacterBase**)Z_Param__Result=UKTFGBlueprintLibrary::GetPartnerOf(Z_Param_WorldContextObject,Z_Param_Character);
	P_NATIVE_END;
}
// ********** End Class UKTFGBlueprintLibrary Function GetPartnerOf ********************************

// ********** Begin Class UKTFGBlueprintLibrary Function InitializeKTFG ****************************
struct Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG_Statics
{
	struct KTFGBlueprintLibrary_eventInitializeKTFG_Parms
	{
		const UObject* WorldContextObject;
		UKTFGRelationshipConfigData* Config;
		UKTFGDramaSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGBlueprintLibrary.h" },
		{ "ToolTip", "Carga la configuraci\xc3\xb3n de parejas e inicializa el sistema KTFG. Llama desde BeginPlay del GameMode." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGBlueprintLibrary_eventInitializeKTFG_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGBlueprintLibrary_eventInitializeKTFG_Parms, Config), Z_Construct_UClass_UKTFGRelationshipConfigData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGBlueprintLibrary_eventInitializeKTFG_Parms, ReturnValue), Z_Construct_UClass_UKTFGDramaSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGBlueprintLibrary, nullptr, "InitializeKTFG", Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG_Statics::KTFGBlueprintLibrary_eventInitializeKTFG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG_Statics::KTFGBlueprintLibrary_eventInitializeKTFG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGBlueprintLibrary::execInitializeKTFG)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UKTFGRelationshipConfigData,Z_Param_Config);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UKTFGDramaSubsystem**)Z_Param__Result=UKTFGBlueprintLibrary::InitializeKTFG(Z_Param_WorldContextObject,Z_Param_Config);
	P_NATIVE_END;
}
// ********** End Class UKTFGBlueprintLibrary Function InitializeKTFG ******************************

// ********** Begin Class UKTFGBlueprintLibrary ****************************************************
void UKTFGBlueprintLibrary::StaticRegisterNativesUKTFGBlueprintLibrary()
{
	UClass* Class = UKTFGBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActiveTrope", &UKTFGBlueprintLibrary::execGetActiveTrope },
		{ "GetKTFGDramaSubsystem", &UKTFGBlueprintLibrary::execGetKTFGDramaSubsystem },
		{ "GetPartnerOf", &UKTFGBlueprintLibrary::execGetPartnerOf },
		{ "InitializeKTFG", &UKTFGBlueprintLibrary::execInitializeKTFG },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKTFGBlueprintLibrary;
UClass* UKTFGBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UKTFGBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UKTFGBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KTFGBlueprintLibrary"),
			Z_Registration_Info_UClass_UKTFGBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUKTFGBlueprintLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UKTFGBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UKTFGBlueprintLibrary_NoRegister()
{
	return UKTFGBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKTFGBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "KTFGBase/KTFGBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKTFGBlueprintLibrary_GetActiveTrope, "GetActiveTrope" }, // 2006674453
		{ &Z_Construct_UFunction_UKTFGBlueprintLibrary_GetKTFGDramaSubsystem, "GetKTFGDramaSubsystem" }, // 1599284368
		{ &Z_Construct_UFunction_UKTFGBlueprintLibrary_GetPartnerOf, "GetPartnerOf" }, // 3173690107
		{ &Z_Construct_UFunction_UKTFGBlueprintLibrary_InitializeKTFG, "InitializeKTFG" }, // 3257009107
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKTFGBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UKTFGBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_KTFGDramaPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKTFGBlueprintLibrary_Statics::ClassParams = {
	&UKTFGBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UKTFGBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKTFGBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UKTFGBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKTFGBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UKTFGBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKTFGBlueprintLibrary.OuterSingleton;
}
UKTFGBlueprintLibrary::UKTFGBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKTFGBlueprintLibrary);
UKTFGBlueprintLibrary::~UKTFGBlueprintLibrary() {}
// ********** End Class UKTFGBlueprintLibrary ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGBlueprintLibrary_h__Script_KTFGDramaPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKTFGBlueprintLibrary, UKTFGBlueprintLibrary::StaticClass, TEXT("UKTFGBlueprintLibrary"), &Z_Registration_Info_UClass_UKTFGBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKTFGBlueprintLibrary), 3872309818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGBlueprintLibrary_h__Script_KTFGDramaPlugin_3494277175(TEXT("/Script/KTFGDramaPlugin"),
	Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGBlueprintLibrary_h__Script_KTFGDramaPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGBlueprintLibrary_h__Script_KTFGDramaPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
