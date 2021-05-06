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

// Function BP_PromptActor_Rowboat.BP_PromptActor_Rowboat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PromptActor_Rowboat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptActor_Rowboat.BP_PromptActor_Rowboat_C.UserConstructionScript");

	ABP_PromptActor_Rowboat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_Rowboat.BP_PromptActor_Rowboat_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_PromptActor_Rowboat_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptActor_Rowboat.BP_PromptActor_Rowboat_C.ReceiveBeginPlay");

	ABP_PromptActor_Rowboat_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_Rowboat.BP_PromptActor_Rowboat_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_Rowboat_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptActor_Rowboat.BP_PromptActor_Rowboat_C.ReceiveEndPlay");

	ABP_PromptActor_Rowboat_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_Rowboat.BP_PromptActor_Rowboat_C.ExecuteUbergraph_BP_PromptActor_Rowboat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_Rowboat_C::ExecuteUbergraph_BP_PromptActor_Rowboat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PromptActor_Rowboat.BP_PromptActor_Rowboat_C.ExecuteUbergraph_BP_PromptActor_Rowboat");

	ABP_PromptActor_Rowboat_C_ExecuteUbergraph_BP_PromptActor_Rowboat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
