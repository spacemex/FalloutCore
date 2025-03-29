// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FalloutPlayerInterface.generated.h"

class AFalloutPlayer;

UINTERFACE(NotBlueprintable)
class UFalloutPlayerInterface : public UInterface
{
	GENERATED_BODY()
};

class FALLOUTCORE_API IFalloutPlayerInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Player | Interface")
	virtual AFalloutPlayer* GetFalloutPlayer() = 0;
};
