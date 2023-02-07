// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownPVE/TopDownPVE.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownPVE() {}
// Cross Module References
	TOPDOWNPVE_API UEnum* Z_Construct_UEnum_TopDownPVE_DemoAbilityID();
	UPackage* Z_Construct_UPackage__Script_TopDownPVE();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_DemoAbilityID;
	static UEnum* DemoAbilityID_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_DemoAbilityID.OuterSingleton)
		{
			Z_Registration_Info_UEnum_DemoAbilityID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TopDownPVE_DemoAbilityID, Z_Construct_UPackage__Script_TopDownPVE(), TEXT("DemoAbilityID"));
		}
		return Z_Registration_Info_UEnum_DemoAbilityID.OuterSingleton;
	}
	template<> TOPDOWNPVE_API UEnum* StaticEnum<DemoAbilityID>()
	{
		return DemoAbilityID_StaticEnum();
	}
	struct Z_Construct_UEnum_TopDownPVE_DemoAbilityID_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TopDownPVE_DemoAbilityID_Statics::Enumerators[] = {
		{ "DemoAbilityID::None", (int64)DemoAbilityID::None },
		{ "DemoAbilityID::Confirm", (int64)DemoAbilityID::Confirm },
		{ "DemoAbilityID::Cancel", (int64)DemoAbilityID::Cancel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TopDownPVE_DemoAbilityID_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancel.DisplayName", "Cancel" },
		{ "Cancel.Name", "DemoAbilityID::Cancel" },
		{ "Confirm.DisplayName", "Confirm" },
		{ "Confirm.Name", "DemoAbilityID::Confirm" },
		{ "ModuleRelativePath", "TopDownPVE.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "DemoAbilityID::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TopDownPVE_DemoAbilityID_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TopDownPVE,
		nullptr,
		"DemoAbilityID",
		"DemoAbilityID",
		Z_Construct_UEnum_TopDownPVE_DemoAbilityID_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownPVE_DemoAbilityID_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TopDownPVE_DemoAbilityID_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownPVE_DemoAbilityID_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TopDownPVE_DemoAbilityID()
	{
		if (!Z_Registration_Info_UEnum_DemoAbilityID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_DemoAbilityID.InnerSingleton, Z_Construct_UEnum_TopDownPVE_DemoAbilityID_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_DemoAbilityID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_TopDownPVE_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_TopDownPVE_h_Statics::EnumInfo[] = {
		{ DemoAbilityID_StaticEnum, TEXT("DemoAbilityID"), &Z_Registration_Info_UEnum_DemoAbilityID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1406955000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_TopDownPVE_h_444791329(TEXT("/Script/TopDownPVE"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_TopDownPVE_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_TopDownPVE_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
