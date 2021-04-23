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

// Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.OnEmissaryKilledAnotherEmissary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryKilledAnotherEmissaryNetworkEvent NewParam                       (Parm)
void UBP_Prompt_EmissaryKilledAnotherEmissary_C::OnEmissaryKilledAnotherEmissary(const struct FEmissaryKilledAnotherEmissaryNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.OnEmissaryKilledAnotherEmissary");

	UBP_Prompt_EmissaryKilledAnotherEmissary_C_OnEmissaryKilledAnotherEmissary_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.EmissaryKilledAnotherEmisary
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryKilledAnotherEmissaryNetworkEvent NewParam                       (Parm)
void UBP_Prompt_EmissaryKilledAnotherEmissary_C::EmissaryKilledAnotherEmisary(const struct FEmissaryKilledAnotherEmissaryNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.EmissaryKilledAnotherEmisary");

	UBP_Prompt_EmissaryKilledAnotherEmissary_C_EmissaryKilledAnotherEmisary_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_EmissaryKilledAnotherEmissary_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.Evaluate");

	UBP_Prompt_EmissaryKilledAnotherEmissary_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryKilledAnotherEmissary_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryKilledAnotherEmissary_C_RegisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryKilledAnotherEmissary_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryKilledAnotherEmissary_C_UnregisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.ExecuteUbergraph_BP_Prompt_EmissaryKilledAnotherEmissary
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_EmissaryKilledAnotherEmissary_C::ExecuteUbergraph_BP_Prompt_EmissaryKilledAnotherEmissary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.ExecuteUbergraph_BP_Prompt_EmissaryKilledAnotherEmissary");

	UBP_Prompt_EmissaryKilledAnotherEmissary_C_ExecuteUbergraph_BP_Prompt_EmissaryKilledAnotherEmissary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
