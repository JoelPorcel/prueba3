// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaMurosEspeciales.h"
#include "../MuroMovible.h"
#include "../MuroTrampa.h"

// Sets default values
AFabricaMurosEspeciales::AFabricaMurosEspeciales()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaMurosEspeciales::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaMurosEspeciales::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AActor* AFabricaMurosEspeciales::fabricarObjetoA(FVector ubicacion)
{
	return GetWorld()->SpawnActor<AMuroMovible>(ubicacion, FRotator::ZeroRotator);
}

AActor* AFabricaMurosEspeciales::fabricarObjetoB(FVector ubicacion)
{
	return GetWorld()->SpawnActor<AMuroTrampa>(ubicacion, FRotator::ZeroRotator);
}
