// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TimerManager.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Timer_Enemy.generated.h"



struct FSpawnLocationData
{
	bool IsCSurrentLocationFilled;
	FVector CurrentLocaiton;
};

UCLASS()
class TIMERPROJC_API ATimer_Enemy : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATimer_Enemy();

	//Reference to TimerHandle
	FTimerHandle TimerHandle;

	void RollCall();

	bool IsActive = false;
	

	static TArray<FSpawnLocationData> LocationsToSpawn;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "SpawnLocations")
	static void AddSpawnLocation(FVector NewLocation, bool isActive);

	UFUNCTION (BlueprintCallable, Category = "RemoveFromLocation")
	static void RemoveFromLocation(FVector currentLocation, bool isActive);


	//This will be used in a button
	UFUNCTION(BlueprintCallable, Category = "ClearArray")
	static void ClearList()
	{
		LocationsToSpawn.Empty();
	}
};
