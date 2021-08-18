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

// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.OnEmissaryEncounteredKraken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryEncounteredKrakenEvent NewParam                       (Parm)
void UBP_Prompt_EmissaryEncounteredKraken_C::OnEmissaryEncounteredKraken(const struct FEmissaryEncounteredKrakenEvent& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.OnEmissaryEncounteredKraken");

	UBP_Prompt_EmissaryEncounteredKraken_C_OnEmissaryEncounteredKraken_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.EmissaryEncounteredKraken
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryEncounteredKrakenEvent NewParam                       (Parm)
void UBP_Prompt_EmissaryEncounteredKraken_C::EmissaryEncounteredKraken(const struct FEmissaryEncounteredKrakenEvent& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.EmissaryEncounteredKraken");

	UBP_Prompt_EmissaryEncounteredKraken_C_EmissaryEncounteredKraken_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_EmissaryEncounteredKraken_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.Evaluate");

	UBP_Prompt_EmissaryEncounteredKraken_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryEncounteredKraken_C::RegisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryEncounteredKraken_C_RegisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryEncounteredKraken_C::UnregisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryEncounteredKraken_C_UnregisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredKraken
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_EmissaryEncounteredKraken_C::ExecuteUbergraph_BP_Prompt_EmissaryEncounteredKraken(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredKraken");

	UBP_Prompt_EmissaryEncounteredKraken_C_ExecuteUbergraph_BP_Prompt_EmissaryEncounteredKraken_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
