// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBuilder.h"
#include "BuilderA.generated.h"

class AMuro;

UCLASS()
class GALAGA_API ABuilderA : public AActor, public IIBuilder
{
	GENERATED_BODY()

public:	
	ABuilderA();

protected:
	virtual void BeginPlay() override;

	TArray<AMuro*> Muros;
	FVector LocationActual;
	float TamanioMuro = 60.0f;

	TArray<TArray<bool>> MazeWalls;

	void GenerarLaberintoBinaryTree(int Filas, int Columnas, FVector LocationInicial);
	void GenerarLaberintoEstetico(int Filas, int Columnas, FVector LocationInicial);

	void CreateWalls(FVector LocationInicial, bool UsarTiposVariados);
	void SpawnWall(const FVector& Location, bool bVertical, bool UsarTiposVariados);

	AMuro* SpawnMuro(TSubclassOf<AMuro> TipoMuro, FVector Posicion, bool EsVertical = false);
	TArray<TSubclassOf<AMuro>> ObtenerTodosTiposMuros();

public:	
	virtual void Tick(float DeltaTime) override;

	void BuildA(int Filas, int Columnas, FVector LocationInicial) override;
	void BuildB(int Filas, int Columnas, FVector LocationInicial) override;
	TArray<AMuro*> ObtenerEscenario() override { return Muros; }

};
