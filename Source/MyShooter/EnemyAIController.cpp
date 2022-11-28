// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "Kismet/GameplayStatics.h"
//#include "ShooterCharacter.h"


void AEnemyAIController::BeginPlay()
{
    Super::BeginPlay();

}
//
void AEnemyAIController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    
    if (LineOfSightTo(PlayerPawn)) 
    {
        SetFocus(PlayerPawn);
        MoveToActor(PlayerPawn, 400);
    }
    else
    {
           ClearFocus(EAIFocusPriority::Gameplay);
           StopMovement();
    }
    //if (!Shooter->IsDead())
    //{
    //    MoveToActor(PlayerPawn, 400);
    //}
}