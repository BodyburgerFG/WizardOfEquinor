// Copyright Epic Games, Inc. All Rights Reserved.

#include "WizardOfEquinorGameMode.h"
#include "WizardOfEquinorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWizardOfEquinorGameMode::AWizardOfEquinorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
