// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaMurosMovibles.h"
#include "../MuroMovible.h"


// Sets default values
AFabricaMurosMovibles::AFabricaMurosMovibles()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaMurosMovibles::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaMurosMovibles::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AMuro* AFabricaMurosMovibles::fabricarMuro(FVector ubicacion)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Fabricando muro movible"));
	return GetWorld()->SpawnActor<AMuro>(AMuroMovible::StaticClass(), ubicacion, FRotator::ZeroRotator);
}

