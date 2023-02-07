// Fill out your copyright notice in the Description page of Project Settings.


#include "PveAssetManager.h"
#include "AbilitySystemGlobals.h"

void UPveAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	UAbilitySystemGlobals::Get().InitGlobalData();
	//UE_LOG(LogTemp, Warning, TEXT("HELLO!!!"));
}
