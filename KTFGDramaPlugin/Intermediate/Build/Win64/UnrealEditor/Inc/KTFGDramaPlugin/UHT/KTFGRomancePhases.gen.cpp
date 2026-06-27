// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KTFGData/KTFGRomancePhases.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKTFGRomancePhases() {}

// ********** Begin Cross Module References ********************************************************
KTFGDRAMAPLUGIN_API UEnum* Z_Construct_UEnum_KTFGDramaPlugin_EKTFGStoryPhase();
UPackage* Z_Construct_UPackage__Script_KTFGDramaPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EKTFGStoryPhase ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKTFGStoryPhase;
static UEnum* EKTFGStoryPhase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKTFGStoryPhase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKTFGStoryPhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KTFGDramaPlugin_EKTFGStoryPhase, (UObject*)Z_Construct_UPackage__Script_KTFGDramaPlugin(), TEXT("EKTFGStoryPhase"));
	}
	return Z_Registration_Info_UEnum_EKTFGStoryPhase.OuterSingleton;
}
template<> KTFGDRAMAPLUGIN_API UEnum* StaticEnum<EKTFGStoryPhase>()
{
	return EKTFGStoryPhase_StaticEnum();
}
struct Z_Construct_UEnum_KTFGDramaPlugin_EKTFGStoryPhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attraction.Comment", "/** Primera fase: atracci\xc3\xb3n inicial, tensi\xc3\xb3n sin definir. Score < 25. */" },
		{ "Attraction.DisplayName", "Attraction" },
		{ "Attraction.Name", "EKTFGStoryPhase::Attraction" },
		{ "Attraction.ToolTip", "Primera fase: atracci\xc3\xb3n inicial, tensi\xc3\xb3n sin definir. Score < 25." },
		{ "BlueprintType", "true" },
		{ "Conflict.Comment", "/**\n     * Tercera fase: la relaci\xc3\xb3n pasa por su mayor tensi\xc3\xb3n narrativa.\n     * Es aqu\xc3\xad donde se habilita la situaci\xc3\xb3n \"Confess\". Score 50\xe2\x80\x93""74.\n     */" },
		{ "Conflict.DisplayName", "Conflict" },
		{ "Conflict.Name", "EKTFGStoryPhase::Conflict" },
		{ "Conflict.ToolTip", "Tercera fase: la relaci\xc3\xb3n pasa por su mayor tensi\xc3\xb3n narrativa.\nEs aqu\xc3\xad donde se habilita la situaci\xc3\xb3n \"Confess\". Score 50\xe2\x80\x93""74." },
		{ "Development.Comment", "/** Segunda fase: el v\xc3\xadnculo se consolida. Score 25\xe2\x80\x93""49. */" },
		{ "Development.DisplayName", "Development" },
		{ "Development.Name", "EKTFGStoryPhase::Development" },
		{ "Development.ToolTip", "Segunda fase: el v\xc3\xadnculo se consolida. Score 25\xe2\x80\x93""49." },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRomancePhases.h" },
		{ "Resolution.Comment", "/** Cuarta y \xc3\xbaltima fase: resoluci\xc3\xb3n del arco rom\xc3\xa1ntico. Score \xe2\x89\xa5 75. */" },
		{ "Resolution.DisplayName", "Resolution" },
		{ "Resolution.Name", "EKTFGStoryPhase::Resolution" },
		{ "Resolution.ToolTip", "Cuarta y \xc3\xbaltima fase: resoluci\xc3\xb3n del arco rom\xc3\xa1ntico. Score \xe2\x89\xa5 75." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKTFGStoryPhase::Attraction", (int64)EKTFGStoryPhase::Attraction },
		{ "EKTFGStoryPhase::Development", (int64)EKTFGStoryPhase::Development },
		{ "EKTFGStoryPhase::Conflict", (int64)EKTFGStoryPhase::Conflict },
		{ "EKTFGStoryPhase::Resolution", (int64)EKTFGStoryPhase::Resolution },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KTFGDramaPlugin_EKTFGStoryPhase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KTFGDramaPlugin,
	nullptr,
	"EKTFGStoryPhase",
	"EKTFGStoryPhase",
	Z_Construct_UEnum_KTFGDramaPlugin_EKTFGStoryPhase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KTFGDramaPlugin_EKTFGStoryPhase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KTFGDramaPlugin_EKTFGStoryPhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KTFGDramaPlugin_EKTFGStoryPhase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KTFGDramaPlugin_EKTFGStoryPhase()
{
	if (!Z_Registration_Info_UEnum_EKTFGStoryPhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKTFGStoryPhase.InnerSingleton, Z_Construct_UEnum_KTFGDramaPlugin_EKTFGStoryPhase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKTFGStoryPhase.InnerSingleton;
}
// ********** End Enum EKTFGStoryPhase *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRomancePhases_h__Script_KTFGDramaPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKTFGStoryPhase_StaticEnum, TEXT("EKTFGStoryPhase"), &Z_Registration_Info_UEnum_EKTFGStoryPhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3704888470U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRomancePhases_h__Script_KTFGDramaPlugin_2182838813(TEXT("/Script/KTFGDramaPlugin"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRomancePhases_h__Script_KTFGDramaPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRomancePhases_h__Script_KTFGDramaPlugin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
