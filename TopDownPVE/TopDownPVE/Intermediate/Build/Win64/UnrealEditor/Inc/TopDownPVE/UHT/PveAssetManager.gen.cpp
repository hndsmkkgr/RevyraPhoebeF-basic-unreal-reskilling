// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownPVE/PveAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePveAssetManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	TOPDOWNPVE_API UClass* Z_Construct_UClass_UPveAssetManager();
	TOPDOWNPVE_API UClass* Z_Construct_UClass_UPveAssetManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownPVE();
// End Cross Module References
	void UPveAssetManager::StaticRegisterNativesUPveAssetManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPveAssetManager);
	UClass* Z_Construct_UClass_UPveAssetManager_NoRegister()
	{
		return UPveAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UPveAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPveAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownPVE,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPveAssetManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PveAssetManager.h" },
		{ "ModuleRelativePath", "PveAssetManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPveAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPveAssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPveAssetManager_Statics::ClassParams = {
		&UPveAssetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPveAssetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPveAssetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPveAssetManager()
	{
		if (!Z_Registration_Info_UClass_UPveAssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPveAssetManager.OuterSingleton, Z_Construct_UClass_UPveAssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPveAssetManager.OuterSingleton;
	}
	template<> TOPDOWNPVE_API UClass* StaticClass<UPveAssetManager>()
	{
		return UPveAssetManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPveAssetManager);
	UPveAssetManager::~UPveAssetManager() {}
	struct Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_PveAssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_PveAssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPveAssetManager, UPveAssetManager::StaticClass, TEXT("UPveAssetManager"), &Z_Registration_Info_UClass_UPveAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPveAssetManager), 1859624143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_PveAssetManager_h_1332304654(TEXT("/Script/TopDownPVE"),
		Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_PveAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_PveAssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
