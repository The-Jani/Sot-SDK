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

// Function BP_PromptActor_EmissaryEncounteredKraken_AF.BP_PromptActor_EmissaryEncounteredKraken_AF_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PromptActor_EmissaryEncounteredKraken_AF_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryEncounteredKraken_AF.BP_PromptActor_EmissaryEncounteredKraken_AF_C.UserConstructionScript");

	ABP_PromptActor_EmissaryEncounteredKraken_AF_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_EmissaryEncounteredKraken_AF.BP_PromptActor_EmissaryEncounteredKraken_AF_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_PromptActor_EmissaryEncounteredKraken_AF_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryEncounteredKraken_AF.BP_PromptActor_EmissaryEncounteredKraken_AF_C.ReceiveBeginPlay");

	ABP_PromptActor_EmissaryEncounteredKraken_AF_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_EmissaryEncounteredKraken_AF.BP_PromptActor_EmissaryEncounteredKraken_AF_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_EmissaryEncounteredKraken_AF_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryEncounteredKraken_AF.BP_PromptActor_EmissaryEncounteredKraken_AF_C.ReceiveEndPlay");

	ABP_PromptActor_EmissaryEncounteredKraken_AF_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_EmissaryEncounteredKraken_AF.BP_PromptActor_EmissaryEncounteredKraken_AF_C.ExecuteUbergraph_BP_PromptActor_EmissaryEncounteredKraken_AF
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_EmissaryEncounteredKraken_AF_C::ExecuteUbergraph_BP_PromptActor_EmissaryEncounteredKraken_AF(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryEncounteredKraken_AF.BP_PromptActor_EmissaryEncounteredKraken_AF_C.ExecuteUbergraph_BP_PromptActor_EmissaryEncounteredKraken_AF");

	ABP_PromptActor_EmissaryEncounteredKraken_AF_C_ExecuteUbergraph_BP_PromptActor_EmissaryEncounteredKraken_AF_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
