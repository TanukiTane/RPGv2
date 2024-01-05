// Copyright Epic Games, Inc. All Rights Reserved.

#include "RPGv2GameMode.h"
#include "RPGv2Character.h"
#include "UObject/ConstructorHelpers.h"

ARPGv2GameMode::ARPGv2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
