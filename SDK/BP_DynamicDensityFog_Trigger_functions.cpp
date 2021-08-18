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

// Function BP_DynamicDensityFog_Trigger.BP_DynamicDensityFog_Trigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_DynamicDensityFog_Trigger_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFog_Trigger.BP_DynamicDensityFog_Trigger_C.UserConstructionScript");

	ABP_DynamicDensityFog_Trigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DynamicDensityFog_Trigger.BP_DynamicDensityFog_Trigger_C.BndEvt__DynamicTrigger_K2Node_ComponentBoundEvent_136_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)
void ABP_DynamicDensityFog_Trigger_C::BndEvt__DynamicTrigger_K2Node_ComponentBoundEvent_136_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFog_Trigger.BP_DynamicDensityFog_Trigger_C.BndEvt__DynamicTrigger_K2Node_ComponentBoundEvent_136_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_DynamicDensityFog_Trigger_C_BndEvt__DynamicTrigger_K2Node_ComponentBoundEvent_136_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DynamicDensityFog_Trigger.BP_DynamicDensityFog_Trigger_C.BndEvt__DynamicTrigger_K2Node_ComponentBoundEvent_181_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DynamicDensityFog_Trigger_C::BndEvt__DynamicTrigger_K2Node_ComponentBoundEvent_181_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFog_Trigger.BP_DynamicDensityFog_Trigger_C.BndEvt__DynamicTrigger_K2Node_ComponentBoundEvent_181_ComponentEndOverlapSignature__DelegateSignature");

	ABP_DynamicDensityFog_Trigger_C_BndEvt__DynamicTrigger_K2Node_ComponentBoundEvent_181_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DynamicDensityFog_Trigger.BP_DynamicDensityFog_Trigger_C.ExecuteUbergraph_BP_DynamicDensityFog_Trigger
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DynamicDensityFog_Trigger_C::ExecuteUbergraph_BP_DynamicDensityFog_Trigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFog_Trigger.BP_DynamicDensityFog_Trigger_C.ExecuteUbergraph_BP_DynamicDensityFog_Trigger");

	ABP_DynamicDensityFog_Trigger_C_ExecuteUbergraph_BP_DynamicDensityFog_Trigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
