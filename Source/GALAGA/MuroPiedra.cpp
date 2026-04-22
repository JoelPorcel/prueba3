// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroPiedra.h"

// Sets default values
AMuroPiedra::AMuroPiedra()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    static ConstructorHelpers::FObjectFinder<UMaterial> MaterialObtenido(TEXT("Material'/Game/StarterContent/Materials/M_Rock_Basalt.M_Rock_Basalt'"));

    if (MaterialObtenido.Succeeded())
    {
        Muro->SetMaterial(0, MaterialObtenido.Object);
    }
}

// Called when the game starts or when spawned
void AMuroPiedra::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMuroPiedra::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

