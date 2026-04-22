// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBuilder.h"
#include "Director.generated.h"

UCLASS()
class GALAGA_API ADirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	IIBuilder* Builder;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void EstablecerBuilder(IIBuilder* builder);

	void ConstruirNivelA(int filas, int columnas, FVector locationInicial);

	void ConstruirNivelB(int filas, int columnas, FVector locationInicial);

	TArray<class AMuro*> GetBuilder();
};
