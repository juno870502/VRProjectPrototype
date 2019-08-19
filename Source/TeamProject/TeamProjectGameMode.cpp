// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TeamProjectGameMode.h"
#include "TeamProjectHUD.h"
#include "TeamProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATeamProjectGameMode::ATeamProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATeamProjectHUD::StaticClass();
}
