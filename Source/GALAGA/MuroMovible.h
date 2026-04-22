// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Muro.h"
#include "MuroMovible.generated.h"

UCLASS()
class GALAGA_API AMuroMovible : public AMuro
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMuroMovible();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	FVector posicionInicialZ;
	FVector posicionActualZ;
	FVector posicionFinalZ;
	float incremento;
	bool moverse;
	FVector posicionInicialY;
	FVector posicionActualY;
	FVector posicionFinalY;

	void movimientoY();
	void movimientoZ();


};
