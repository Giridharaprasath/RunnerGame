// Copyright Epic Games, Inc. All Rights Reserved.

#include "RunnerGameGameMode.h"

void ARunnerGameGameMode::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < NumOfInitialFloors; i++)
	{
		SpawnFirstFloors();
	}
}