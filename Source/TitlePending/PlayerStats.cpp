// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerStats.h"
#include "Card.cpp"
#include "random"

TArray<FName> discardPile;

void UPlayerStats::InitializeDeck()
{
	playerDeck.Add("Attack1");
	playerDeck.Add("Attack2");
	playerDeck.Add("Defense1");
	playerDeck.Add("Defense2");
	playerDeck.Add("Heal1");
}

void UPlayerStats::HealtoFull()
{
	CurrentHealth = MaxHealth;
}

void UPlayerStats::TakeDamage(int damage)
{
	if (Armor != 0)
	{
		if ((Armor - damage) >= 0)
		{
			Armor -= damage;
		}
		else
		{
			CurrentHealth -= damage - Armor;
			Armor = 0;
		}
	}
	else
	{
		CurrentHealth -= damage;
	}
}
void UPlayerStats::HealDamage(int heal)
{
	if (CurrentHealth + heal >= MaxHealth)
	{
		CurrentHealth = MaxHealth;
	}
	else
	{
		CurrentHealth += heal;
	}
}
void UPlayerStats::AddArmor(int armorincrease)
{
	Armor += armorincrease;
}

void UPlayerStats::addCardToPlayerDeck(FName rowName)
{
	playerDeck.Add(rowName);
}

void UPlayerStats::getCard(int32 index, FName &rowName)
{
	rowName = playerDeck.Last(index);
}

void UPlayerStats::ShuffleDeck()
{
	for (int i=0; i>discardPile.Num(); i++)
	{
		FName card = discardPile.Last(rand());
		playerDeck.Add(card);
		discardPile.Remove(card);
	}
}

void UPlayerStats::DiscardCard(FName card)
{
	discardPile.Add(card);
}
void UPlayerStats::ObliterateDeck()
{
	playerDeck.Reset(0);
}