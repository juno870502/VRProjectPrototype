// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Main_Widget.generated.h"

/**
 * 
 */
UCLASS()
class TEAMPROJECT_API UMain_Widget : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UButton* StartButton;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UButton* ExitButton;
	UFUNCTION()
		void StartGame();

	UFUNCTION()
		void ExitGame();
};
