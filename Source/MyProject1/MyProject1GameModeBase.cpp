// Copyright Epic Games, Inc. All Rights Reserved.


#include "MyProject1GameModeBase.h"
#include "Engine/Engine.h"

AMyProject1GameModeBase::AMyProject1GameModeBase(){
}

void MyProject1GameModeBase::BeginPlay(){
    super::BeginPlay();
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Hello World, this is MyProject1GameModeBase!"));
}

void MyProject1GameModeBase::Tick(float DeltaTime){
    super::Tick(DeltaTime);
}



