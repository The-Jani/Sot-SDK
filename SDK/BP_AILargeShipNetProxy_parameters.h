#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.Set Value on All Materials
struct ABP_AILargeShipNetProxy_C_Set_Value_on_All_Materials_Params
{
	struct FName                                       Variable_Name;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.Apply Bits to Lanterns
struct ABP_AILargeShipNetProxy_C_Apply_Bits_to_Lanterns_Params
{
	int                                                Lantern_Bits;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.Create Dynamic Materials
struct ABP_AILargeShipNetProxy_C_Create_Dynamic_Materials_Params
{
};

// Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.UserConstructionScript
struct ABP_AILargeShipNetProxy_C_UserConstructionScript_Params
{
};

// Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.ReceiveBeginPlay
struct ABP_AILargeShipNetProxy_C_ReceiveBeginPlay_Params
{
};

// Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.OnLanternStateChanged
struct ABP_AILargeShipNetProxy_C_OnLanternStateChanged_Params
{
	int                                                LanternStateBits;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.ExecuteUbergraph_BP_AILargeShipNetProxy
struct ABP_AILargeShipNetProxy_C_ExecuteUbergraph_BP_AILargeShipNetProxy_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
