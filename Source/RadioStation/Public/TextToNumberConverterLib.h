// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextToNumberConverterLib.generated.h"

/**
 * 
 */
UCLASS()
class RADIOSTATION_API UTextToNumberConverterLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Text Conversion")
	static TArray<int32> ConvertTextToNumbers(FString InputText);

private:
	static TMap<TCHAR, int32> CreateCharToNumberMap();
};
