// Fill out your copyright notice in the Description page of Project Settings.


#include "Timer_Enemy.h"

int ATimer_Enemy::EnemyCounter = 0;  // define and initialize the static variable


// Sets default values
ATimer_Enemy::ATimer_Enemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	
	

}




// Called when the game starts or when spawned
void ATimer_Enemy::BeginPlay()
{
	Super::BeginPlay();
	DrawDebugSphere(GetWorld(), GetActorLocation(), SpawnRadius, 12, FColor::Red, true);
	
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ATimer_Enemy::SpawnEnemy, 3, true, 3);
	
}

// Called every frame
void ATimer_Enemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	
}

void ATimer_Enemy::ResetEnemyCounter()
{
	UE_LOG(LogTemp, Warning, TEXT("Counter Reset"));

	EnemyCounter = 0;
}


void ATimer_Enemy::SpawnEnemy()
{
//	if (!EnemyToSpawn) { UE_LOG(LogTemp, Error, TEXT("PLEASE ADD ACTOR TO SPAWNER")); return; }
	Distance = FMath::FRandRange(0, SpawnRadius);
	 RandomDirection = UKismetMathLibrary::RandomUnitVector();

	SpawnLocation = GetActorLocation() + RandomDirection * Distance;
	DrawDebugSphere(GetWorld(), SpawnLocation, 15, 4, FColor::Green, false,5);

	EnemyCounter += 1;
	UE_LOG(LogTemp, Warning, TEXT("%d"), EnemyCounter);
}
