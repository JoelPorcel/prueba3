// Fill out your copyright notice in the Description page of Project Settings.


#include "Muro.h"

// Sets default values
AMuro::AMuro()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Muro = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MuroComponent"));
	RootComponent = Muro;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MuroMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (MuroMesh.Succeeded())
	{
		Muro->SetStaticMesh(MuroMesh.Object);
		Muro->SetWorldScale3D(FVector(0.2f, 3.f, 2.1f));
	}

}

// Called when the game starts or when spawned
void AMuro::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMuro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}