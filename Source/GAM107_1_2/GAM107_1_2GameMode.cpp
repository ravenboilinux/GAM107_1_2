// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GAM107_1_2GameMode.h"
#include "GAM107_1_2Character.h"
#include "UObject/ConstructorHelpers.h"

AGAM107_1_2GameMode::AGAM107_1_2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
