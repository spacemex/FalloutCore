// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseInventoryItem.h"
#include "BaseInventoryWeapon.generated.h"

UCLASS()
class FALLOUTCORE_API ABaseInventoryWeapon : public ABaseInventoryItem
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABaseInventoryWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
