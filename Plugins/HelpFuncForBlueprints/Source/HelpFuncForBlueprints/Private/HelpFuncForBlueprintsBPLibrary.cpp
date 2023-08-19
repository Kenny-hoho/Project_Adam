// Copyright Epic Games, Inc. All Rights Reserved.

#include "HelpFuncForBlueprintsBPLibrary.h"
#include "HelpFuncForBlueprints.h"

UHelpFuncForBlueprintsBPLibrary::UHelpFuncForBlueprintsBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UHelpFuncForBlueprintsBPLibrary::HelpFuncForBlueprintsSampleFunction(float Param)
{
	return -1;
}

auto UHelpFuncForBlueprintsBPLibrary::Sign2Bool(float x) -> bool {
	return ((x > 0) - (x < 0)) == 1 ? true : false;
}