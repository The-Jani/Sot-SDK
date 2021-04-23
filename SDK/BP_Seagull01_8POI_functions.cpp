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

// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.seagull_Fade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Seagull_Material               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*       Seagull_MT_LOD                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Seagull01_8POI_C::seagull_Fade(class UMaterialInstance* Seagull_Material, class UMaterialInstance* Seagull_MT_LOD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.seagull_Fade");

	ABP_Seagull01_8POI_C_seagull_Fade_Params params;
	params.Seagull_Material = Seagull_Material;
	params.Seagull_MT_LOD = Seagull_MT_LOD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Seagull01_8POI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.UserConstructionScript");

	ABP_Seagull01_8POI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_Seagull01_8POI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.ReceiveBeginPlay");

	ABP_Seagull01_8POI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.FadeIn
// (Event, Protected, BlueprintEvent)
void ABP_Seagull01_8POI_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.FadeIn");

	ABP_Seagull01_8POI_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.FadeOut
// (Event, Protected, BlueprintEvent)
void ABP_Seagull01_8POI_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.FadeOut");

	ABP_Seagull01_8POI_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.ExecuteUbergraph_BP_Seagull01_8POI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Seagull01_8POI_C::ExecuteUbergraph_BP_Seagull01_8POI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.ExecuteUbergraph_BP_Seagull01_8POI");

	ABP_Seagull01_8POI_C_ExecuteUbergraph_BP_Seagull01_8POI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
