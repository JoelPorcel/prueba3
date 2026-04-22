// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IFabrica.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIFabrica : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_API IIFabrica
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual class AActor* fabricarObjetoA(FVector ubicacion) = 0;
	virtual class AActor* fabricarObjetoB(FVector ubicacion) = 0;

};
