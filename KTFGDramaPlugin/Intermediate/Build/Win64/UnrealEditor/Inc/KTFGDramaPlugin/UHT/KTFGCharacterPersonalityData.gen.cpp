// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KTFGData/KTFGCharacterPersonalityData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKTFGCharacterPersonalityData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGCharacterPersonalityData();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGCharacterPersonalityData_NoRegister();
UPackage* Z_Construct_UPackage__Script_KTFGDramaPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKTFGCharacterPersonalityData ********************************************
void UKTFGCharacterPersonalityData::StaticRegisterNativesUKTFGCharacterPersonalityData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKTFGCharacterPersonalityData;
UClass* UKTFGCharacterPersonalityData::GetPrivateStaticClass()
{
	using TClass = UKTFGCharacterPersonalityData;
	if (!Z_Registration_Info_UClass_UKTFGCharacterPersonalityData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KTFGCharacterPersonalityData"),
			Z_Registration_Info_UClass_UKTFGCharacterPersonalityData.InnerSingleton,
			StaticRegisterNativesUKTFGCharacterPersonalityData,
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
	return Z_Registration_Info_UClass_UKTFGCharacterPersonalityData.InnerSingleton;
}
UClass* Z_Construct_UClass_UKTFGCharacterPersonalityData_NoRegister()
{
	return UKTFGCharacterPersonalityData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KTFGData/KTFGCharacterPersonalityData.h" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGCharacterPersonalityData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Warmth_MetaData[] = {
		{ "Category", "KTFG|Personality" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n     * Calidez y cercan\xc3\xad""a natural del personaje.\n     * Alto: tendente a la ternura y la protecci\xc3\xb3n.\n     * Bajo: distante y reservado por defecto.\n     */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGCharacterPersonalityData.h" },
		{ "ToolTip", "Calidez y cercan\xc3\xad""a natural del personaje.\nAlto: tendente a la ternura y la protecci\xc3\xb3n.\nBajo: distante y reservado por defecto." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrideBaseline_MetaData[] = {
		{ "Category", "KTFG|Personality" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n     * Nivel de orgullo de base del personaje, independiente de las interacciones.\n     * Referencia para calibrar el InitialPride del tropo asignado.\n     */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGCharacterPersonalityData.h" },
		{ "ToolTip", "Nivel de orgullo de base del personaje, independiente de las interacciones.\nReferencia para calibrar el InitialPride del tropo asignado." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmotionalOpenness_MetaData[] = {
		{ "Category", "KTFG|Personality" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n     * Facilidad para abrirse emocionalmente.\n     * Alto: el personaje muestra vulnerabilidad con mayor naturalidad.\n     * Bajo: tiende a ocultar sus emociones.\n     */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGCharacterPersonalityData.h" },
		{ "ToolTip", "Facilidad para abrirse emocionalmente.\nAlto: el personaje muestra vulnerabilidad con mayor naturalidad.\nBajo: tiende a ocultar sus emociones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConflictTolerance_MetaData[] = {
		{ "Category", "KTFG|Personality" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n     * Tolerancia al conflicto relacional.\n     * Alto: el personaje no se cierra ante las discusiones.\n     * Bajo: los conflictos le afectan con m\xc3\xa1s intensidad.\n     */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGCharacterPersonalityData.h" },
		{ "ToolTip", "Tolerancia al conflicto relacional.\nAlto: el personaje no se cierra ante las discusiones.\nBajo: los conflictos le afectan con m\xc3\xa1s intensidad." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JealousySensitivity_MetaData[] = {
		{ "Category", "KTFG|Personality" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n     * Sensibilidad a los celos.\n     * Alto: los est\xc3\xadmulos que generan Jealousy tienen mayor impacto.\n     * Bajo: el personaje es emocionalmente seguro ante la rivalidad.\n     */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGCharacterPersonalityData.h" },
		{ "ToolTip", "Sensibilidad a los celos.\nAlto: los est\xc3\xadmulos que generan Jealousy tienen mayor impacto.\nBajo: el personaje es emocionalmente seguro ante la rivalidad." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentSpeed_MetaData[] = {
		{ "Category", "KTFG|Personality" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n     * Velocidad con la que el personaje forma v\xc3\xadnculos emocionales.\n     * Alto: se engancha emocionalmente con facilidad y rapidez.\n     * Bajo: necesita m\xc3\xa1s tiempo e interacciones para confiar.\n     */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGCharacterPersonalityData.h" },
		{ "ToolTip", "Velocidad con la que el personaje forma v\xc3\xadnculos emocionales.\nAlto: se engancha emocionalmente con facilidad y rapidez.\nBajo: necesita m\xc3\xa1s tiempo e interacciones para confiar." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Warmth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrideBaseline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EmotionalOpenness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConflictTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JealousySensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttachmentSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKTFGCharacterPersonalityData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::NewProp_Warmth = { "Warmth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGCharacterPersonalityData, Warmth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Warmth_MetaData), NewProp_Warmth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::NewProp_PrideBaseline = { "PrideBaseline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGCharacterPersonalityData, PrideBaseline), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrideBaseline_MetaData), NewProp_PrideBaseline_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::NewProp_EmotionalOpenness = { "EmotionalOpenness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGCharacterPersonalityData, EmotionalOpenness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmotionalOpenness_MetaData), NewProp_EmotionalOpenness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::NewProp_ConflictTolerance = { "ConflictTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGCharacterPersonalityData, ConflictTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConflictTolerance_MetaData), NewProp_ConflictTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::NewProp_JealousySensitivity = { "JealousySensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGCharacterPersonalityData, JealousySensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JealousySensitivity_MetaData), NewProp_JealousySensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::NewProp_AttachmentSpeed = { "AttachmentSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGCharacterPersonalityData, AttachmentSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentSpeed_MetaData), NewProp_AttachmentSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::NewProp_Warmth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::NewProp_PrideBaseline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::NewProp_EmotionalOpenness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::NewProp_ConflictTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::NewProp_JealousySensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::NewProp_AttachmentSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_KTFGDramaPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::ClassParams = {
	&UKTFGCharacterPersonalityData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::Class_MetaDataParams), Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKTFGCharacterPersonalityData()
{
	if (!Z_Registration_Info_UClass_UKTFGCharacterPersonalityData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKTFGCharacterPersonalityData.OuterSingleton, Z_Construct_UClass_UKTFGCharacterPersonalityData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKTFGCharacterPersonalityData.OuterSingleton;
}
UKTFGCharacterPersonalityData::UKTFGCharacterPersonalityData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKTFGCharacterPersonalityData);
UKTFGCharacterPersonalityData::~UKTFGCharacterPersonalityData() {}
// ********** End Class UKTFGCharacterPersonalityData **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGCharacterPersonalityData_h__Script_KTFGDramaPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKTFGCharacterPersonalityData, UKTFGCharacterPersonalityData::StaticClass, TEXT("UKTFGCharacterPersonalityData"), &Z_Registration_Info_UClass_UKTFGCharacterPersonalityData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKTFGCharacterPersonalityData), 3568030774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGCharacterPersonalityData_h__Script_KTFGDramaPlugin_2875712064(TEXT("/Script/KTFGDramaPlugin"),
	Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGCharacterPersonalityData_h__Script_KTFGDramaPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGCharacterPersonalityData_h__Script_KTFGDramaPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
