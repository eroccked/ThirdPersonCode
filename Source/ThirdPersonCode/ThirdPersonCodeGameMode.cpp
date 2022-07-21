// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPersonCodeGameMode.h"
#include "ThirdPersonCodeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThirdPersonCodeGameMode::AThirdPersonCodeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
