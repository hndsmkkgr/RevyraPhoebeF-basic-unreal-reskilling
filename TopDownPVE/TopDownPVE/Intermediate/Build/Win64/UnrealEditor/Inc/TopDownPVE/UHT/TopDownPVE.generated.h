// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TopDownPVE.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNPVE_TopDownPVE_generated_h
#error "TopDownPVE.generated.h already included, missing '#pragma once' in TopDownPVE.h"
#endif
#define TOPDOWNPVE_TopDownPVE_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Agate_Crew_Unreal_Projects_UnrealTraining_TopDownPVE_TopDownPVE_Source_TopDownPVE_TopDownPVE_h


#define FOREACH_ENUM_DEMOABILITYID(op) \
	op(DemoAbilityID::None) \
	op(DemoAbilityID::Confirm) \
	op(DemoAbilityID::Cancel) 

enum class DemoAbilityID : uint8;
template<> struct TIsUEnumClass<DemoAbilityID> { enum { Value = true }; };
template<> TOPDOWNPVE_API UEnum* StaticEnum<DemoAbilityID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
