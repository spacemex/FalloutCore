// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Inventory/BaseInventoryWeapon.h"


// Sets default values
ABaseInventoryWeapon::ABaseInventoryWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABaseInventoryWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseInventoryWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

