// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyProject1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT1_API AMyProject1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AMyProject1GameModeBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

};
