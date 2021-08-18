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

// Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.On Crew Entered Radius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCrewEnteredTunnelOfTheDamnedPortalProximityEvent Event                          (Parm)
void UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C::On_Crew_Entered_Radius(const struct FCrewEnteredTunnelOfTheDamnedPortalProximityEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.On Crew Entered Radius");

	UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C_On_Crew_Entered_Radius_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.Evaluate");

	UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C::RegisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C_RegisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C::UnregisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C_UnregisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.Crew Entered Tunnel of The Damned Portal Proximity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCrewEnteredTunnelOfTheDamnedPortalProximityEvent Event                          (Parm)
void UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C::Crew_Entered_Tunnel_of_The_Damned_Portal_Proximity(const struct FCrewEnteredTunnelOfTheDamnedPortalProximityEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.Crew Entered Tunnel of The Damned Portal Proximity");

	UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C_Crew_Entered_Tunnel_of_The_Damned_Portal_Proximity_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.ExecuteUbergraph_BP_Prompt_TunnelOfTheDamned_BootyWillBeLost
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C::ExecuteUbergraph_BP_Prompt_TunnelOfTheDamned_BootyWillBeLost(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.ExecuteUbergraph_BP_Prompt_TunnelOfTheDamned_BootyWillBeLost");

	UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C_ExecuteUbergraph_BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
