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

// Function BP_AILargeShip_StandardHull.BP_AILargeShip_StandardHull_C.GetFiringPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 OutFiringPosition              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AILargeShip_StandardHull_C::GetFiringPosition(struct FVector* OutFiringPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShip_StandardHull.BP_AILargeShip_StandardHull_C.GetFiringPosition");

	ABP_AILargeShip_StandardHull_C_GetFiringPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutFiringPosition != nullptr)
		*OutFiringPosition = params.OutFiringPosition;

}


// Function BP_AILargeShip_StandardHull.BP_AILargeShip_StandardHull_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AILargeShip_StandardHull_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShip_StandardHull.BP_AILargeShip_StandardHull_C.UserConstructionScript");

	ABP_AILargeShip_StandardHull_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
