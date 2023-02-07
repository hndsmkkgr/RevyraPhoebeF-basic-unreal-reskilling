// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownPVE/Public/Character/PveCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePveCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	TOPDOWNPVE_API UClass* Z_Construct_UClass_APveCharacter();
	TOPDOWNPVE_API UClass* Z_Construct_UClass_APveCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownPVE();
// End Cross Module References
	void APveCharacter::StaticRegisterNativesAPveCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APveCharacter);
	UClass* Z_Construct_UClass_APveCharacter_NoRegister()
	{
		return APveCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APveCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APveCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownPVE,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APveCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/PveCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/PveCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APveCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APveCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APveCharacter_Statics::ClassParams = {
		&APveCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APveCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APveCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APveCharacter()
	{
		if (!Z_Registration_Info_UClass_APveCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APveCharacter.OuterSingleton, Z_Construct_UClass_APveCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APveCharacter.OuterSingleton;
	}
	template<> TOPDOWNPVE_API UClass* StaticClass<APveCharacter>()
	{
		return APveCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APveCharacter);
	APveCharacter::~APveCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_PveCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_PveCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APveCharacter, APveCharacter::StaticClass, TEXT("APveCharacter"), &Z_Registration_Info_UClass_APveCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APveCharacter), 3425454656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_PveCharacter_h_161851912(TEXT("/Script/TopDownPVE"),
		Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_PveCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_PveCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
