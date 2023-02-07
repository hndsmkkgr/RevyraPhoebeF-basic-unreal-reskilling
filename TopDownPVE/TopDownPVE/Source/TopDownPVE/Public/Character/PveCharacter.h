// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PveCharacter.generated.h"
#include "GameplayTagContainer.h"
#include "AbilitySystemInterface.h"
#include <TopDownPVE/TopDownPVE.h>


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParams(FCharacterDiedDelegate, APveCharacter*, character);


UCLASS()
class TOPDOWNPVE_API APveCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APveCharacter(const class FObjectInitialize& ObjectInitializer);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;


	UPROPERTY(BlueprintAssignable, Category = "Pve|CHaracter")
	FCharacterDiedDelegate OnCharacterDied;

	UPROPERTY(BlueprintAssignable, Category = "Pve|CHaracter")
	virtual bool IsAlive() const;

	UPROPERTY(BlueprintAssignable, Category = "Pve|CHaracter")
	virtual int32 GetAbilityLevel(PveAbilityID AbilityID) const;

	virtual void RemoveCharacterAbilities();

	virtual void Die();

	UFUNCTION(BlueprintCallable, Category = "Pve|Character")
	virtual void FinishDying();

	UFUNCTION(BlueprintCallable, Category = "Pve|CHaracter|Attributes")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Pve|CHaracter|Attributes")
	float GetMaxHealth() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	TWeakObjectPtr<class CharacterAbilitySystemComponent> AbilitySystemComponent;
	TWeakObjectPtr<class PveAttributeSet> AttributeSetBase;

	FGameplayTag DeadTag;
	FGameplaytag EffectRemoveOnDeathTag;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Pve|Character")
	FText CharacterName;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Pve|Animation")
	UAnimMontage* DeathMontage;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Pve|Abilities")
	TSubclassOf<class UGameplayEffect> DefaultAttributes;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Pve|Abilities")
	TArray<TSubclassOf<class UGameplayEffect> StartupEffects>;

	virtual void AddCharacterAbilities();

	virtual void InitializeAttributes();

	virtual void AddStartupEffects();

	//dipake pas spawning
	virtual void SetHealth(float Health);

	virtual void SetMaxHealth(float MaxHealth);

};
