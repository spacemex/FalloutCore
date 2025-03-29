// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InventoryInterface.generated.h"

UINTERFACE(Blueprintable)
class UInventoryInterface : public UInterface
{
	GENERATED_BODY()
};


class FALLOUTCORE_API IInventoryInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, Category = "Inventory | Interface")
	void OnUse(AActor* Actor);
	
};
