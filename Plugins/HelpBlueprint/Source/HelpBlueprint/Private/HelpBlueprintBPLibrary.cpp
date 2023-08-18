// Copyright Epic Games, Inc. All Rights Reserved.

#include "HelpBlueprintBPLibrary.h"
#include "HelpBlueprint.h"

UHelpBlueprintBPLibrary::UHelpBlueprintBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UHelpBlueprintBPLibrary::HelpBlueprintSampleFunction(float Param)
{
	return -1;
}

auto UHelpBlueprintBPLibrary::Sign(float x) -> bool {
	return ((x > 0) - (x < 0) >= 0) ? true : false;
}
