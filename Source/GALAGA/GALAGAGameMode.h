// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GALAGAGameMode.generated.h"

UCLASS(MinimalAPI)
class AGALAGAGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGALAGAGameMode();

	virtual void BeginPlay() override;


	virtual void Tick(float DeltaTime) override;
};



