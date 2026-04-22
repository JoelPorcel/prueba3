// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaMurosTrampa.h"
#include "../MuroTrampa.h"

// Sets default values
AFabricaMurosTrampa::AFabricaMurosTrampa()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaMurosTrampa::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaMurosTrampa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AMuro* AFabricaMurosTrampa::fabricarMuro(FVector ubicacion)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Fabricando muro trampa"));
	return GetWorld()->SpawnActor<AMuro>(AMuroTrampa::StaticClass(), ubicacion, FRotator::ZeroRotator);
}

