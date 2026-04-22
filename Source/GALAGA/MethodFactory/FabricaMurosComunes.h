// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaMuros.h"
#include "FabricaMurosComunes.generated.h"

UCLASS()
class GALAGA_API AFabricaMurosComunes : public AFabricaMuros
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaMurosComunes();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	class AMuro* fabricarMuro(FVector ubicacion) override;

};
