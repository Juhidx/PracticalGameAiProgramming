// Copyright Epic Games, Inc. All Rights Reserved.

#include "PGAPGameMode.h"
#include "PGAPCharacter.h"
#include "UObject/ConstructorHelpers.h"

APGAPGameMode::APGAPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
