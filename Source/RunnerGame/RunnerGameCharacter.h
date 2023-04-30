// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RunnerGameCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS(config=Game)
class ARunnerGameCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

public:
	
	ARunnerGameCharacter();
	/** Returns CameraBoom subobject **/
	FORCEINLINE USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	
	// Function to find distance covered
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Character")
	void FindDistance();

protected:

	// To Move Character forward
	virtual void Tick(float DeltaSeconds) override;

	// Function to Start Sprinting
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Character")
	void StartSprinting();

	// Function to Stop Sprinting
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Character")
	void StopSprinting();

	// Function to Teleport Character
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Character")
	void Teleport();
};