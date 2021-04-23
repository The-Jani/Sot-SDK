// Name: SoT, Version: 2.1.0.1

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

// Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.OnEmissaryDiscoveredCargoRunCrate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryDiscoveredCargoRunCrateNetworkEvent NewParam                       (Parm)
void UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C::OnEmissaryDiscoveredCargoRunCrate(const struct FEmissaryDiscoveredCargoRunCrateNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.OnEmissaryDiscoveredCargoRunCrate");

	UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C_OnEmissaryDiscoveredCargoRunCrate_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.EmissaryDiscoveredCargoRunCrate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryDiscoveredCargoRunCrateNetworkEvent NewParam                       (Parm)
void UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C::EmissaryDiscoveredCargoRunCrate(const struct FEmissaryDiscoveredCargoRunCrateNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.EmissaryDiscoveredCargoRunCrate");

	UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C_EmissaryDiscoveredCargoRunCrate_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.Evaluate");

	UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C_RegisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C_UnregisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.ExecuteUbergraph_BP_Prompt_EmissaryDiscoveredCargoRunCrate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C::ExecuteUbergraph_BP_Prompt_EmissaryDiscoveredCargoRunCrate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.ExecuteUbergraph_BP_Prompt_EmissaryDiscoveredCargoRunCrate");

	UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C_ExecuteUbergraph_BP_Prompt_EmissaryDiscoveredCargoRunCrate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
