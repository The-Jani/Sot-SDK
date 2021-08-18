// Name: S, Version: 2.2.1

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

// Function WwiseAudio.WwiseEvent.IsAudible
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 SoundPosition                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 ListenerPos                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          AttenuationScaler              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWwiseEvent::IsAudible(const struct FVector& SoundPosition, const struct FVector& ListenerPos, float AttenuationScaler)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.IsAudible");

	UWwiseEvent_IsAudible_Params params;
	params.SoundPosition = SoundPosition;
	params.ListenerPos = ListenerPos;
	params.AttenuationScaler = AttenuationScaler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WwiseAudio.WwiseEvent.GetMaxAttenuation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWwiseEvent::GetMaxAttenuation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.GetMaxAttenuation");

	UWwiseEvent_GetMaxAttenuation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WwiseAudio.WwiseEvent.GetDurationType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<WwiseAudio_EWwiseEventDurationType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<WwiseAudio_EWwiseEventDurationType> UWwiseEvent::GetDurationType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.GetDurationType");

	UWwiseEvent_GetDurationType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WwiseAudio.WwiseEvent.GetDurationMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWwiseEvent::GetDurationMin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.GetDurationMin");

	UWwiseEvent_GetDurationMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WwiseAudio.WwiseEvent.GetDurationMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWwiseEvent::GetDurationMax()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.GetDurationMax");

	UWwiseEvent_GetDurationMax_Params params;

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
