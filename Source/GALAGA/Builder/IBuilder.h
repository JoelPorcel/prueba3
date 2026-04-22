// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IBuilder.generated.h"

UINTERFACE(MinimalAPI)
class UIBuilder : public UInterface
{
	GENERATED_BODY()
};

class GALAGA_API IIBuilder
{
	GENERATED_BODY()

public:
	virtual void BuildA(int Filas, int Columnas, FVector LocationInicial) = 0;
	virtual void BuildB(int Filas, int Columnas, FVector LocationInicial) = 0;
	virtual TArray<class AMuro*> ObtenerEscenario() = 0;
};
