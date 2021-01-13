// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableDoor.h"
#include "DoorInteractor.h"

AInteractableDoor::AInteractableDoor()
{
	DoorInteractor = CreateDefaultSubobject<UDoorInteractor>(TEXT("DoorInteracor"));
}