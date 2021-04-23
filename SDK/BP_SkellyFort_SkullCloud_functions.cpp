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

// Function BP_SkellyFort_SkullCloud.BP_SkellyFort_SkullCloud_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SkellyFort_SkullCloud_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkellyFort_SkullCloud.BP_SkellyFort_SkullCloud_C.UserConstructionScript");

	ABP_SkellyFort_SkullCloud_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SkellyFort_SkullCloud.BP_SkellyFort_SkullCloud_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_SkellyFort_SkullCloud_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkellyFort_SkullCloud.BP_SkellyFort_SkullCloud_C.ReceiveBeginPlay");

	ABP_SkellyFort_SkullCloud_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SkellyFort_SkullCloud.BP_SkellyFort_SkullCloud_C.ExecuteUbergraph_BP_SkellyFort_SkullCloud
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SkellyFort_SkullCloud_C::ExecuteUbergraph_BP_SkellyFort_SkullCloud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkellyFort_SkullCloud.BP_SkellyFort_SkullCloud_C.ExecuteUbergraph_BP_SkellyFort_SkullCloud");

	ABP_SkellyFort_SkullCloud_C_ExecuteUbergraph_BP_SkellyFort_SkullCloud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
