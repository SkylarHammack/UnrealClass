// Fill out your copyright notice in the Description page of Project Settings.


#include "AbstractionGameModeBase.h"
#include "ObjectiveWorldSubsystem.h"

void AAbstractionGameModeBase::StartPlay()
{
	Super::StartPlay();
	UObjectiveWorldSubsystem* ObjectiveWorldSubsystem = GetWorld()->GetSubsystem<UObjectiveWorldSubsystem>();
	if (ObjectiveWorldSubsystem)
	{
		ObjectiveWorldSubsystem->CreateObjectiveWidget(ObjectiveWidgetClass);
		ObjectiveWorldSubsystem->DisplayObjectiveWidget();
	}
	
}
