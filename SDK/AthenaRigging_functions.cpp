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

// Function AthenaRigging.InstancedRopeComponent.SetUnderwater
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Underwater                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInstancedRopeComponent::SetUnderwater(bool Underwater)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaRigging.InstancedRopeComponent.SetUnderwater");

	UInstancedRopeComponent_SetUnderwater_Params params;
	params.Underwater = Underwater;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaRigging.InstancedRopeComponent.SetRopes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FInstancedRopeParams> InRopes                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UInstancedRopeComponent::SetRopes(TArray<struct FInstancedRopeParams> InRopes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaRigging.InstancedRopeComponent.SetRopes");

	UInstancedRopeComponent_SetRopes_Params params;
	params.InRopes = InRopes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaRigging.RiggingSystemComponent.SetSocketLookupSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InSocketSource                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URiggingSystemComponent::SetSocketLookupSource(class AActor* InSocketSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaRigging.RiggingSystemComponent.SetSocketLookupSource");

	URiggingSystemComponent_SetSocketLookupSource_Params params;
	params.InSocketSource = InSocketSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaRigging.RiggingSystemComponent.ConvertLineToRopeIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InLineGroupName                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InLineOffset                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int URiggingSystemComponent::ConvertLineToRopeIndex(const struct FName& InLineGroupName, int InLineOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaRigging.RiggingSystemComponent.ConvertLineToRopeIndex");

	URiggingSystemComponent_ConvertLineToRopeIndex_Params params;
	params.InLineGroupName = InLineGroupName;
	params.InLineOffset = InLineOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaRigging.RopeInterface.SetRopeUVOffset
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InUVOffset                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URopeInterface::SetRopeUVOffset(float InUVOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaRigging.RopeInterface.SetRopeUVOffset");

	URopeInterface_SetRopeUVOffset_Params params;
	params.InUVOffset = InUVOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaRigging.RopeInterface.SetRopeEndpoints
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InWorldSpaceStart              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 InWorldSpaceEnd                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URopeInterface::SetRopeEndpoints(const struct FVector& InWorldSpaceStart, const struct FVector& InWorldSpaceEnd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaRigging.RopeInterface.SetRopeEndpoints");

	URopeInterface_SetRopeEndpoints_Params params;
	params.InWorldSpaceStart = InWorldSpaceStart;
	params.InWorldSpaceEnd = InWorldSpaceEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
