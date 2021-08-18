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

// Function BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_DynamicFogVolume_Tale2_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C.UserConstructionScript");

	ABP_DynamicFogVolume_Tale2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DynamicFogVolume_Tale2_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C.ReceiveTick");

	ABP_DynamicFogVolume_Tale2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C.ExecuteUbergraph_BP_DynamicFogVolume_Tale2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DynamicFogVolume_Tale2_C::ExecuteUbergraph_BP_DynamicFogVolume_Tale2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C.ExecuteUbergraph_BP_DynamicFogVolume_Tale2");

	ABP_DynamicFogVolume_Tale2_C_ExecuteUbergraph_BP_DynamicFogVolume_Tale2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
