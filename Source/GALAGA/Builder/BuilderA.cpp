// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderA.h"
#include "../Muro.h"
#include "../MuroMovible.h"
#include "../MuroTrampa.h"
#include "../MuroPiedra.h"

ABuilderA::ABuilderA()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABuilderA::BeginPlay()
{
	Super::BeginPlay();
}

void ABuilderA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABuilderA::BuildA(int Filas, int Columnas, FVector LocationInicial)
{
	Muros.Empty();
	LocationActual = LocationInicial;
	GenerarLaberintoBinaryTree(Filas, Columnas, LocationInicial);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("BuildA completado: %d muros generados"), Muros.Num()));
}

void ABuilderA::BuildB(int Filas, int Columnas, FVector LocationInicial)
{
	Muros.Empty();
	LocationActual = LocationInicial;
	GenerarLaberintoEstetico(Filas, Columnas, LocationInicial);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("BuildB completado: %d muros generados"), Muros.Num()));
}

void ABuilderA::GenerarLaberintoBinaryTree(int Filas, int Columnas, FVector LocationInicial)
{
	// Binary Tree Algorithm mejorado con todas las 4 direcciones para mejor aleatoriedad
	MazeWalls.Empty();
	MazeWalls.AddDefaulted(Filas);

	for (int32 X = 0; X < Filas; ++X)
	{
		MazeWalls[X].AddDefaulted(Columnas);
		for (int32 Y = 0; Y < Columnas; ++Y)
		{
			MazeWalls[X][Y] = true;
		}
	}

	// Usar seed diferente para mejor aleatoriedad
	FRandomStream RandomStream(FPlatformTime::Cycles());

	// Crear un grid de visitadas
	TArray<TArray<bool>> Visitadas;
	Visitadas.AddDefaulted(Filas);
	for (int32 X = 0; X < Filas; ++X)
	{
		Visitadas[X].AddDefaulted(Columnas);
		for (int32 Y = 0; Y < Columnas; ++Y)
		{
			Visitadas[X][Y] = false;
		}
	}

	// Recursive Backtracking desde (0,0) - mismo algoritmo que BuildB pero más simple
	TArray<FIntPoint> Stack;
	int32 StartX = RandomStream.RandRange(0, Filas - 1);
	int32 StartY = RandomStream.RandRange(0, Columnas - 1);

	Visitadas[StartX][StartY] = true;
	Stack.Add(FIntPoint(StartX, StartY));

	// Direcciones: Arriba, Abajo, Izquierda, Derecha
	int32 Direcciones[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

	while (Stack.Num() > 0)
	{
		FIntPoint Actual = Stack[Stack.Num() - 1];
		TArray<int32> VecinosValidos;

		// Buscar vecinos no visitados
		for (int32 D = 0; D < 4; ++D)
		{
			int32 NuevaX = Actual.X + Direcciones[D][0];
			int32 NuevaY = Actual.Y + Direcciones[D][1];

			if (NuevaX >= 0 && NuevaX < Filas && NuevaY >= 0 && NuevaY < Columnas && !Visitadas[NuevaX][NuevaY])
			{
				VecinosValidos.Add(D);
			}
		}

		if (VecinosValidos.Num() > 0)
		{
			// Elegir dirección aleatoria
			int32 RandomDir = VecinosValidos[RandomStream.RandRange(0, VecinosValidos.Num() - 1)];
			int32 NuevaX = Actual.X + Direcciones[RandomDir][0];
			int32 NuevaY = Actual.Y + Direcciones[RandomDir][1];

			// Remover muro entre celdas
			if (Direcciones[RandomDir][0] == -1)
				MazeWalls[Actual.X - 1][Actual.Y] = false; // Arriba
			else if (Direcciones[RandomDir][0] == 1)
				MazeWalls[Actual.X][Actual.Y] = false; // Abajo
			else if (Direcciones[RandomDir][1] == -1)
				MazeWalls[Actual.X][Actual.Y - 1] = false; // Izquierda
			else if (Direcciones[RandomDir][1] == 1)
				MazeWalls[Actual.X][Actual.Y + 1] = false; // Derecha

			Visitadas[NuevaX][NuevaY] = true;
			Stack.Add(FIntPoint(NuevaX, NuevaY));
		}
		else
		{
			Stack.Pop();
		}
	}

	// Crear muros en el mundo
	CreateWalls(LocationInicial, false);
}

void ABuilderA::GenerarLaberintoEstetico(int Filas, int Columnas, FVector LocationInicial)
{
	// Aldous-Broder Algorithm - Más complejo y visualmente mejor con mejor aleatoriedad
	MazeWalls.Empty();
	MazeWalls.AddDefaulted(Filas);

	for (int32 X = 0; X < Filas; ++X)
	{
		MazeWalls[X].AddDefaulted(Columnas);
		for (int32 Y = 0; Y < Columnas; ++Y)
		{
			MazeWalls[X][Y] = true;
		}
	}

	// Matriz de visitadas para Aldous-Broder
	TArray<TArray<bool>> Visitadas;
	Visitadas.AddDefaulted(Filas);
	for (int32 X = 0; X < Filas; ++X)
	{
		Visitadas[X].AddDefaulted(Columnas);
		for (int32 Y = 0; Y < Columnas; ++Y)
		{
			Visitadas[X][Y] = false;
		}
	}

	// Usar seed diferente para mejor aleatoriedad
	FRandomStream RandomStream(FPlatformTime::Cycles() + 12345);

	// Comenzar desde una celda aleatoria
	int32 CurrentX = RandomStream.RandRange(0, Filas - 1);
	int32 CurrentY = RandomStream.RandRange(0, Columnas - 1);
	Visitadas[CurrentX][CurrentY] = true;
	int32 VisitedCount = 1;
	int32 TotalCells = Filas * Columnas;

	while (VisitedCount < TotalCells)
	{
		// Obtener vecinos
		TArray<FIntPoint> Vecinos;
		if (CurrentX > 0) Vecinos.Add(FIntPoint(CurrentX - 1, CurrentY));
		if (CurrentX < Filas - 1) Vecinos.Add(FIntPoint(CurrentX + 1, CurrentY));
		if (CurrentY > 0) Vecinos.Add(FIntPoint(CurrentX, CurrentY - 1));
		if (CurrentY < Columnas - 1) Vecinos.Add(FIntPoint(CurrentX, CurrentY + 1));

		// Elegir un vecino aleatorio
		int32 VecinoIdx = RandomStream.RandRange(0, Vecinos.Num() - 1);
		FIntPoint Vecino = Vecinos[VecinoIdx];

		if (!Visitadas[Vecino.X][Vecino.Y])
		{
			// Remover muro entre celdas actual y vecina
			if (Vecino.X == CurrentX - 1)
				MazeWalls[CurrentX - 1][CurrentY] = false; // Norte
			else if (Vecino.X == CurrentX + 1)
				MazeWalls[CurrentX][CurrentY] = false; // Sur
			else if (Vecino.Y == CurrentY - 1)
				MazeWalls[CurrentX][CurrentY - 1] = false; // Oeste
			else if (Vecino.Y == CurrentY + 1)
				MazeWalls[CurrentX][CurrentY + 1] = false; // Este

			Visitadas[Vecino.X][Vecino.Y] = true;
			VisitedCount++;
		}

		CurrentX = Vecino.X;
		CurrentY = Vecino.Y;
	}

	// Crear muros en el mundo con tipos variados
	CreateWalls(LocationInicial, true);
}

void ABuilderA::CreateWalls(FVector LocationInicial, bool UsarTiposVariados)
{
	int32 MazeWidth = MazeWalls.Num();
	if (MazeWidth == 0) return;

	int32 MazeHeight = MazeWalls[0].Num();
	float CellSize = TamanioMuro * 2.5f;

	for (int32 X = 0; X < MazeWidth; ++X)
	{
		for (int32 Y = 0; Y < MazeHeight; ++Y)
		{
			if (MazeWalls[X][Y])
			{
				// Muros verticales (derecha de la celda)
				FVector PosV = LocationInicial + FVector((X + 1) * CellSize, Y * CellSize, 0.0f);
				SpawnWall(PosV, true, UsarTiposVariados);

				// Muros horizontales (abajo de la celda)
				FVector PosH = LocationInicial + FVector(X * CellSize, (Y + 1) * CellSize, 0.0f);
				SpawnWall(PosH, false, UsarTiposVariados);
			}
		}
	}
}

void ABuilderA::SpawnWall(const FVector& Location, bool bVertical, bool UsarTiposVariados)
{
	if (!GetWorld()) return;

	TSubclassOf<AMuro> WallClass = AMuro::StaticClass();

	if (UsarTiposVariados)
	{
		// Usar FRandomStream para mejor aleatoriedad
		static FRandomStream RandomStreamWalls(FPlatformTime::Cycles() + 54321);
		int32 Type = RandomStreamWalls.RandRange(1, 4);

		if (Type == 1) WallClass = AMuro::StaticClass();
		else if (Type == 2) WallClass = AMuroMovible::StaticClass();
		else if (Type == 3) WallClass = AMuroTrampa::StaticClass();
		else WallClass = AMuroPiedra::StaticClass();
	}

	FRotator Rotation = bVertical ? FRotator(0.0f, 90.0f, 0.0f) : FRotator::ZeroRotator;
	AMuro* Wall = GetWorld()->SpawnActor<AMuro>(WallClass, Location, Rotation);
	if (Wall) Muros.Add(Wall);
}

AMuro* ABuilderA::SpawnMuro(TSubclassOf<AMuro> TipoMuro, FVector Posicion, bool EsVertical)
{
	if (!GetWorld())
	{
		return nullptr;
	}

	FRotator Rotacion = EsVertical ? FRotator(0.0f, 90.0f, 0.0f) : FRotator::ZeroRotator;
	AMuro* NuevoMuro = GetWorld()->SpawnActor<AMuro>(TipoMuro, Posicion, Rotacion);
	return NuevoMuro;
}

TArray<TSubclassOf<AMuro>> ABuilderA::ObtenerTodosTiposMuros()
{
	TArray<TSubclassOf<AMuro>> Tipos;
	Tipos.Add(AMuro::StaticClass());
	Tipos.Add(AMuroMovible::StaticClass());
	Tipos.Add(AMuroTrampa::StaticClass());
	Tipos.Add(AMuroPiedra::StaticClass());
	return Tipos;
}