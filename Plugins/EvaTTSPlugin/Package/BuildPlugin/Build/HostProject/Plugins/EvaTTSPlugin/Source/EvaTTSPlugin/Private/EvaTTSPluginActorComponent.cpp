// Copyright 2018 Augmented Enterprise, Inc. All Rights Reserved.

#include "EvaTTSPluginActorComponent.h"


// Sets default values for this component's properties
UEvaTTSPluginActorComponent::UEvaTTSPluginActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEvaTTSPluginActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UEvaTTSPluginActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
