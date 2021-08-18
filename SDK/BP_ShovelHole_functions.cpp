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

// Function BP_ShovelHole.BP_ShovelHole_C.SetFadeInParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ShovelHole_C::SetFadeInParameters(float FadeTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShovelHole.BP_ShovelHole_C.SetFadeInParameters");

	ABP_ShovelHole_C_SetFadeInParameters_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ShovelHole.BP_ShovelHole_C.SetFadeOutParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ShovelHole_C::SetFadeOutParameters(float FadeTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShovelHole.BP_ShovelHole_C.SetFadeOutParameters");

	ABP_ShovelHole_C_SetFadeOutParameters_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ShovelHole.BP_ShovelHole_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ShovelHole_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShovelHole.BP_ShovelHole_C.UserConstructionScript");

	ABP_ShovelHole_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ShovelHole.BP_ShovelHole_C.OnStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<Athena_EHoleState> InState                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ShovelHole_C::OnStateChanged(TEnumAsByte<Athena_EHoleState> InState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShovelHole.BP_ShovelHole_C.OnStateChanged");

	ABP_ShovelHole_C_OnStateChanged_Params params;
	params.InState = InState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ShovelHole.BP_ShovelHole_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_ShovelHole_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShovelHole.BP_ShovelHole_C.ReceiveBeginPlay");

	ABP_ShovelHole_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ShovelHole.BP_ShovelHole_C.ExecuteUbergraph_BP_ShovelHole
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ShovelHole_C::ExecuteUbergraph_BP_ShovelHole(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShovelHole.BP_ShovelHole_C.ExecuteUbergraph_BP_ShovelHole");

	ABP_ShovelHole_C_ExecuteUbergraph_BP_ShovelHole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
