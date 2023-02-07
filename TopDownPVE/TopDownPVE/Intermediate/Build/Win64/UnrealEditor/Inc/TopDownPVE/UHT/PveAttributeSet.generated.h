// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Abilities/AttributeSets/PveAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef TOPDOWNPVE_PveAttributeSet_generated_h
#error "PveAttributeSet.generated.h already included, missing '#pragma once' in PveAttributeSet.h"
#endif
#define TOPDOWNPVE_PveAttributeSet_generated_h

#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_SPARSE_DATA
#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_ACCESSORS
#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPveAttributeSet(); \
	friend struct Z_Construct_UClass_UPveAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UPveAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownPVE"), NO_API) \
	DECLARE_SERIALIZER(UPveAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		NETFIELD_REP_END=MaxHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UPveAttributeSet) \
public:


#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUPveAttributeSet(); \
	friend struct Z_Construct_UClass_UPveAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UPveAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownPVE"), NO_API) \
	DECLARE_SERIALIZER(UPveAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		NETFIELD_REP_END=MaxHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UPveAttributeSet) \
public:


#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPveAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPveAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPveAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPveAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPveAttributeSet(UPveAttributeSet&&); \
	NO_API UPveAttributeSet(const UPveAttributeSet&); \
public: \
	NO_API virtual ~UPveAttributeSet();


#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPveAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPveAttributeSet(UPveAttributeSet&&); \
	NO_API UPveAttributeSet(const UPveAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPveAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPveAttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPveAttributeSet) \
	NO_API virtual ~UPveAttributeSet();


#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_19_PROLOG
#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_SPARSE_DATA \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_RPC_WRAPPERS \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_ACCESSORS \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_INCLASS \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_SPARSE_DATA \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_ACCESSORS \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNPVE_API UClass* StaticClass<class UPveAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_Public_Character_Abilities_AttributeSets_PveAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
