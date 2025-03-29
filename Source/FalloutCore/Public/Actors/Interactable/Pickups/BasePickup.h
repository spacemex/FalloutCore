﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/Interactable/BaseInteractable.h"
#include "GameFramework/Actor.h"
#include "BasePickup.generated.h"

UCLASS()
class FALLOUTCORE_API ABasePickup : public ABaseInteractable
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABasePickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
