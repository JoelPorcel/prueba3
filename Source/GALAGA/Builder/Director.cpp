// Fill out your copyright notice in the Description page of Project Settings.


#include "Director.h"
#include "BuilderA.h"
#include "../Muro.h"

ADirector::ADirector()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ADirector::BeginPlay()
{
	Super::BeginPlay();
}

void ADirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADirector::EstablecerBuilder(IIBuilder* builder)
{
	Builder = builder;
	if(Builder) 
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Builder establecido correctamente"));
	else 
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Error al establecer el Builder"));
}

void ADirector::ConstruirNivelA(int Filas, int Columnas, FVector LocationInicial)
{
	if (Builder)
	{
		Builder->BuildA(Filas, Columnas, LocationInicial);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No hay Builder establecido"));
	}
}

void ADirector::ConstruirNivelB(int Filas, int Columnas, FVector LocationInicial)
{
	if (Builder)
	{
		Builder->BuildB(Filas, Columnas, LocationInicial);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No hay Builder establecido"));
	}
}

TArray<class AMuro*> ADirector::GetBuilder()
{
	if (Builder)
	{
		return Builder->ObtenerEscenario();
	}
	return TArray<AMuro*>();
}
