// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RWTxtFile.generated.h"

/**
 * 
 */
UCLASS()
class READWRITETEXTFILE_API URWTxtFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public :
	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keyword = "SaveTxt"))
		static bool SaveTxt(FString SaveTxtB,FString FileNameB);
	UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "LoadTxt"))
		static bool LoadTxt(FString FileNameA, FString &SaveTxtA);
	
	
};
