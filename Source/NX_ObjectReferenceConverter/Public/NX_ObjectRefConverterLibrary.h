// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "NX_ObjectRefConverterLibrary.generated.h"

UCLASS()
class NX_OBJECTREFERENCECONVERTER_API UObjectReferenceConverterLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:	
	UFUNCTION(BlueprintCallable, Category = "ObjectReferenceConverter")
	static int64 ObjectToInt(UObject* Object);

	UFUNCTION(BlueprintCallable, Category = "ObjectReferenceConverter")
	static UObject* IntToObject(int64 ObjectID);

};
