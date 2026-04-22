// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGAGameMode.h"
#include "GALAGAPawn.h"
#include "MethodFactory/FabricaMurosComunes.h"
#include "MethodFactory/FabricaMurosMovibles.h"
#include "MethodFactory/FabricaMurosTrampa.h"
#include "Muro.h"

#include "AbstractFactory/FabricaMurosEspeciales.h"
#include "AbstractFactory/FabricaMurosNormales.h"
#include "Builder/Director.h"
#include "Builder/BuilderA.h"

AGALAGAGameMode::AGALAGAGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGALAGAPawn::StaticClass();
}

void AGALAGAGameMode::BeginPlay()
{
	Super::BeginPlay();

	TArray<AMuro*> muros;

	//Patron de diseño Method Factory
	/*class AFabricaMuros* fabricaMuros = GetWorld()->SpawnActor<AFabricaMuros>(AFabricaMurosComunes::StaticClass());
	class AFabricaMuros* fabricaMuros2 = GetWorld()->SpawnActor<AFabricaMuros>(AFabricaMurosMovibles::StaticClass());
	class AFabricaMuros* fabricaMuros3 = GetWorld()->SpawnActor<AFabricaMuros>(AFabricaMurosTrampa::StaticClass());

	muros.Add(fabricaMuros->fabricarMuro(FVector(400.f,320.f, 200.f)));

	muros.Add(fabricaMuros2->fabricarMuro(FVector(400.f, -70.f, 200.f)));

	muros.Add(fabricaMuros3->fabricarMuro(FVector(400.f, -500.f, 200.f)));*/


	//Patron de diseño Abstract Factory
	/*class AFabricaMurosEspeciales* MurosEspeciales = GetWorld()->SpawnActor<AFabricaMurosEspeciales>(AFabricaMurosEspeciales::StaticClass());
	class AFabricaMurosNormales* MurosNormales = GetWorld()->SpawnActor<AFabricaMurosNormales>(AFabricaMurosNormales::StaticClass());

	muros.Add(Cast<AMuro>(MurosEspeciales->fabricarObjetoA(FVector(600.f, 320.f, 200.f))));
	muros.Add(Cast<AMuro>(MurosEspeciales->fabricarObjetoB(FVector(600.f, -70.f, 200.f))));

	muros.Add(Cast<AMuro>(MurosNormales->fabricarObjetoA(FVector(600.f, -500.f, 200.f))));
	muros.Add(Cast<AMuro>(MurosNormales->fabricarObjetoB(FVector(600.f, -850.f, 200.f))));*/

	//Patron de diseño Builder
	class ADirector* director = GetWorld()->SpawnActor<ADirector>(ADirector::StaticClass());
	class ABuilderA* builderA = GetWorld()->SpawnActor<ABuilderA>(ABuilderA::StaticClass());
	director->EstablecerBuilder(builderA);
	director->ConstruirNivelB(20, 20, FVector(-1340.f, -1660.f, 197.f));



}

void AGALAGAGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

