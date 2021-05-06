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

// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ABP_SmallShip_WindowHatch_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.GetClosestInteractionPoint");

	ABP_SmallShip_WindowHatch_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;


	return params.ReturnValue;
}


// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SmallShip_WindowHatch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.UserConstructionScript");

	ABP_SmallShip_WindowHatch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.OnAnimationStarted
// (Event, Protected, BlueprintEvent)
void ABP_SmallShip_WindowHatch_C::OnAnimationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.OnAnimationStarted");

	ABP_SmallShip_WindowHatch_C_OnAnimationStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.OnAnimationCompleted
// (Event, Protected, BlueprintEvent)
void ABP_SmallShip_WindowHatch_C::OnAnimationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.OnAnimationCompleted");

	ABP_SmallShip_WindowHatch_C_OnAnimationCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.ExecuteUbergraph_BP_SmallShip_WindowHatch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SmallShip_WindowHatch_C::ExecuteUbergraph_BP_SmallShip_WindowHatch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.ExecuteUbergraph_BP_SmallShip_WindowHatch");

	ABP_SmallShip_WindowHatch_C_ExecuteUbergraph_BP_SmallShip_WindowHatch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
