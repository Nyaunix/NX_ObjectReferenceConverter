// Fill out your copyright notice in the Description page of Project Settings.


#include "NX_ObjectRefConverterLibrary.h"

int64 UObjectReferenceConverterLibrary::ObjectToInt(UObject* Object)
{
	return reinterpret_cast<int64>(Object);
}

UObject* UObjectReferenceConverterLibrary::IntToObject(int64 ObjectID)
{
	return reinterpret_cast<UObject*>(ObjectID);
}
