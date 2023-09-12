// Copyright Epic Games, Inc. All Rights Reserved.

#include "demo_1GameMode.h"
#include "demo_1Character.h"
#include "UObject/ConstructorHelpers.h"

Ademo_1GameMode::Ademo_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
