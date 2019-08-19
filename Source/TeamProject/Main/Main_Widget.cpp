// Fill out your copyright notice in the Description page of Project Settings.


#include "Main_Widget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UMain_Widget::NativeConstruct()
{
	StartButton = Cast<UButton>(GetWidgetFromName(TEXT("Start")));
	if (StartButton)
	{
		StartButton->OnClicked.AddDynamic(this, &UMain_Widget::StartGame);
	}

	ExitButton = Cast<UButton>(GetWidgetFromName(TEXT("Exit")));
	if (ExitButton)
	{
		ExitButton->OnClicked.AddDynamic(this, &UMain_Widget::ExitGame);
	}
}

void UMain_Widget::StartGame()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("Proto")));
}

void UMain_Widget::ExitGame()
{
	GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");
}
