// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KTFGData/KTFGRelationshipConfigData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKTFGRelationshipConfigData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGRelationshipConfigData();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGRelationshipConfigData_NoRegister();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGRomanceTropeData_NoRegister();
KTFGDRAMAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FKTFGPairConfig();
UPackage* Z_Construct_UPackage__Script_KTFGDramaPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FKTFGPairConfig ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FKTFGPairConfig;
class UScriptStruct* FKTFGPairConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FKTFGPairConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FKTFGPairConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKTFGPairConfig, (UObject*)Z_Construct_UPackage__Script_KTFGDramaPlugin(), TEXT("KTFGPairConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FKTFGPairConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FKTFGPairConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Define una pareja rom\xc3\xa1ntica y su configuraci\xc3\xb3n inicial.\n * Ambos IDs deben existir en la escena como AKTFGRomanceCharacterBase.\n */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipConfigData.h" },
		{ "ToolTip", "Define una pareja rom\xc3\xa1ntica y su configuraci\xc3\xb3n inicial.\nAmbos IDs deben existir en la escena como AKTFGRomanceCharacterBase." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAID_MetaData[] = {
		{ "Category", "KTFG|RelationshipConfig" },
		{ "Comment", "/** ID del personaje A de la pareja. Debe coincidir con su CharacterID en escena. */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipConfigData.h" },
		{ "ToolTip", "ID del personaje A de la pareja. Debe coincidir con su CharacterID en escena." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterBID_MetaData[] = {
		{ "Category", "KTFG|RelationshipConfig" },
		{ "Comment", "/** ID del personaje B de la pareja. Debe coincidir con su CharacterID en escena. */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipConfigData.h" },
		{ "ToolTip", "ID del personaje B de la pareja. Debe coincidir con su CharacterID en escena." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Trope_MetaData[] = {
		{ "Category", "KTFG|RelationshipConfig" },
		{ "Comment", "/** Tropo que define los valores emocionales de inicio y los modificadores de crecimiento. */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipConfigData.h" },
		{ "ToolTip", "Tropo que define los valores emocionales de inicio y los modificadores de crecimiento." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActiveAtStart_MetaData[] = {
		{ "Category", "KTFG|RelationshipConfig" },
		{ "Comment", "/** Si es true, la pareja se registra y activa autom\xc3\xa1ticamente al comenzar el nivel. */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipConfigData.h" },
		{ "ToolTip", "Si es true, la pareja se registra y activa autom\xc3\xa1ticamente al comenzar el nivel." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterAID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterBID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Trope;
	static void NewProp_bActiveAtStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActiveAtStart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKTFGPairConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::NewProp_CharacterAID = { "CharacterAID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKTFGPairConfig, CharacterAID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAID_MetaData), NewProp_CharacterAID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::NewProp_CharacterBID = { "CharacterBID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKTFGPairConfig, CharacterBID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterBID_MetaData), NewProp_CharacterBID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::NewProp_Trope = { "Trope", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKTFGPairConfig, Trope), Z_Construct_UClass_UKTFGRomanceTropeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Trope_MetaData), NewProp_Trope_MetaData) };
void Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::NewProp_bActiveAtStart_SetBit(void* Obj)
{
	((FKTFGPairConfig*)Obj)->bActiveAtStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::NewProp_bActiveAtStart = { "bActiveAtStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FKTFGPairConfig), &Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::NewProp_bActiveAtStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActiveAtStart_MetaData), NewProp_bActiveAtStart_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::NewProp_CharacterAID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::NewProp_CharacterBID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::NewProp_Trope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::NewProp_bActiveAtStart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KTFGDramaPlugin,
	nullptr,
	&NewStructOps,
	"KTFGPairConfig",
	Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::PropPointers),
	sizeof(FKTFGPairConfig),
	alignof(FKTFGPairConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKTFGPairConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FKTFGPairConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FKTFGPairConfig.InnerSingleton, Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FKTFGPairConfig.InnerSingleton;
}
// ********** End ScriptStruct FKTFGPairConfig *****************************************************

// ********** Begin Class UKTFGRelationshipConfigData **********************************************
void UKTFGRelationshipConfigData::StaticRegisterNativesUKTFGRelationshipConfigData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKTFGRelationshipConfigData;
UClass* UKTFGRelationshipConfigData::GetPrivateStaticClass()
{
	using TClass = UKTFGRelationshipConfigData;
	if (!Z_Registration_Info_UClass_UKTFGRelationshipConfigData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KTFGRelationshipConfigData"),
			Z_Registration_Info_UClass_UKTFGRelationshipConfigData.InnerSingleton,
			StaticRegisterNativesUKTFGRelationshipConfigData,
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
	return Z_Registration_Info_UClass_UKTFGRelationshipConfigData.InnerSingleton;
}
UClass* Z_Construct_UClass_UKTFGRelationshipConfigData_NoRegister()
{
	return UKTFGRelationshipConfigData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKTFGRelationshipConfigData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 ASSET DE CONFIGURACI\xc3\x93N \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
		{ "IncludePath", "KTFGData/KTFGRelationshipConfigData.h" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipConfigData.h" },
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 ASSET DE CONFIGURACI\xc3\x93N \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pairs_MetaData[] = {
		{ "Category", "KTFG" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipConfigData.h" },
		{ "ToolTip", "Lista de todas las parejas rom\xc3\xa1nticas del juego. Cada pareja necesita los IDs de ambos personajes y un tropo." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pairs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pairs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKTFGRelationshipConfigData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKTFGRelationshipConfigData_Statics::NewProp_Pairs_Inner = { "Pairs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKTFGPairConfig, METADATA_PARAMS(0, nullptr) }; // 1524688529
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKTFGRelationshipConfigData_Statics::NewProp_Pairs = { "Pairs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipConfigData, Pairs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pairs_MetaData), NewProp_Pairs_MetaData) }; // 1524688529
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKTFGRelationshipConfigData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipConfigData_Statics::NewProp_Pairs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipConfigData_Statics::NewProp_Pairs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGRelationshipConfigData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKTFGRelationshipConfigData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_KTFGDramaPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGRelationshipConfigData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKTFGRelationshipConfigData_Statics::ClassParams = {
	&UKTFGRelationshipConfigData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKTFGRelationshipConfigData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGRelationshipConfigData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGRelationshipConfigData_Statics::Class_MetaDataParams), Z_Construct_UClass_UKTFGRelationshipConfigData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKTFGRelationshipConfigData()
{
	if (!Z_Registration_Info_UClass_UKTFGRelationshipConfigData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKTFGRelationshipConfigData.OuterSingleton, Z_Construct_UClass_UKTFGRelationshipConfigData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKTFGRelationshipConfigData.OuterSingleton;
}
UKTFGRelationshipConfigData::UKTFGRelationshipConfigData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKTFGRelationshipConfigData);
UKTFGRelationshipConfigData::~UKTFGRelationshipConfigData() {}
// ********** End Class UKTFGRelationshipConfigData ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRelationshipConfigData_h__Script_KTFGDramaPlugin_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKTFGPairConfig::StaticStruct, Z_Construct_UScriptStruct_FKTFGPairConfig_Statics::NewStructOps, TEXT("KTFGPairConfig"), &Z_Registration_Info_UScriptStruct_FKTFGPairConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKTFGPairConfig), 1524688529U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKTFGRelationshipConfigData, UKTFGRelationshipConfigData::StaticClass, TEXT("UKTFGRelationshipConfigData"), &Z_Registration_Info_UClass_UKTFGRelationshipConfigData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKTFGRelationshipConfigData), 2842470883U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRelationshipConfigData_h__Script_KTFGDramaPlugin_2146292846(TEXT("/Script/KTFGDramaPlugin"),
	Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRelationshipConfigData_h__Script_KTFGDramaPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRelationshipConfigData_h__Script_KTFGDramaPlugin_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRelationshipConfigData_h__Script_KTFGDramaPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRelationshipConfigData_h__Script_KTFGDramaPlugin_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
