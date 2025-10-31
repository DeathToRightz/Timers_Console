// Fill out your copyright notice in the Description page of Project Settings.


#include "Timer_Enemy.h"

TArray<FSpawnLocationData> ATimer_Enemy::LocationsToSpawn;


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
	if (LocationsToSpawn.Num() > 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Cleared"));
		
		UE_LOG(LogTemp, Warning, TEXT("Array Length: %d"), LocationsToSpawn.Num());

	}

	RollCall();
	//GetWorldTimerManager().SetTimer(TimerHandle, this, &ATimer_Enemy::SpawnEnemy, 3, true, 3);
	
}

// Called every frame
void ATimer_Enemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATimer_Enemy::AddSpawnLocation(FVector NewLocation, bool isActive)
{

	//When the func is called it will add the Location and the bool that is set up in the BP for it.
	FSpawnLocationData NewData(isActive,NewLocation);
	//It will now also add the Data to the Static Array to keep track of
	LocationsToSpawn.Add(NewData);
}

void ATimer_Enemy::RemoveFromLocation(FVector currentLocation, bool isActive)
{

}


//This will help keep track of spawned enemies for testing 
void ATimer_Enemy::RollCall()
{
	int EnemyIndex = 1;
	for (FSpawnLocationData Location : LocationsToSpawn)
	{
		FString CurrentLocation = Location.CurrentLocaiton.ToString();

		UE_LOG(LogTemp, Warning, TEXT("Current Location is: %s \n is the space filled: %s"), *CurrentLocation, Location.IsCSurrentLocationFilled ? TEXT("TRUE") : TEXT("FALSE"));
	}
}