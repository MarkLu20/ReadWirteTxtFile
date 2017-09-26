// Fill out your copyright notice in the Description page of Project Settings.
#include "RWTxtFile.h"
#include "ReadWriteTextFile.h"
#include "Runtime/Core/Public/Misc//FileHelper.h"
#include "Runtime/Core/Public/Misc/Paths.h"

bool URWTxtFile::LoadTxt(FString FileNameA, FString &SaveTxtA)
{
	return FFileHelper::LoadFileToString(SaveTxtA,*(FPaths::GameDir()+FileNameA));
}
bool URWTxtFile::SaveTxt(FString SaveTxtB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTxtB,*(FPaths::GameDir()+FileNameB));
}
