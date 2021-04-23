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

// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.GetPxActorCapacityForPhysXAggregate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
unsigned char ABP_LargeShipTemplate_C::GetPxActorCapacityForPhysXAggregate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.GetPxActorCapacityForPhysXAggregate");

	ABP_LargeShipTemplate_C_GetPxActorCapacityForPhysXAggregate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.SetupMastControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    LeftHoist                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChildActorComponent*    RightHoist                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChildActorComponent*    LeftAngle                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChildActorComponent*    RightAngle                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   RiggingGroupName               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LargeShipTemplate_C::SetupMastControls(class UChildActorComponent* LeftHoist, class UChildActorComponent* RightHoist, class UChildActorComponent* LeftAngle, class UChildActorComponent* RightAngle, const struct FName& RiggingGroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.SetupMastControls");

	ABP_LargeShipTemplate_C_SetupMastControls_Params params;
	params.LeftHoist = LeftHoist;
	params.RightHoist = RightHoist;
	params.LeftAngle = LeftAngle;
	params.RightAngle = RightAngle;
	params.RiggingGroupName = RiggingGroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LargeShipTemplate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LargeShipTemplate.BP_LargeShipTemplate_C.UserConstructionScript");

	ABP_LargeShipTemplate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
