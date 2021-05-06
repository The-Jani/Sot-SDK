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

// Function BP_LargeShip_CageLatch_03_b.BP_LargeShip_CageLatch_03_b_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ABP_LargeShip_CageLatch_03_b_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LargeShip_CageLatch_03_b.BP_LargeShip_CageLatch_03_b_C.GetClosestInteractionPoint");

	ABP_LargeShip_CageLatch_03_b_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;


	return params.ReturnValue;
}


// Function BP_LargeShip_CageLatch_03_b.BP_LargeShip_CageLatch_03_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LargeShip_CageLatch_03_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LargeShip_CageLatch_03_b.BP_LargeShip_CageLatch_03_b_C.UserConstructionScript");

	ABP_LargeShip_CageLatch_03_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LargeShip_CageLatch_03_b.BP_LargeShip_CageLatch_03_b_C.OnAnimationStarted
// (Event, Protected, BlueprintEvent)
void ABP_LargeShip_CageLatch_03_b_C::OnAnimationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LargeShip_CageLatch_03_b.BP_LargeShip_CageLatch_03_b_C.OnAnimationStarted");

	ABP_LargeShip_CageLatch_03_b_C_OnAnimationStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LargeShip_CageLatch_03_b.BP_LargeShip_CageLatch_03_b_C.OnAnimationCompleted
// (Event, Protected, BlueprintEvent)
void ABP_LargeShip_CageLatch_03_b_C::OnAnimationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LargeShip_CageLatch_03_b.BP_LargeShip_CageLatch_03_b_C.OnAnimationCompleted");

	ABP_LargeShip_CageLatch_03_b_C_OnAnimationCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LargeShip_CageLatch_03_b.BP_LargeShip_CageLatch_03_b_C.ExecuteUbergraph_BP_LargeShip_CageLatch_03_b
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LargeShip_CageLatch_03_b_C::ExecuteUbergraph_BP_LargeShip_CageLatch_03_b(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LargeShip_CageLatch_03_b.BP_LargeShip_CageLatch_03_b_C.ExecuteUbergraph_BP_LargeShip_CageLatch_03_b");

	ABP_LargeShip_CageLatch_03_b_C_ExecuteUbergraph_BP_LargeShip_CageLatch_03_b_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
