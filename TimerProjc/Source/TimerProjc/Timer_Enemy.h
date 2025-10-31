// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TimerManager.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Kismet/KismetMathLibrary.h"
#include "Timer_Enemy.generated.h"





UCLASS()
class TIMERPROJC_API ATimer_Enemy : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATimer_Enemy();

	//Reference to TimerHandle
	FTimerHandle TimerHandle;

	void SpawnEnemy();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Random Direction
	FVector RandomDirection;

	//Random Distance value to spawn from
	float Distance;

	//Random location to spawn
	FVector SpawnLocation;

	

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Spawner Variables")
	float SpawnRadius = 150;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Spawner Variables")
	TSubclassOf<AActor> EnemyToSpawn;
	
	static int EnemyCounter;

	UFUNCTION(BlueprintCallable, Category = "Reset Enemy Counter")
	static void ResetEnemyCounter();
};
