// Name: SoT, Version: 2.1.1

#include "../SDK.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.UStructToJsonObjectString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGenericStruct          Struct                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FString                 OutJsonString                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UJsonUtilitiesBlueprintHelperLibrary::STATIC_UStructToJsonObjectString(const struct FGenericStruct& Struct, struct FString* OutJsonString)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.UStructToJsonObjectString");

	UJsonUtilitiesBlueprintHelperLibrary_UStructToJsonObjectString_Params params;
	params.Struct = Struct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutJsonString != nullptr)
		*OutJsonString = params.OutJsonString;


	return params.ReturnValue;
}


// Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.JsonObjectStringToUStruct
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 InJsonString                   (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FGenericStruct          Struct                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UJsonUtilitiesBlueprintHelperLibrary::STATIC_JsonObjectStringToUStruct(const struct FString& InJsonString, const struct FGenericStruct& Struct)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.JsonObjectStringToUStruct");

	UJsonUtilitiesBlueprintHelperLibrary_JsonObjectStringToUStruct_Params params;
	params.InJsonString = InJsonString;
	params.Struct = Struct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
