// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RunnerGameGameMode.generated.h"

UCLASS(minimalapi)
class ARunnerGameGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Game Mode")
	int NumOfInitialFloors = 5;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Mode")
	void SpawnFirstFloors();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Mode")
	void SpawnNextFloors();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Mode")
	void StartGame();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Mode")
	void RestartGame();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Game Mode")
	void GameOver();
};