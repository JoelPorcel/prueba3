// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaMurosNormales.h"
#include "../Muro.h"
#include "../MuroPiedra.h"

// Sets default values
AFabricaMurosNormales::AFabricaMurosNormales()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaMurosNormales::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaMurosNormales::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AActor* AFabricaMurosNormales::fabricarObjetoA(FVector ubicacion)
{
	return GetWorld()->SpawnActor<AMuro>(ubicacion, FRotator::ZeroRotator);
}

AActor* AFabricaMurosNormales::fabricarObjetoB(FVector ubicacion)
{
	return GetWorld()->SpawnActor<AMuroPiedra>(ubicacion, FRotator::ZeroRotator);
}

