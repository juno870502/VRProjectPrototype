// Fill out your copyright notice in the Description page of Project Settings.


#include "Main_PC.h"
#include "Main/Main_Widget.h"

void AMain_PC::BeginPlay()
{
	FStringClassReference TitleWidgetClassRef(TEXT("WidgetBlueprint'/Game/Unliny/Bluprints/Main/Main_Widget.Main_Widget_C'"));
	if (UClass* MyWidgetClass = TitleWidgetClassRef.TryLoadClass<UMain_Widget>())
	{
		MainWidget = Cast<UMain_Widget>(NewObject<UMain_Widget>(this, MyWidgetClass));

		MainWidget->AddToViewport();
	}

	bShowMouseCursor = true;
}
