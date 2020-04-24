// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RhythmManager.generated.h"

/**
 * 
 */
UCLASS(DisplayName = "RhythmManager")
class TITLEPENDING_API URhythmManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = URhythmManager)
	int GetRandomRhythm(int random);
};
