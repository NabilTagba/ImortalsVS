// Copyright Epic Games, Inc. All Rights Reserved.

#include "ImortalsGameMode.h"
#include "ImortalsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AImortalsGameMode::AImortalsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
