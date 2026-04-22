// Fill out your copyright notice in the Description page of Project Settings.


#include "finalBoss.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AfinalBoss::AfinalBoss()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> nave(TEXT("StaticMesh'/Game/MyStuff/source.source'"));

	naveMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FinalBoss"));
	if (nave.Succeeded()) naveMesh->SetStaticMesh(nave.Object);
	naveMesh->SetRelativeScale3D(FVector(0.01f, 0.01f, 0.01f));
	RootComponent = naveMesh;


	TArray<AActor*> Instancias;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AfinalBoss::StaticClass(), Instancias);
	if (Instancias.Num() > 1)
	{
		Instancia = Cast<AfinalBoss>(Instancias[0]);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%s Ya existe"), *Instancia->GetName()));
		Destroy();
	}

}

// Called when the game starts or when spawned
void AfinalBoss::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AfinalBoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

