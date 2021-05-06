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

// Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.OnEmissaryEncounteredSkellyFort
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryEncounteredSkellyFortNetworkEvent NewParam                       (Parm)
void UBP_Prompt_EmissaryEncounteredSkellyFort_C::OnEmissaryEncounteredSkellyFort(const struct FEmissaryEncounteredSkellyFortNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.OnEmissaryEncounteredSkellyFort");

	UBP_Prompt_EmissaryEncounteredSkellyFort_C_OnEmissaryEncounteredSkellyFort_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.EmissaryEncounteredSkellyFort
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryEncounteredSkellyFortNetworkEvent NewParam                       (Parm)
void UBP_Prompt_EmissaryEncounteredSkellyFort_C::EmissaryEncounteredSkellyFort(const struct FEmissaryEncounteredSkellyFortNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.EmissaryEncounteredSkellyFort");

	UBP_Prompt_EmissaryEncounteredSkellyFort_C_EmissaryEncounteredSkellyFort_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_EmissaryEncounteredSkellyFort_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.Evaluate");

	UBP_Prompt_EmissaryEncounteredSkellyFort_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryEncounteredSkellyFort_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryEncounteredSkellyFort_C_RegisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryEncounteredSkellyFort_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryEncounteredSkellyFort_C_UnregisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredSkellyFort
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_EmissaryEncounteredSkellyFort_C::ExecuteUbergraph_BP_Prompt_EmissaryEncounteredSkellyFort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredSkellyFort");

	UBP_Prompt_EmissaryEncounteredSkellyFort_C_ExecuteUbergraph_BP_Prompt_EmissaryEncounteredSkellyFort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
