// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */

//class AShooterCharacter;

UCLASS()
class MYSHOOTER_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaSeconds) override;

protected:
	virtual void BeginPlay() override;

//private:
//	UPROPERTY(EditDefaultsOnly)
//		TSubclassOf<AShooterCharacter> ShooterClass;
//
//	UPROPERTY()
//		AShooterCharacter* Shooter;
};
