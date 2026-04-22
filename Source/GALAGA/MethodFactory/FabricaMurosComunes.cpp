// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaMurosComunes.h"
#include "../Muro.h"

// Sets default values
AFabricaMurosComunes::AFabricaMurosComunes()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaMurosComunes::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaMurosComunes::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AMuro* AFabricaMurosComunes::fabricarMuro(FVector ubicacion)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Fabricando muro comun"));
	return GetWorld()->SpawnActor<AMuro>(AMuro::StaticClass(), ubicacion, FRotator::ZeroRotator);
}

