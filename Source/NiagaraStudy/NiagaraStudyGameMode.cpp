// Copyright Epic Games, Inc. All Rights Reserved.

#include "NiagaraStudyGameMode.h"
#include "NiagaraStudyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANiagaraStudyGameMode::ANiagaraStudyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
