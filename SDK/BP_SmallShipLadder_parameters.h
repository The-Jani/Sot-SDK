#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function BP_SmallShipLadder.BP_SmallShipLadder_C.GetDockableInfo
struct ABP_SmallShipLadder_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_SmallShipLadder.BP_SmallShipLadder_C.Setup Spline
struct ABP_SmallShipLadder_C_Setup_Spline_Params
{
	class USplineComponent*                            Spline;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FVector>                             Positions;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_SmallShipLadder.BP_SmallShipLadder_C.CanInteract
struct ABP_SmallShipLadder_C_CanInteract_Params
{
	class AActor*                                      InInteractor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_SmallShipLadder.BP_SmallShipLadder_C.UserConstructionScript
struct ABP_SmallShipLadder_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
