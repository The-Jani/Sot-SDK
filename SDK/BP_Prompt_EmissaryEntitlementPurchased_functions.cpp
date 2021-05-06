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

// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.OnEmissaryEntitlementPurchasedFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryEntitlementPurchasedEvent NewParam                       (Parm)
void UBP_Prompt_EmissaryEntitlementPurchased_C::OnEmissaryEntitlementPurchasedFunc(const struct FEmissaryEntitlementPurchasedEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.OnEmissaryEntitlementPurchasedFunc");

	UBP_Prompt_EmissaryEntitlementPurchased_C_OnEmissaryEntitlementPurchasedFunc_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.EmissaryEntitlementPurchased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryEntitlementPurchasedEvent NewParam                       (Parm)
void UBP_Prompt_EmissaryEntitlementPurchased_C::EmissaryEntitlementPurchased(const struct FEmissaryEntitlementPurchasedEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.EmissaryEntitlementPurchased");

	UBP_Prompt_EmissaryEntitlementPurchased_C_EmissaryEntitlementPurchased_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_EmissaryEntitlementPurchased_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.Evaluate");

	UBP_Prompt_EmissaryEntitlementPurchased_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryEntitlementPurchased_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryEntitlementPurchased_C_RegisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryEntitlementPurchased_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryEntitlementPurchased_C_UnregisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_EmissaryEntitlementPurchased_C::ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased");

	UBP_Prompt_EmissaryEntitlementPurchased_C_ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
