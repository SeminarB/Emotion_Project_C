// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PythonCall.generated.h"

/**
 * 
 */
UCLASS()
class EMOTION_PROJECT_C_API UPythonCall : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
		UFUNCTION(BlueprintCallable, Category = "MyBPLibrary")
		static FString HelloWorld();
	
	
};
