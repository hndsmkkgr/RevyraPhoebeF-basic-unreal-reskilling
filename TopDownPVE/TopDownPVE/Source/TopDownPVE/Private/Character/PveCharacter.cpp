// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PveCharacter.h"

// Sets default values
APveCharacter::APveCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APveCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APveCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APveCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

