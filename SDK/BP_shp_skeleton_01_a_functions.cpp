// Name: SoT, Version: 2.1.0.1

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

// Function BP_shp_skeleton_01_a.BP_shp_skeleton_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_shp_skeleton_01_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_shp_skeleton_01_a.BP_shp_skeleton_01_a_C.UserConstructionScript");

	ABP_shp_skeleton_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_shp_skeleton_01_a.BP_shp_skeleton_01_a_C.StartWetEffect
// (BlueprintCallable, BlueprintEvent)
void ABP_shp_skeleton_01_a_C::StartWetEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_shp_skeleton_01_a.BP_shp_skeleton_01_a_C.StartWetEffect");

	ABP_shp_skeleton_01_a_C_StartWetEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_shp_skeleton_01_a.BP_shp_skeleton_01_a_C.HideWetDecals
// (BlueprintCallable, BlueprintEvent)
void ABP_shp_skeleton_01_a_C::HideWetDecals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_shp_skeleton_01_a.BP_shp_skeleton_01_a_C.HideWetDecals");

	ABP_shp_skeleton_01_a_C_HideWetDecals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_shp_skeleton_01_a.BP_shp_skeleton_01_a_C.SetSailColour
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAIShipSailData         SailParams                     (Parm)
void ABP_shp_skeleton_01_a_C::SetSailColour(const struct FAIShipSailData& SailParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_shp_skeleton_01_a.BP_shp_skeleton_01_a_C.SetSailColour");

	ABP_shp_skeleton_01_a_C_SetSailColour_Params params;
	params.SailParams = SailParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_shp_skeleton_01_a.BP_shp_skeleton_01_a_C.ExecuteUbergraph_BP_shp_skeleton_01_a
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_shp_skeleton_01_a_C::ExecuteUbergraph_BP_shp_skeleton_01_a(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_shp_skeleton_01_a.BP_shp_skeleton_01_a_C.ExecuteUbergraph_BP_shp_skeleton_01_a");

	ABP_shp_skeleton_01_a_C_ExecuteUbergraph_BP_shp_skeleton_01_a_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
