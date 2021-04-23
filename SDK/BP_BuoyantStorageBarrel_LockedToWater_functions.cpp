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

// Function BP_BuoyantStorageBarrel_LockedToWater.BP_BuoyantStorageBarrel_LockedToWater_C.GetPxActorCapacityForPhysXAggregate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
unsigned char ABP_BuoyantStorageBarrel_LockedToWater_C::GetPxActorCapacityForPhysXAggregate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuoyantStorageBarrel_LockedToWater.BP_BuoyantStorageBarrel_LockedToWater_C.GetPxActorCapacityForPhysXAggregate");

	ABP_BuoyantStorageBarrel_LockedToWater_C_GetPxActorCapacityForPhysXAggregate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BuoyantStorageBarrel_LockedToWater.BP_BuoyantStorageBarrel_LockedToWater_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_BuoyantStorageBarrel_LockedToWater_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuoyantStorageBarrel_LockedToWater.BP_BuoyantStorageBarrel_LockedToWater_C.UserConstructionScript");

	ABP_BuoyantStorageBarrel_LockedToWater_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
