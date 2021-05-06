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

// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.OnEmissaryEncounteredAIShip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryEncounteredAIShipEvent NewParam                       (Parm)
void UBP_Prompt_EmissaryEncounteredAIShip_C::OnEmissaryEncounteredAIShip(const struct FEmissaryEncounteredAIShipEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.OnEmissaryEncounteredAIShip");

	UBP_Prompt_EmissaryEncounteredAIShip_C_OnEmissaryEncounteredAIShip_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.EmissaryEncounteredAIShip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryEncounteredAIShipEvent NewParam                       (Parm)
void UBP_Prompt_EmissaryEncounteredAIShip_C::EmissaryEncounteredAIShip(const struct FEmissaryEncounteredAIShipEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.EmissaryEncounteredAIShip");

	UBP_Prompt_EmissaryEncounteredAIShip_C_EmissaryEncounteredAIShip_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_EmissaryEncounteredAIShip_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.Evaluate");

	UBP_Prompt_EmissaryEncounteredAIShip_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryEncounteredAIShip_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryEncounteredAIShip_C_RegisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryEncounteredAIShip_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryEncounteredAIShip_C_UnregisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredAIShip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_EmissaryEncounteredAIShip_C::ExecuteUbergraph_BP_Prompt_EmissaryEncounteredAIShip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredAIShip");

	UBP_Prompt_EmissaryEncounteredAIShip_C_ExecuteUbergraph_BP_Prompt_EmissaryEncounteredAIShip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
