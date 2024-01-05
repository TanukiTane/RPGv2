// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "RPGv2Character.generated.h"


UCLASS(config=Game)
class ARPGv2Character : public ACharacter
{
	GENERATED_BODY()	
public:
	ARPGv2Character();			

protected:
		
	// To add mapping context
	virtual void BeginPlay();
};

