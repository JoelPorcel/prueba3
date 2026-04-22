// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaMuros.generated.h"

UCLASS()
class GALAGA_API AFabricaMuros : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaMuros();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual class AMuro* fabricarMuro(FVector ubicacion) PURE_VIRTUAL(AFabricaMuros::fabricarMuro, return nullptr;);

};
