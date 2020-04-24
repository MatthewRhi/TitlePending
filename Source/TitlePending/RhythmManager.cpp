// Fill out your copyright notice in the Description page of Project Settings.


#include "RhythmManager.h"

int URhythmManager::GetRandomRhythm(int random)
{
	if (random % 3 == 0) {
		// 2 is assigned to LR arbitrarialy
		return 2;
	}
	else if (random % 2 == 0) {
		// 0 is assigned to L arbitrarialy
		return 0;
	}
	else {
		// 1 is assigned to R arbitrarialy
		return 1;
	}
}
