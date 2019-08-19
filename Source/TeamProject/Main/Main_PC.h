// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Main_PC.generated.h"

/**
 * 
 */
UCLASS()
class TEAMPROJECT_API AMain_PC : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;

	class UMain_Widget* MainWidget;
	
};
