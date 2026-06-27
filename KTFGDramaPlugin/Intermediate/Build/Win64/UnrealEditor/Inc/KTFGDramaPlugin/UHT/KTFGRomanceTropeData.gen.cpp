// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KTFGData/KTFGRomanceTropeData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKTFGRomanceTropeData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGRomanceTropeData();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGRomanceTropeData_NoRegister();
UPackage* Z_Construct_UPackage__Script_KTFGDramaPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKTFGRomanceTropeData ****************************************************
void UKTFGRomanceTropeData::StaticRegisterNativesUKTFGRomanceTropeData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKTFGRomanceTropeData;
UClass* UKTFGRomanceTropeData::GetPrivateStaticClass()
{
	using TClass = UKTFGRomanceTropeData;
	if (!Z_Registration_Info_UClass_UKTFGRomanceTropeData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KTFGRomanceTropeData"),
			Z_Registration_Info_UClass_UKTFGRomanceTropeData.InnerSingleton,
			StaticRegisterNativesUKTFGRomanceTropeData,
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
	return Z_Registration_Info_UClass_UKTFGRomanceTropeData.InnerSingleton;
}
UClass* Z_Construct_UClass_UKTFGRomanceTropeData_NoRegister()
{
	return UKTFGRomanceTropeData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKTFGRomanceTropeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KTFGData/KTFGRomanceTropeData.h" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRomanceTropeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TropeName_MetaData[] = {
		{ "Category", "KTFG|RomanceTrope" },
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 IDENTIFICACI\xc3\x93N \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRomanceTropeData.h" },
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 IDENTIFICACI\xc3\x93N \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "KTFG|RomanceTrope" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRomanceTropeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialAffection_MetaData[] = {
		{ "Category", "KTFG|EmotionTrope" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 VALORES EMOCIONALES INICIALES \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n// Se aplican al EmotionComponent del personaje en el momento en que\n// el tropo se asigna a la relaci\xc3\xb3n.\n" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRomanceTropeData.h" },
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 VALORES EMOCIONALES INICIALES \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\nSe aplican al EmotionComponent del personaje en el momento en que\nel tropo se asigna a la relaci\xc3\xb3n." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTrust_MetaData[] = {
		{ "Category", "KTFG|EmotionTrope" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRomanceTropeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialPride_MetaData[] = {
		{ "Category", "KTFG|EmotionTrope" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Un Pride alto al inicio (ej. EnemiestoLovers = 80) penaliza el RPS base y retrasa la progresi\xc3\xb3n. */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRomanceTropeData.h" },
		{ "ToolTip", "Un Pride alto al inicio (ej. EnemiestoLovers = 80) penaliza el RPS base y retrasa la progresi\xc3\xb3n." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialJealousy_MetaData[] = {
		{ "Category", "KTFG|EmotionTrope" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRomanceTropeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialVulnerability_MetaData[] = {
		{ "Category", "KTFG|EmotionTrope" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRomanceTropeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectionGrowthModifier_MetaData[] = {
		{ "Category", "KTFG|EmotionGrowth" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 MODIFICADORES DE CRECIMIENTO \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n// Multiplican los deltas emocionales cuando se aplica una situaci\xc3\xb3n.\n// > 1.0 amplifica el efecto; < 1.0 lo amortigua.\n" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRomanceTropeData.h" },
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 MODIFICADORES DE CRECIMIENTO \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\nMultiplican los deltas emocionales cuando se aplica una situaci\xc3\xb3n.\n> 1.0 amplifica el efecto; < 1.0 lo amortigua." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrustGrowthModifier_MetaData[] = {
		{ "Category", "KTFG|EmotionGrowth" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRomanceTropeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrideGrowthModifier_MetaData[] = {
		{ "Category", "KTFG|EmotionGrowth" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRomanceTropeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JealousyGrowthModifier_MetaData[] = {
		{ "Category", "KTFG|EmotionGrowth" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRomanceTropeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VulnerabilityGrowthModifier_MetaData[] = {
		{ "Category", "KTFG|EmotionGrowth" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRomanceTropeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfessionThreshold_MetaData[] = {
		{ "Category", "KTFG|Thresholds" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n     * Score m\xc3\xadnimo necesario para que la situaci\xc3\xb3n \"Confess\" pueda ejecutarse.\n     * Por defecto 75, coincidiendo con la entrada a la fase Resolution,\n     * aunque puede ajustarse por tropo para modular la dificultad narrativa.\n     */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRomanceTropeData.h" },
		{ "ToolTip", "Score m\xc3\xadnimo necesario para que la situaci\xc3\xb3n \"Confess\" pueda ejecutarse.\nPor defecto 75, coincidiendo con la entrada a la fase Resolution,\naunque puede ajustarse por tropo para modular la dificultad narrativa." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TropeName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialAffection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialTrust;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialPride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialJealousy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialVulnerability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AffectionGrowthModifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrustGrowthModifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrideGrowthModifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JealousyGrowthModifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VulnerabilityGrowthModifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConfessionThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKTFGRomanceTropeData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_TropeName = { "TropeName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRomanceTropeData, TropeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TropeName_MetaData), NewProp_TropeName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRomanceTropeData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_InitialAffection = { "InitialAffection", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRomanceTropeData, InitialAffection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialAffection_MetaData), NewProp_InitialAffection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_InitialTrust = { "InitialTrust", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRomanceTropeData, InitialTrust), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTrust_MetaData), NewProp_InitialTrust_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_InitialPride = { "InitialPride", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRomanceTropeData, InitialPride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialPride_MetaData), NewProp_InitialPride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_InitialJealousy = { "InitialJealousy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRomanceTropeData, InitialJealousy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialJealousy_MetaData), NewProp_InitialJealousy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_InitialVulnerability = { "InitialVulnerability", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRomanceTropeData, InitialVulnerability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialVulnerability_MetaData), NewProp_InitialVulnerability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_AffectionGrowthModifier = { "AffectionGrowthModifier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRomanceTropeData, AffectionGrowthModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectionGrowthModifier_MetaData), NewProp_AffectionGrowthModifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_TrustGrowthModifier = { "TrustGrowthModifier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRomanceTropeData, TrustGrowthModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrustGrowthModifier_MetaData), NewProp_TrustGrowthModifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_PrideGrowthModifier = { "PrideGrowthModifier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRomanceTropeData, PrideGrowthModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrideGrowthModifier_MetaData), NewProp_PrideGrowthModifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_JealousyGrowthModifier = { "JealousyGrowthModifier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRomanceTropeData, JealousyGrowthModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JealousyGrowthModifier_MetaData), NewProp_JealousyGrowthModifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_VulnerabilityGrowthModifier = { "VulnerabilityGrowthModifier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRomanceTropeData, VulnerabilityGrowthModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VulnerabilityGrowthModifier_MetaData), NewProp_VulnerabilityGrowthModifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_ConfessionThreshold = { "ConfessionThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRomanceTropeData, ConfessionThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfessionThreshold_MetaData), NewProp_ConfessionThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKTFGRomanceTropeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_TropeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_InitialAffection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_InitialTrust,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_InitialPride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_InitialJealousy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_InitialVulnerability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_AffectionGrowthModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_TrustGrowthModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_PrideGrowthModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_JealousyGrowthModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_VulnerabilityGrowthModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRomanceTropeData_Statics::NewProp_ConfessionThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGRomanceTropeData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKTFGRomanceTropeData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_KTFGDramaPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGRomanceTropeData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKTFGRomanceTropeData_Statics::ClassParams = {
	&UKTFGRomanceTropeData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKTFGRomanceTropeData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGRomanceTropeData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGRomanceTropeData_Statics::Class_MetaDataParams), Z_Construct_UClass_UKTFGRomanceTropeData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKTFGRomanceTropeData()
{
	if (!Z_Registration_Info_UClass_UKTFGRomanceTropeData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKTFGRomanceTropeData.OuterSingleton, Z_Construct_UClass_UKTFGRomanceTropeData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKTFGRomanceTropeData.OuterSingleton;
}
UKTFGRomanceTropeData::UKTFGRomanceTropeData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKTFGRomanceTropeData);
UKTFGRomanceTropeData::~UKTFGRomanceTropeData() {}
// ********** End Class UKTFGRomanceTropeData ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRomanceTropeData_h__Script_KTFGDramaPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKTFGRomanceTropeData, UKTFGRomanceTropeData::StaticClass, TEXT("UKTFGRomanceTropeData"), &Z_Registration_Info_UClass_UKTFGRomanceTropeData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKTFGRomanceTropeData), 2443465291U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRomanceTropeData_h__Script_KTFGDramaPlugin_4173350424(TEXT("/Script/KTFGDramaPlugin"),
	Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRomanceTropeData_h__Script_KTFGDramaPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRomanceTropeData_h__Script_KTFGDramaPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
