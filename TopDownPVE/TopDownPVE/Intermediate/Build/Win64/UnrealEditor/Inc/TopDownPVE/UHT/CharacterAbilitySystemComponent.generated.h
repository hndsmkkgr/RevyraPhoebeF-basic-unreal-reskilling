// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Abilities/CharacterAbilitySystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCharacterAbilitySystemComponent;
#ifdef TOPDOWNPVE_CharacterAbilitySystemComponent_generated_h
#error "CharacterAbilitySystemComponent.generated.h already included, missing '#pragma once' in CharacterAbilitySystemComponent.h"
#endif
#define TOPDOWNPVE_CharacterAbilitySystemComponent_generated_h

#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_9_DELEGATE \
struct _Script_TopDownPVE_eventReceivedDamageDelegate_Parms \
{ \
	UCharacterAbilitySystemComponent* SourceASC; \
	float UnmitigatedDamage; \
	float MitigatedDamage; \
}; \
static inline void FReceivedDamageDelegate_DelegateWrapper(const FMulticastScriptDelegate& ReceivedDamageDelegate, UCharacterAbilitySystemComponent* SourceASC, float UnmitigatedDamage, float MitigatedDamage) \
{ \
	_Script_TopDownPVE_eventReceivedDamageDelegate_Parms Parms; \
	Parms.SourceASC=SourceASC; \
	Parms.UnmitigatedDamage=UnmitigatedDamage; \
	Parms.MitigatedDamage=MitigatedDamage; \
	ReceivedDamageDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_SPARSE_DATA
#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_RPC_WRAPPERS
#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_ACCESSORS
#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownPVE"), NO_API) \
	DECLARE_SERIALIZER(UCharacterAbilitySystemComponent)


#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownPVE"), NO_API) \
	DECLARE_SERIALIZER(UCharacterAbilitySystemComponent)


#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterAbilitySystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAbilitySystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterAbilitySystemComponent(UCharacterAbilitySystemComponent&&); \
	NO_API UCharacterAbilitySystemComponent(const UCharacterAbilitySystemComponent&); \
public: \
	NO_API virtual ~UCharacterAbilitySystemComponent();


#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterAbilitySystemComponent(UCharacterAbilitySystemComponent&&); \
	NO_API UCharacterAbilitySystemComponent(const UCharacterAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterAbilitySystemComponent) \
	NO_API virtual ~UCharacterAbilitySystemComponent();


#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_14_PROLOG
#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_SPARSE_DATA \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_RPC_WRAPPERS \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_ACCESSORS \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_INCLASS \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_SPARSE_DATA \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_ACCESSORS \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNPVE_API UClass* StaticClass<class UCharacterAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_CharacterAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
