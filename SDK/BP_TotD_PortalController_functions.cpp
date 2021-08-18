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

// Function BP_TotD_PortalController.BP_TotD_PortalController_C.SetParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PortalOpen                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          LightScale                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          CrackVisibility                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          PortalSwirlVisibility          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          CloudVisibility                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TotD_PortalController_C::SetParameters(float PortalOpen, float LightScale, float CrackVisibility, float PortalSwirlVisibility, float CloudVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TotD_PortalController.BP_TotD_PortalController_C.SetParameters");

	ABP_TotD_PortalController_C_SetParameters_Params params;
	params.PortalOpen = PortalOpen;
	params.LightScale = LightScale;
	params.CrackVisibility = CrackVisibility;
	params.PortalSwirlVisibility = PortalSwirlVisibility;
	params.CloudVisibility = CloudVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TotD_PortalController.BP_TotD_PortalController_C.SetPortalPositionAndOrientation
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TotD_PortalController_C::SetPortalPositionAndOrientation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TotD_PortalController.BP_TotD_PortalController_C.SetPortalPositionAndOrientation");

	ABP_TotD_PortalController_C_SetPortalPositionAndOrientation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TotD_PortalController.BP_TotD_PortalController_C.CollectMaterialsAndLights
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TotD_PortalController_C::CollectMaterialsAndLights()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TotD_PortalController.BP_TotD_PortalController_C.CollectMaterialsAndLights");

	ABP_TotD_PortalController_C_CollectMaterialsAndLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TotD_PortalController.BP_TotD_PortalController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TotD_PortalController_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TotD_PortalController.BP_TotD_PortalController_C.UserConstructionScript");

	ABP_TotD_PortalController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TotD_PortalController.BP_TotD_PortalController_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ABP_TotD_PortalController_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TotD_PortalController.BP_TotD_PortalController_C.Timeline_0__FinishedFunc");

	ABP_TotD_PortalController_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TotD_PortalController.BP_TotD_PortalController_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ABP_TotD_PortalController_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TotD_PortalController.BP_TotD_PortalController_C.Timeline_0__UpdateFunc");

	ABP_TotD_PortalController_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TotD_PortalController.BP_TotD_PortalController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_TotD_PortalController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TotD_PortalController.BP_TotD_PortalController_C.ReceiveBeginPlay");

	ABP_TotD_PortalController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TotD_PortalController.BP_TotD_PortalController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TotD_PortalController_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TotD_PortalController.BP_TotD_PortalController_C.ReceiveTick");

	ABP_TotD_PortalController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TotD_PortalController.BP_TotD_PortalController_C.OpenPortal
// (BlueprintCallable, BlueprintEvent)
void ABP_TotD_PortalController_C::OpenPortal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TotD_PortalController.BP_TotD_PortalController_C.OpenPortal");

	ABP_TotD_PortalController_C_OpenPortal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TotD_PortalController.BP_TotD_PortalController_C.ExecuteUbergraph_BP_TotD_PortalController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TotD_PortalController_C::ExecuteUbergraph_BP_TotD_PortalController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TotD_PortalController.BP_TotD_PortalController_C.ExecuteUbergraph_BP_TotD_PortalController");

	ABP_TotD_PortalController_C_ExecuteUbergraph_BP_TotD_PortalController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
