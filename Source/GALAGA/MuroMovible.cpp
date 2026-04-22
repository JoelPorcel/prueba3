// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroMovible.h"

// Sets default values
AMuroMovible::AMuroMovible()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMuroMovible::BeginPlay()
{
	Super::BeginPlay();

	//movimiento en Y
	posicionInicialY = GetActorLocation() + FVector(0.0f, 220.0f, 0.0f);
	posicionActualY = posicionInicialY;
	posicionFinalY = posicionActualY + FVector(0.0f, -480.0f, 0.0f);
	incremento = 2.0f;
	moverse = true;

	//movimiento en Z
	posicionInicialZ = GetActorLocation();
	posicionActualZ = posicionInicialZ;
	posicionFinalZ = posicionActualZ + FVector(0.0f, 0.0f, 300.0f);

}

// Called every frame
void AMuroMovible::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	movimientoZ();

}

void AMuroMovible::movimientoY()
{
	if (moverse)
	{

		if (posicionActualY.Y > posicionFinalY.Y) posicionActualY.Y += incremento;
		else moverse = false;
	}
	else
	{
		if (posicionActualY.Y < posicionInicialY.Y) posicionActualY.Y -= incremento;
		else moverse = true;
	}

	SetActorLocation(posicionActualY);
}

void AMuroMovible::movimientoZ()
{
	if (moverse)
	{
		if (posicionActualZ.Z < posicionFinalZ.Z) posicionActualZ.Z += incremento;
		else moverse = false;
	}
	else
	{
		if (posicionActualZ.Z > posicionInicialZ.Z) posicionActualZ.Z -= incremento;
		else moverse = true;
	}
	SetActorLocation(posicionActualZ);
}


