// Fill out your copyright notice in the Description page of Project Settings.


#include "Proto_Cloud.h"
#include "GameFramework/ProjectileMovementComponent.h"
// Sets default values
AProto_Cloud::AProto_Cloud()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RotateSpeed = 30.0f;

}

// Called when the game starts or when spawned
void AProto_Cloud::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProto_Cloud::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

