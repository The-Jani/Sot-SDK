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

// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.OnEmissarySecuredLootOnShip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissarySecuredLootOnShipNetworkEvent NewParam                       (Parm)
void UBP_Prompt_EmissarySecuredLootOnShip_C::OnEmissarySecuredLootOnShip(const struct FEmissarySecuredLootOnShipNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.OnEmissarySecuredLootOnShip");

	UBP_Prompt_EmissarySecuredLootOnShip_C_OnEmissarySecuredLootOnShip_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.EmissarySecuredLootOnShip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissarySecuredLootOnShipNetworkEvent NewParam                       (Parm)
void UBP_Prompt_EmissarySecuredLootOnShip_C::EmissarySecuredLootOnShip(const struct FEmissarySecuredLootOnShipNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.EmissarySecuredLootOnShip");

	UBP_Prompt_EmissarySecuredLootOnShip_C_EmissarySecuredLootOnShip_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_EmissarySecuredLootOnShip_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.Evaluate");

	UBP_Prompt_EmissarySecuredLootOnShip_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissarySecuredLootOnShip_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_EmissarySecuredLootOnShip_C_RegisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissarySecuredLootOnShip_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_EmissarySecuredLootOnShip_C_UnregisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_EmissarySecuredLootOnShip_C::ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip");

	UBP_Prompt_EmissarySecuredLootOnShip_C_ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
