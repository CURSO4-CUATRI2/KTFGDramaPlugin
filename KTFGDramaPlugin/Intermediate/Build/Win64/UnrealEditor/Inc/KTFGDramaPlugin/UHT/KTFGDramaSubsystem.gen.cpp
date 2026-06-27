// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KTFGBase/KTFGDramaSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKTFGDramaSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGDramaSubsystem();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGDramaSubsystem_NoRegister();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGRelationshipConfigData_NoRegister();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGRomanceTropeData_NoRegister();
KTFGDRAMAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FKTFGActiveRelationship();
UPackage* Z_Construct_UPackage__Script_KTFGDramaPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FKTFGActiveRelationship *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FKTFGActiveRelationship;
class UScriptStruct* FKTFGActiveRelationship::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FKTFGActiveRelationship.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FKTFGActiveRelationship.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKTFGActiveRelationship, (UObject*)Z_Construct_UPackage__Script_KTFGDramaPlugin(), TEXT("KTFGActiveRelationship"));
	}
	return Z_Registration_Info_UScriptStruct_FKTFGActiveRelationship.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FKTFGActiveRelationship_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Datos de una relaci\xc3\xb3n activa en runtime.\n *  El Subsistema mantiene una instancia de esta estructura por cada personaje\n *  enlazado, lo que permite consultas en O(1) desde cualquiera de los dos extremos. */" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGDramaSubsystem.h" },
		{ "ToolTip", "Datos de una relaci\xc3\xb3n activa en runtime.\nEl Subsistema mantiene una instancia de esta estructura por cada personaje\nenlazado, lo que permite consultas en O(1) desde cualquiera de los dos extremos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterA_MetaData[] = {
		{ "Category", "KTFG" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGDramaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterB_MetaData[] = {
		{ "Category", "KTFG" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGDramaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Trope_MetaData[] = {
		{ "Category", "KTFG" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGDramaSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Trope;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKTFGActiveRelationship>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FKTFGActiveRelationship_Statics::NewProp_CharacterA = { "CharacterA", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKTFGActiveRelationship, CharacterA), Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterA_MetaData), NewProp_CharacterA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FKTFGActiveRelationship_Statics::NewProp_CharacterB = { "CharacterB", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKTFGActiveRelationship, CharacterB), Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterB_MetaData), NewProp_CharacterB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FKTFGActiveRelationship_Statics::NewProp_Trope = { "Trope", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKTFGActiveRelationship, Trope), Z_Construct_UClass_UKTFGRomanceTropeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Trope_MetaData), NewProp_Trope_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKTFGActiveRelationship_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKTFGActiveRelationship_Statics::NewProp_CharacterA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKTFGActiveRelationship_Statics::NewProp_CharacterB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKTFGActiveRelationship_Statics::NewProp_Trope,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKTFGActiveRelationship_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKTFGActiveRelationship_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KTFGDramaPlugin,
	nullptr,
	&NewStructOps,
	"KTFGActiveRelationship",
	Z_Construct_UScriptStruct_FKTFGActiveRelationship_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKTFGActiveRelationship_Statics::PropPointers),
	sizeof(FKTFGActiveRelationship),
	alignof(FKTFGActiveRelationship),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKTFGActiveRelationship_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKTFGActiveRelationship_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKTFGActiveRelationship()
{
	if (!Z_Registration_Info_UScriptStruct_FKTFGActiveRelationship.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FKTFGActiveRelationship.InnerSingleton, Z_Construct_UScriptStruct_FKTFGActiveRelationship_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FKTFGActiveRelationship.InnerSingleton;
}
// ********** End ScriptStruct FKTFGActiveRelationship *********************************************

// ********** Begin Class UKTFGDramaSubsystem Function ActivatePair ********************************
struct Z_Construct_UFunction_UKTFGDramaSubsystem_ActivatePair_Statics
{
	struct KTFGDramaSubsystem_eventActivatePair_Parms
	{
		FName CharacterAID;
		FName CharacterBID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|Runtime" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGDramaSubsystem.h" },
		{ "ToolTip", "Activa una pareja con bActiveAtStart = false del DataAsset." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterAID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterBID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKTFGDramaSubsystem_ActivatePair_Statics::NewProp_CharacterAID = { "CharacterAID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGDramaSubsystem_eventActivatePair_Parms, CharacterAID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKTFGDramaSubsystem_ActivatePair_Statics::NewProp_CharacterBID = { "CharacterBID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGDramaSubsystem_eventActivatePair_Parms, CharacterBID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKTFGDramaSubsystem_ActivatePair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGDramaSubsystem_ActivatePair_Statics::NewProp_CharacterAID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGDramaSubsystem_ActivatePair_Statics::NewProp_CharacterBID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_ActivatePair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGDramaSubsystem_ActivatePair_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGDramaSubsystem, nullptr, "ActivatePair", Z_Construct_UFunction_UKTFGDramaSubsystem_ActivatePair_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_ActivatePair_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKTFGDramaSubsystem_ActivatePair_Statics::KTFGDramaSubsystem_eventActivatePair_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_ActivatePair_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGDramaSubsystem_ActivatePair_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKTFGDramaSubsystem_ActivatePair_Statics::KTFGDramaSubsystem_eventActivatePair_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKTFGDramaSubsystem_ActivatePair()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGDramaSubsystem_ActivatePair_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGDramaSubsystem::execActivatePair)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterAID);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterBID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivatePair(Z_Param_CharacterAID,Z_Param_CharacterBID);
	P_NATIVE_END;
}
// ********** End Class UKTFGDramaSubsystem Function ActivatePair **********************************

// ********** Begin Class UKTFGDramaSubsystem Function DissolveRelationship ************************
struct Z_Construct_UFunction_UKTFGDramaSubsystem_DissolveRelationship_Statics
{
	struct KTFGDramaSubsystem_eventDissolveRelationship_Parms
	{
		AKTFGRomanceCharacterBase* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|Runtime" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGDramaSubsystem.h" },
		{ "ToolTip", "Disuelve la relaci\xc3\xb3n activa del personaje." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGDramaSubsystem_DissolveRelationship_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGDramaSubsystem_eventDissolveRelationship_Parms, Character), Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKTFGDramaSubsystem_DissolveRelationship_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGDramaSubsystem_DissolveRelationship_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_DissolveRelationship_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGDramaSubsystem_DissolveRelationship_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGDramaSubsystem, nullptr, "DissolveRelationship", Z_Construct_UFunction_UKTFGDramaSubsystem_DissolveRelationship_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_DissolveRelationship_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKTFGDramaSubsystem_DissolveRelationship_Statics::KTFGDramaSubsystem_eventDissolveRelationship_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_DissolveRelationship_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGDramaSubsystem_DissolveRelationship_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKTFGDramaSubsystem_DissolveRelationship_Statics::KTFGDramaSubsystem_eventDissolveRelationship_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKTFGDramaSubsystem_DissolveRelationship()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGDramaSubsystem_DissolveRelationship_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGDramaSubsystem::execDissolveRelationship)
{
	P_GET_OBJECT(AKTFGRomanceCharacterBase,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DissolveRelationship(Z_Param_Character);
	P_NATIVE_END;
}
// ********** End Class UKTFGDramaSubsystem Function DissolveRelationship **************************

// ********** Begin Class UKTFGDramaSubsystem Function GetActiveTrope ******************************
struct Z_Construct_UFunction_UKTFGDramaSubsystem_GetActiveTrope_Statics
{
	struct KTFGDramaSubsystem_eventGetActiveTrope_Parms
	{
		AKTFGRomanceCharacterBase* Character;
		UKTFGRomanceTropeData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|Query" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGDramaSubsystem.h" },
		{ "ToolTip", "Devuelve el tropo rom\xc3\xa1ntico activo de la relaci\xc3\xb3n." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGDramaSubsystem_GetActiveTrope_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGDramaSubsystem_eventGetActiveTrope_Parms, Character), Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGDramaSubsystem_GetActiveTrope_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGDramaSubsystem_eventGetActiveTrope_Parms, ReturnValue), Z_Construct_UClass_UKTFGRomanceTropeData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKTFGDramaSubsystem_GetActiveTrope_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGDramaSubsystem_GetActiveTrope_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGDramaSubsystem_GetActiveTrope_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_GetActiveTrope_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGDramaSubsystem_GetActiveTrope_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGDramaSubsystem, nullptr, "GetActiveTrope", Z_Construct_UFunction_UKTFGDramaSubsystem_GetActiveTrope_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_GetActiveTrope_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKTFGDramaSubsystem_GetActiveTrope_Statics::KTFGDramaSubsystem_eventGetActiveTrope_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_GetActiveTrope_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGDramaSubsystem_GetActiveTrope_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKTFGDramaSubsystem_GetActiveTrope_Statics::KTFGDramaSubsystem_eventGetActiveTrope_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKTFGDramaSubsystem_GetActiveTrope()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGDramaSubsystem_GetActiveTrope_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGDramaSubsystem::execGetActiveTrope)
{
	P_GET_OBJECT(AKTFGRomanceCharacterBase,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UKTFGRomanceTropeData**)Z_Param__Result=P_THIS->GetActiveTrope(Z_Param_Character);
	P_NATIVE_END;
}
// ********** End Class UKTFGDramaSubsystem Function GetActiveTrope ********************************

// ********** Begin Class UKTFGDramaSubsystem Function GetAllActiveRelationships *******************
struct Z_Construct_UFunction_UKTFGDramaSubsystem_GetAllActiveRelationships_Statics
{
	struct KTFGDramaSubsystem_eventGetAllActiveRelationships_Parms
	{
		TArray<FKTFGActiveRelationship> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|Query" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGDramaSubsystem.h" },
		{ "ToolTip", "Devuelve todas las relaciones rom\xc3\xa1nticas activas." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKTFGDramaSubsystem_GetAllActiveRelationships_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKTFGActiveRelationship, METADATA_PARAMS(0, nullptr) }; // 3210912370
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKTFGDramaSubsystem_GetAllActiveRelationships_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGDramaSubsystem_eventGetAllActiveRelationships_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3210912370
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKTFGDramaSubsystem_GetAllActiveRelationships_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGDramaSubsystem_GetAllActiveRelationships_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGDramaSubsystem_GetAllActiveRelationships_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_GetAllActiveRelationships_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGDramaSubsystem_GetAllActiveRelationships_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGDramaSubsystem, nullptr, "GetAllActiveRelationships", Z_Construct_UFunction_UKTFGDramaSubsystem_GetAllActiveRelationships_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_GetAllActiveRelationships_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKTFGDramaSubsystem_GetAllActiveRelationships_Statics::KTFGDramaSubsystem_eventGetAllActiveRelationships_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_GetAllActiveRelationships_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGDramaSubsystem_GetAllActiveRelationships_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKTFGDramaSubsystem_GetAllActiveRelationships_Statics::KTFGDramaSubsystem_eventGetAllActiveRelationships_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKTFGDramaSubsystem_GetAllActiveRelationships()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGDramaSubsystem_GetAllActiveRelationships_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGDramaSubsystem::execGetAllActiveRelationships)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FKTFGActiveRelationship>*)Z_Param__Result=P_THIS->GetAllActiveRelationships();
	P_NATIVE_END;
}
// ********** End Class UKTFGDramaSubsystem Function GetAllActiveRelationships *********************

// ********** Begin Class UKTFGDramaSubsystem Function GetPartnerOf ********************************
struct Z_Construct_UFunction_UKTFGDramaSubsystem_GetPartnerOf_Statics
{
	struct KTFGDramaSubsystem_eventGetPartnerOf_Parms
	{
		AKTFGRomanceCharacterBase* Character;
		AKTFGRomanceCharacterBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|Query" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGDramaSubsystem.h" },
		{ "ToolTip", "Devuelve la pareja rom\xc3\xa1ntica activa del personaje." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGDramaSubsystem_GetPartnerOf_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGDramaSubsystem_eventGetPartnerOf_Parms, Character), Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGDramaSubsystem_GetPartnerOf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGDramaSubsystem_eventGetPartnerOf_Parms, ReturnValue), Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKTFGDramaSubsystem_GetPartnerOf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGDramaSubsystem_GetPartnerOf_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGDramaSubsystem_GetPartnerOf_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_GetPartnerOf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGDramaSubsystem_GetPartnerOf_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGDramaSubsystem, nullptr, "GetPartnerOf", Z_Construct_UFunction_UKTFGDramaSubsystem_GetPartnerOf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_GetPartnerOf_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKTFGDramaSubsystem_GetPartnerOf_Statics::KTFGDramaSubsystem_eventGetPartnerOf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_GetPartnerOf_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGDramaSubsystem_GetPartnerOf_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKTFGDramaSubsystem_GetPartnerOf_Statics::KTFGDramaSubsystem_eventGetPartnerOf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKTFGDramaSubsystem_GetPartnerOf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGDramaSubsystem_GetPartnerOf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGDramaSubsystem::execGetPartnerOf)
{
	P_GET_OBJECT(AKTFGRomanceCharacterBase,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AKTFGRomanceCharacterBase**)Z_Param__Result=P_THIS->GetPartnerOf(Z_Param_Character);
	P_NATIVE_END;
}
// ********** End Class UKTFGDramaSubsystem Function GetPartnerOf **********************************

// ********** Begin Class UKTFGDramaSubsystem Function GetRelationshipOf ***************************
struct Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics
{
	struct KTFGDramaSubsystem_eventGetRelationshipOf_Parms
	{
		AKTFGRomanceCharacterBase* Character;
		bool bFound;
		FKTFGActiveRelationship ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|Query" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGDramaSubsystem.h" },
		{ "ToolTip", "Devuelve todos los datos de la relaci\xc3\xb3n activa del personaje." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static void NewProp_bFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGDramaSubsystem_eventGetRelationshipOf_Parms, Character), Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics::NewProp_bFound_SetBit(void* Obj)
{
	((KTFGDramaSubsystem_eventGetRelationshipOf_Parms*)Obj)->bFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KTFGDramaSubsystem_eventGetRelationshipOf_Parms), &Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGDramaSubsystem_eventGetRelationshipOf_Parms, ReturnValue), Z_Construct_UScriptStruct_FKTFGActiveRelationship, METADATA_PARAMS(0, nullptr) }; // 3210912370
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics::NewProp_bFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGDramaSubsystem, nullptr, "GetRelationshipOf", Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics::KTFGDramaSubsystem_eventGetRelationshipOf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics::KTFGDramaSubsystem_eventGetRelationshipOf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGDramaSubsystem::execGetRelationshipOf)
{
	P_GET_OBJECT(AKTFGRomanceCharacterBase,Z_Param_Character);
	P_GET_UBOOL_REF(Z_Param_Out_bFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKTFGActiveRelationship*)Z_Param__Result=P_THIS->GetRelationshipOf(Z_Param_Character,Z_Param_Out_bFound);
	P_NATIVE_END;
}
// ********** End Class UKTFGDramaSubsystem Function GetRelationshipOf *****************************

// ********** Begin Class UKTFGDramaSubsystem Function IsConfigLoaded ******************************
struct Z_Construct_UFunction_UKTFGDramaSubsystem_IsConfigLoaded_Statics
{
	struct KTFGDramaSubsystem_eventIsConfigLoaded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|Query" },
		{ "Comment", "/** True si LoadConfig() se ha llamado con un DataAsset v\xc3\xa1lido. */" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGDramaSubsystem.h" },
		{ "ToolTip", "True si LoadConfig() se ha llamado con un DataAsset v\xc3\xa1lido." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UKTFGDramaSubsystem_IsConfigLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KTFGDramaSubsystem_eventIsConfigLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKTFGDramaSubsystem_IsConfigLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KTFGDramaSubsystem_eventIsConfigLoaded_Parms), &Z_Construct_UFunction_UKTFGDramaSubsystem_IsConfigLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKTFGDramaSubsystem_IsConfigLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGDramaSubsystem_IsConfigLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_IsConfigLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGDramaSubsystem_IsConfigLoaded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGDramaSubsystem, nullptr, "IsConfigLoaded", Z_Construct_UFunction_UKTFGDramaSubsystem_IsConfigLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_IsConfigLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKTFGDramaSubsystem_IsConfigLoaded_Statics::KTFGDramaSubsystem_eventIsConfigLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_IsConfigLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGDramaSubsystem_IsConfigLoaded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKTFGDramaSubsystem_IsConfigLoaded_Statics::KTFGDramaSubsystem_eventIsConfigLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKTFGDramaSubsystem_IsConfigLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGDramaSubsystem_IsConfigLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGDramaSubsystem::execIsConfigLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsConfigLoaded();
	P_NATIVE_END;
}
// ********** End Class UKTFGDramaSubsystem Function IsConfigLoaded ********************************

// ********** Begin Class UKTFGDramaSubsystem Function LoadConfig **********************************
struct Z_Construct_UFunction_UKTFGDramaSubsystem_LoadConfig_Statics
{
	struct KTFGDramaSubsystem_eventLoadConfig_Parms
	{
		UKTFGRelationshipConfigData* Config;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|Setup" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGDramaSubsystem.h" },
		{ "ToolTip", "Carga la configuraci\xc3\xb3n de parejas desde un DataAsset. Llama en BeginPlay del GameMode." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGDramaSubsystem_LoadConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGDramaSubsystem_eventLoadConfig_Parms, Config), Z_Construct_UClass_UKTFGRelationshipConfigData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKTFGDramaSubsystem_LoadConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGDramaSubsystem_LoadConfig_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_LoadConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGDramaSubsystem_LoadConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGDramaSubsystem, nullptr, "LoadConfig", Z_Construct_UFunction_UKTFGDramaSubsystem_LoadConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_LoadConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKTFGDramaSubsystem_LoadConfig_Statics::KTFGDramaSubsystem_eventLoadConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_LoadConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGDramaSubsystem_LoadConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKTFGDramaSubsystem_LoadConfig_Statics::KTFGDramaSubsystem_eventLoadConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKTFGDramaSubsystem_LoadConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGDramaSubsystem_LoadConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGDramaSubsystem::execLoadConfig)
{
	P_GET_OBJECT(UKTFGRelationshipConfigData,Z_Param_Config);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadConfig(Z_Param_Config);
	P_NATIVE_END;
}
// ********** End Class UKTFGDramaSubsystem Function LoadConfig ************************************

// ********** Begin Class UKTFGDramaSubsystem Function RegisterPair ********************************
struct Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair_Statics
{
	struct KTFGDramaSubsystem_eventRegisterPair_Parms
	{
		AKTFGRomanceCharacterBase* CharacterA;
		AKTFGRomanceCharacterBase* CharacterB;
		UKTFGRomanceTropeData* Trope;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|Runtime" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGDramaSubsystem.h" },
		{ "ToolTip", "Registra una pareja manualmente. Disuelve relaciones previas si existen." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Trope;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair_Statics::NewProp_CharacterA = { "CharacterA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGDramaSubsystem_eventRegisterPair_Parms, CharacterA), Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair_Statics::NewProp_CharacterB = { "CharacterB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGDramaSubsystem_eventRegisterPair_Parms, CharacterB), Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair_Statics::NewProp_Trope = { "Trope", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGDramaSubsystem_eventRegisterPair_Parms, Trope), Z_Construct_UClass_UKTFGRomanceTropeData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair_Statics::NewProp_CharacterA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair_Statics::NewProp_CharacterB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair_Statics::NewProp_Trope,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGDramaSubsystem, nullptr, "RegisterPair", Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair_Statics::KTFGDramaSubsystem_eventRegisterPair_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair_Statics::KTFGDramaSubsystem_eventRegisterPair_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGDramaSubsystem::execRegisterPair)
{
	P_GET_OBJECT(AKTFGRomanceCharacterBase,Z_Param_CharacterA);
	P_GET_OBJECT(AKTFGRomanceCharacterBase,Z_Param_CharacterB);
	P_GET_OBJECT(UKTFGRomanceTropeData,Z_Param_Trope);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterPair(Z_Param_CharacterA,Z_Param_CharacterB,Z_Param_Trope);
	P_NATIVE_END;
}
// ********** End Class UKTFGDramaSubsystem Function RegisterPair **********************************

// ********** Begin Class UKTFGDramaSubsystem ******************************************************
void UKTFGDramaSubsystem::StaticRegisterNativesUKTFGDramaSubsystem()
{
	UClass* Class = UKTFGDramaSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivatePair", &UKTFGDramaSubsystem::execActivatePair },
		{ "DissolveRelationship", &UKTFGDramaSubsystem::execDissolveRelationship },
		{ "GetActiveTrope", &UKTFGDramaSubsystem::execGetActiveTrope },
		{ "GetAllActiveRelationships", &UKTFGDramaSubsystem::execGetAllActiveRelationships },
		{ "GetPartnerOf", &UKTFGDramaSubsystem::execGetPartnerOf },
		{ "GetRelationshipOf", &UKTFGDramaSubsystem::execGetRelationshipOf },
		{ "IsConfigLoaded", &UKTFGDramaSubsystem::execIsConfigLoaded },
		{ "LoadConfig", &UKTFGDramaSubsystem::execLoadConfig },
		{ "RegisterPair", &UKTFGDramaSubsystem::execRegisterPair },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKTFGDramaSubsystem;
UClass* UKTFGDramaSubsystem::GetPrivateStaticClass()
{
	using TClass = UKTFGDramaSubsystem;
	if (!Z_Registration_Info_UClass_UKTFGDramaSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KTFGDramaSubsystem"),
			Z_Registration_Info_UClass_UKTFGDramaSubsystem.InnerSingleton,
			StaticRegisterNativesUKTFGDramaSubsystem,
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
	return Z_Registration_Info_UClass_UKTFGDramaSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UKTFGDramaSubsystem_NoRegister()
{
	return UKTFGDramaSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKTFGDramaSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n// SUBSISTEMA\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
		{ "IncludePath", "KTFGBase/KTFGDramaSubsystem.h" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGDramaSubsystem.h" },
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\nSUBSISTEMA\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveConfig_MetaData[] = {
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 Estado interno \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
		{ "ModuleRelativePath", "Public/KTFGBase/KTFGDramaSubsystem.h" },
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 Estado interno \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKTFGDramaSubsystem_ActivatePair, "ActivatePair" }, // 2912094809
		{ &Z_Construct_UFunction_UKTFGDramaSubsystem_DissolveRelationship, "DissolveRelationship" }, // 225224751
		{ &Z_Construct_UFunction_UKTFGDramaSubsystem_GetActiveTrope, "GetActiveTrope" }, // 154677158
		{ &Z_Construct_UFunction_UKTFGDramaSubsystem_GetAllActiveRelationships, "GetAllActiveRelationships" }, // 4105882847
		{ &Z_Construct_UFunction_UKTFGDramaSubsystem_GetPartnerOf, "GetPartnerOf" }, // 697266579
		{ &Z_Construct_UFunction_UKTFGDramaSubsystem_GetRelationshipOf, "GetRelationshipOf" }, // 121665189
		{ &Z_Construct_UFunction_UKTFGDramaSubsystem_IsConfigLoaded, "IsConfigLoaded" }, // 373422422
		{ &Z_Construct_UFunction_UKTFGDramaSubsystem_LoadConfig, "LoadConfig" }, // 1940481698
		{ &Z_Construct_UFunction_UKTFGDramaSubsystem_RegisterPair, "RegisterPair" }, // 2391086344
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKTFGDramaSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKTFGDramaSubsystem_Statics::NewProp_ActiveConfig = { "ActiveConfig", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGDramaSubsystem, ActiveConfig), Z_Construct_UClass_UKTFGRelationshipConfigData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveConfig_MetaData), NewProp_ActiveConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKTFGDramaSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGDramaSubsystem_Statics::NewProp_ActiveConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGDramaSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKTFGDramaSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_KTFGDramaPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGDramaSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKTFGDramaSubsystem_Statics::ClassParams = {
	&UKTFGDramaSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKTFGDramaSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGDramaSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGDramaSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UKTFGDramaSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKTFGDramaSubsystem()
{
	if (!Z_Registration_Info_UClass_UKTFGDramaSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKTFGDramaSubsystem.OuterSingleton, Z_Construct_UClass_UKTFGDramaSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKTFGDramaSubsystem.OuterSingleton;
}
UKTFGDramaSubsystem::UKTFGDramaSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKTFGDramaSubsystem);
UKTFGDramaSubsystem::~UKTFGDramaSubsystem() {}
// ********** End Class UKTFGDramaSubsystem ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGDramaSubsystem_h__Script_KTFGDramaPlugin_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKTFGActiveRelationship::StaticStruct, Z_Construct_UScriptStruct_FKTFGActiveRelationship_Statics::NewStructOps, TEXT("KTFGActiveRelationship"), &Z_Registration_Info_UScriptStruct_FKTFGActiveRelationship, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKTFGActiveRelationship), 3210912370U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKTFGDramaSubsystem, UKTFGDramaSubsystem::StaticClass, TEXT("UKTFGDramaSubsystem"), &Z_Registration_Info_UClass_UKTFGDramaSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKTFGDramaSubsystem), 2547408766U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGDramaSubsystem_h__Script_KTFGDramaPlugin_2520543590(TEXT("/Script/KTFGDramaPlugin"),
	Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGDramaSubsystem_h__Script_KTFGDramaPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGDramaSubsystem_h__Script_KTFGDramaPlugin_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGDramaSubsystem_h__Script_KTFGDramaPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGDramaSubsystem_h__Script_KTFGDramaPlugin_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
