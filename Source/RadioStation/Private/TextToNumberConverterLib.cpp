// Fill out your copyright notice in the Description page of Project Settings.


#include "TextToNumberConverterLib.h"

TMap<TCHAR, int32> UTextToNumberConverterLib::CreateCharToNumberMap()
{
	TMap<TCHAR, int32> CharToNumberMap;

	CharToNumberMap.Add(TEXT('A'), 10);
	CharToNumberMap.Add(TEXT('B'), 11);
	CharToNumberMap.Add(TEXT('C'), 12);
	CharToNumberMap.Add(TEXT('D'), 13);
	CharToNumberMap.Add(TEXT('E'), 14);
	CharToNumberMap.Add(TEXT('F'), 15);
	CharToNumberMap.Add(TEXT('G'), 16);
	CharToNumberMap.Add(TEXT('H'), 17);
	CharToNumberMap.Add(TEXT('I'), 18);
	CharToNumberMap.Add(TEXT('J'), 19);
	CharToNumberMap.Add(TEXT('K'), 20);
	CharToNumberMap.Add(TEXT('L'), 21);
	CharToNumberMap.Add(TEXT('M'), 22);
	CharToNumberMap.Add(TEXT('N'), 23);
	CharToNumberMap.Add(TEXT('O'), 24);
	CharToNumberMap.Add(TEXT('P'), 25);
	CharToNumberMap.Add(TEXT('Q'), 26);
	CharToNumberMap.Add(TEXT('R'), 27);
	CharToNumberMap.Add(TEXT('S'), 28);
	CharToNumberMap.Add(TEXT('T'), 29);
	CharToNumberMap.Add(TEXT('U'), 30);
	CharToNumberMap.Add(TEXT('V'), 31);
	CharToNumberMap.Add(TEXT('W'), 32);
	CharToNumberMap.Add(TEXT('X'), 33);
	CharToNumberMap.Add(TEXT('Y'), 34);
	CharToNumberMap.Add(TEXT('Z'), 35);
	CharToNumberMap.Add(TEXT(' '), 36);
	CharToNumberMap.Add(TEXT('.'), 38);
	CharToNumberMap.Add(TEXT(','), 39);
	CharToNumberMap.Add(TEXT('?'), 40);

	return CharToNumberMap;
}

TArray<int32> UTextToNumberConverterLib::ConvertTextToNumbers(FString InputText)
{
	TArray<int32> NumberArray;
	TMap<TCHAR, int32> CharToNumberMap = CreateCharToNumberMap();

	InputText = InputText.ToUpper();

	for (TCHAR Char : InputText)
	{
		if (CharToNumberMap.Contains(Char))
		{
			NumberArray.Add(CharToNumberMap[Char]);
		}
		else
		{
			NumberArray.Add(40);
		}
	}

	return NumberArray;
}

