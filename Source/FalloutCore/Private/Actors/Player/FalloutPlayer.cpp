// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Player/FalloutPlayer.h"


// Sets default values
AFalloutPlayer::AFalloutPlayer()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFalloutPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFalloutPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AFalloutPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

