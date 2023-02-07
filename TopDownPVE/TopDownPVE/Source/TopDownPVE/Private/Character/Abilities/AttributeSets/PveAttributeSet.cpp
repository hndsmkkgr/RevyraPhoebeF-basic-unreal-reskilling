// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Abilities/AttributeSets/PveAttributeSet.h"
#include "Net/UnrealNetwork.h"


void UPveAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPveAttributeSet, Health, OldHealth);
}

void UPveAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPveAttributeSet, MaxHealth, OldMaxHealth);
}

void UPveAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION_NOTIFY(UPveAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPveAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
}
