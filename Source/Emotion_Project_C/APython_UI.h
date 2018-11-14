// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "APython_UI.generated.h"

/**
 * 
 */
UCLASS()
class EMOTION_PROJECT_C_API UAPython_UI : public UUserWidget
{
	GENERATED_BODY()
	
	public:
		UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Transient, Category = "Python")
		FText DisplayText;
};
