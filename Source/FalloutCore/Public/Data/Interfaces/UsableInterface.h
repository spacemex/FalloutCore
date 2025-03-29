// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UsableInterface.generated.h"

UINTERFACE(Blueprintable)
class UUsableInterface : public UInterface
{
	GENERATED_BODY()
};


class FALLOUTCORE_API IUsableInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, Category = "Usable | Interface")
	void OnInteract(AActor* Actor);
	UFUNCTION(BlueprintNativeEvent, Category = "Usable | Interface")
	void OnFocus();
};

UINTERFACE(NotBlueprintable)
class UVirtualUsableInterface : public UInterface
{
	GENERATED_BODY()
};


class FALLOUTCORE_API IVirtualUsableInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Usable | Interface")
	virtual FText GetDisplayMessage() = 0;
};