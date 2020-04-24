 // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PlayerStats.generated.h"

/**
 * 
 */
UCLASS(DisplayName = "PlayerStats")
class TITLEPENDING_API UPlayerStats : public UGameInstanceSubsystem
{

	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UPlayerStats)
		int32 Successes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UPlayerStats)
		int32 Misses;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UPlayerStats)
		int32 MaxHealth = 20;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UPlayerStats)
		int32 CurrentHealth = 20;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UPlayerStats)
		int32 Armor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UPlayerStats)
		TArray<FName> playerHand;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UPlayerStats)
		TArray<FName> playerDeck;

	UFUNCTION(BlueprintCallable, Category = UPlayerStats)
		void HealtoFull();
	UFUNCTION(BlueprintCallable, Category = UPlayerStats)
		void TakeDamage(int damage);
	UFUNCTION(BlueprintCallable, Category = UPlayerStats)
		void HealDamage(int heal);
	UFUNCTION(BlueprintCallable, Category = UPlayerStats)
		void AddArmor(int armorincrease);
	UFUNCTION(BlueprintCallable, Category = UPlayerStats)
		void addCardToPlayerDeck(FName rowName);
	UFUNCTION(BlueprintCallable, Category = UPlayerStats)
		void getCard(int32 index, FName &rowName);
	UFUNCTION(BlueprintCallable, Category = UPlayerStats)
		void InitializeDeck();
	UFUNCTION(BlueprintCallable, Category = UPlayerStats)
		void ShuffleDeck();
	UFUNCTION(BlueprintCallable, Category = UPlayerStats)
		void DiscardCard(FName card);
	UFUNCTION(BlueprintCallable, Category = UPlayerStats)
		void ObliterateDeck();
};