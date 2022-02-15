// Copyright Epic Games, Inc. All Rights Reserved.

#include "AIKythera_ShowcaseGameMode.h"
#include "AIKythera_ShowcaseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAIKythera_ShowcaseGameMode::AAIKythera_ShowcaseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
