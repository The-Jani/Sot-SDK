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

// Function BP_StepsTrigger.BP_StepsTrigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_StepsTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepsTrigger.BP_StepsTrigger_C.UserConstructionScript");

	ABP_StepsTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StepsTrigger.BP_StepsTrigger_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_StepsTrigger_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepsTrigger.BP_StepsTrigger_C.ReceiveBeginPlay");

	ABP_StepsTrigger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StepsTrigger.BP_StepsTrigger_C.ExecuteUbergraph_BP_StepsTrigger
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_StepsTrigger_C::ExecuteUbergraph_BP_StepsTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepsTrigger.BP_StepsTrigger_C.ExecuteUbergraph_BP_StepsTrigger");

	ABP_StepsTrigger_C_ExecuteUbergraph_BP_StepsTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
