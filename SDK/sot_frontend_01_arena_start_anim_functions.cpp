// Name: SoT, Version: 2.1.0

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

// Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.LeaveArenaTutorialAnimation
// (Public, BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_arena_start_anim_C::LeaveArenaTutorialAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.LeaveArenaTutorialAnimation");

	Asot_frontend_01_arena_start_anim_C_LeaveArenaTutorialAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.GetFrontendCameraComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFrontendCameraComponent* Camera_Component               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_arena_start_anim_C::GetFrontendCameraComponent(class UFrontendCameraComponent** Camera_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.GetFrontendCameraComponent");

	Asot_frontend_01_arena_start_anim_C_GetFrontendCameraComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Camera_Component != nullptr)
		*Camera_Component = params.Camera_Component;

}


// Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.K2Node_MatineeController_35_Finished
// (BlueprintEvent)
void Asot_frontend_01_arena_start_anim_C::K2Node_MatineeController_35_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.K2Node_MatineeController_35_Finished");

	Asot_frontend_01_arena_start_anim_C_K2Node_MatineeController_35_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void Asot_frontend_01_arena_start_anim_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.ReceiveBeginPlay");

	Asot_frontend_01_arena_start_anim_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.StartArenaTutorial
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_arena_start_anim_C::StartArenaTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.StartArenaTutorial");

	Asot_frontend_01_arena_start_anim_C_StartArenaTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.EndArenaTutorial
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_arena_start_anim_C::EndArenaTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.EndArenaTutorial");

	Asot_frontend_01_arena_start_anim_C_EndArenaTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.SkipArenaTutorial
// (BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_arena_start_anim_C::SkipArenaTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.SkipArenaTutorial");

	Asot_frontend_01_arena_start_anim_C_SkipArenaTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.ExecuteUbergraph_sot_frontend_01_arena_start_anim
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_arena_start_anim_C::ExecuteUbergraph_sot_frontend_01_arena_start_anim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.ExecuteUbergraph_sot_frontend_01_arena_start_anim");

	Asot_frontend_01_arena_start_anim_C_ExecuteUbergraph_sot_frontend_01_arena_start_anim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
