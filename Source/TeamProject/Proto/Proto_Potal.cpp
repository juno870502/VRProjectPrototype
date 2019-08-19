// Fill out your copyright notice in the Description page of Project Settings.


#include "Proto_Potal.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AProto_Potal::AProto_Potal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	

}

// Called when the game starts or when spawned
void AProto_Potal::BeginPlay()
{
	Super::BeginPlay();
	Sphere->OnComponentBeginOverlap.AddDynamic(this, &AProto_Potal::OnBeginOverlap);
	
}

// Called every frame
void AProto_Potal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProto_Potal::OnBeginOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor->ActorHasTag(TEXT("Player")))
	{
		//ABattleCharacter* Pawn = Cast<ABattleCharacter>(OtherActor);
		//if (Pawn)
		//{
			UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("Main")));
		//}
	}
}

