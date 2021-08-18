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

// Function BP_Castaway.BP_Castaway_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Castaway_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Castaway.BP_Castaway_C.UserConstructionScript");

	ABP_Castaway_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Castaway.BP_Castaway_C.TriggerAudioEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWwiseEvent*             AudioEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Castaway_C::TriggerAudioEvent(class UWwiseEvent* AudioEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Castaway.BP_Castaway_C.TriggerAudioEvent");

	ABP_Castaway_C_TriggerAudioEvent_Params params;
	params.AudioEvent = AudioEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Castaway.BP_Castaway_C.StopCurrentAudioEvent
// (Event, Public, BlueprintEvent)
void ABP_Castaway_C::StopCurrentAudioEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Castaway.BP_Castaway_C.StopCurrentAudioEvent");

	ABP_Castaway_C_StopCurrentAudioEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Castaway.BP_Castaway_C.Multicast_TriggerAudioEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EventIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Castaway_C::Multicast_TriggerAudioEvent(int EventIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Castaway.BP_Castaway_C.Multicast_TriggerAudioEvent");

	ABP_Castaway_C_Multicast_TriggerAudioEvent_Params params;
	params.EventIdx = EventIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Castaway.BP_Castaway_C.ResetVisibility
// (Event, Public, BlueprintEvent)
void ABP_Castaway_C::ResetVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Castaway.BP_Castaway_C.ResetVisibility");

	ABP_Castaway_C_ResetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Castaway.BP_Castaway_C.ExecuteUbergraph_BP_Castaway
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Castaway_C::ExecuteUbergraph_BP_Castaway(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Castaway.BP_Castaway_C.ExecuteUbergraph_BP_Castaway");

	ABP_Castaway_C_ExecuteUbergraph_BP_Castaway_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
