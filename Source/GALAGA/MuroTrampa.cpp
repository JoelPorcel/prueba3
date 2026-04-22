// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroTrampa.h"
#include "Components/BoxComponent.h"
#include "GALAGAPawn.h"

// Sets default values
AMuroTrampa::AMuroTrampa()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	box = CreateDefaultSubobject<UBoxComponent>(TEXT("MuroCollicion"));
	box->SetBoxExtent(FVector(105.0f, 50.0f, 50.0f));
	box->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f));
	box->OnComponentBeginOverlap.AddDynamic(this, &AMuroTrampa::OnOverlapBegin);
	box->SetupAttachment(Muro);

}

// Called when the game starts or when spawned
void AMuroTrampa::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMuroTrampa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMuroTrampa::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != nullptr && !OtherActor->IsA(AMuro::StaticClass()))
	{
		class AGALAGAPawn* player = Cast<AGALAGAPawn>(OtherActor);
		if(player)
		{
			player->vida -= 1;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Perdiste vida, te quedan: %d"), player->vida));
			if(player->vida <= 0)
			{
				GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, TEXT("Nave destruida, tenga buen dia :)"));
				player->Destroy();
			}
		}
	}
}

