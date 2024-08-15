// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestTask_MultiplayerGameMode.h"
#include "TestTask_MultiplayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestTask_MultiplayerGameMode::ATestTask_MultiplayerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
