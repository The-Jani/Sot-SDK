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

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.IsLocalPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CoralFortress_WeatherZone_C::IsLocalPlayer(class AActor* Actor, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.IsLocalPlayer");

	ABP_CoralFortress_WeatherZone_C_IsLocalPlayer_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.OnRep_Opacity
// (BlueprintCallable, BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::OnRep_Opacity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.OnRep_Opacity");

	ABP_CoralFortress_WeatherZone_C_OnRep_Opacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.CreateDynamicMaterialAtSlot0
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Primitive                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic* Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CoralFortress_WeatherZone_C::CreateDynamicMaterialAtSlot0(class UPrimitiveComponent* Primitive, class UMaterialInstanceDynamic** Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.CreateDynamicMaterialAtSlot0");

	ABP_CoralFortress_WeatherZone_C_CreateDynamicMaterialAtSlot0_Params params;
	params.Primitive = Primitive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.UserConstructionScript");

	ABP_CoralFortress_WeatherZone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__FinishedFunc
// (BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::RainBlend__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__FinishedFunc");

	ABP_CoralFortress_WeatherZone_C_RainBlend__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__UpdateFunc
// (BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::RainBlend__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__UpdateFunc");

	ABP_CoralFortress_WeatherZone_C_RainBlend__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveBeginPlay");

	ABP_CoralFortress_WeatherZone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StartRainBlend
// (BlueprintCallable, BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::StartRainBlend()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StartRainBlend");

	ABP_CoralFortress_WeatherZone_C_StartRainBlend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CoralFortress_WeatherZone_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveEndPlay");

	ABP_CoralFortress_WeatherZone_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StopRainBlend
// (BlueprintCallable, BlueprintEvent)
void ABP_CoralFortress_WeatherZone_C::StopRainBlend()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StopRainBlend");

	ABP_CoralFortress_WeatherZone_C_StopRainBlend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_438_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)
void ABP_CoralFortress_WeatherZone_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_438_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_438_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_CoralFortress_WeatherZone_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_438_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_441_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CoralFortress_WeatherZone_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_441_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_441_ComponentEndOverlapSignature__DelegateSignature");

	ABP_CoralFortress_WeatherZone_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_441_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ExecuteUbergraph_BP_CoralFortress_WeatherZone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CoralFortress_WeatherZone_C::ExecuteUbergraph_BP_CoralFortress_WeatherZone(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ExecuteUbergraph_BP_CoralFortress_WeatherZone");

	ABP_CoralFortress_WeatherZone_C_ExecuteUbergraph_BP_CoralFortress_WeatherZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
