//NX_ObjectReferenceConverter
//Copyright (C) 2025 Nyaunix

#include "NX_ObjectRefConverterLibrary.h"

int64 UObjectReferenceConverterLibrary::ObjectToInt(UObject* Object)
{
	return reinterpret_cast<int64>(Object);
}

UObject* UObjectReferenceConverterLibrary::IntToObject(int64 ObjectID)
{
	return reinterpret_cast<UObject*>(ObjectID);
}
