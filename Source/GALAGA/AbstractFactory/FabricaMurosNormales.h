// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IFabrica.h"
#include "FabricaMurosNormales.generated.h"

UCLASS()
class GALAGA_API AFabricaMurosNormales : public AActor, public IIFabrica
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaMurosNormales();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	AActor* fabricarObjetoA(FVector ubicacion) override;
	AActor* fabricarObjetoB(FVector ubicacion) override;

};
