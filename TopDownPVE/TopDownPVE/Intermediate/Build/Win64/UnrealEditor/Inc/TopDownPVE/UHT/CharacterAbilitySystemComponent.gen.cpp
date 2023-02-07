// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownPVE/Public/Character/Abilities/CharacterAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAbilitySystemComponent() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	TOPDOWNPVE_API UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent();
	TOPDOWNPVE_API UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister();
	TOPDOWNPVE_API UFunction* Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TopDownPVE();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics
	{
		struct _Script_TopDownPVE_eventReceivedDamageDelegate_Parms
		{
			UCharacterAbilitySystemComponent* SourceASC;
			float UnmitigatedDamage;
			float MitigatedDamage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnmitigatedDamage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MitigatedDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TopDownPVE_eventReceivedDamageDelegate_Parms, SourceASC), Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_UnmitigatedDamage = { "UnmitigatedDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TopDownPVE_eventReceivedDamageDelegate_Parms, UnmitigatedDamage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_MitigatedDamage = { "MitigatedDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TopDownPVE_eventReceivedDamageDelegate_Parms, MitigatedDamage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_UnmitigatedDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics::NewProp_MitigatedDamage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Abilities/CharacterAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TopDownPVE, nullptr, "ReceivedDamageDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics::_Script_TopDownPVE_eventReceivedDamageDelegate_Parms), Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TopDownPVE_ReceivedDamageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UCharacterAbilitySystemComponent::StaticRegisterNativesUCharacterAbilitySystemComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterAbilitySystemComponent);
	UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister()
	{
		return UCharacterAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownPVE,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Character/Abilities/CharacterAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/Character/Abilities/CharacterAbilitySystemComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAbilitySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::ClassParams = {
		&UCharacterAbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_UCharacterAbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterAbilitySystemComponent.OuterSingleton;
	}
	template<> TOPDOWNPVE_API UClass* StaticClass<UCharacterAbilitySystemComponent>()
	{
		return UCharacterAbilitySystemComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAbilitySystemComponent);
	UCharacterAbilitySystemComponent::~UCharacterAbilitySystemComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAbilitySystemComponent, UCharacterAbilitySystemComponent::StaticClass, TEXT("UCharacterAbilitySystemComponent"), &Z_Registration_Info_UClass_UCharacterAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAbilitySystemComponent), 2559823255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_1148765236(TEXT("/Script/TopDownPVE"),
		Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
