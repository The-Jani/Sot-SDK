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

// Function BP_Cannon.BP_Cannon_C.GetDockableInfo
struct ABP_Cannon_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_Cannon.BP_Cannon_C.UserConstructionScript
struct ABP_Cannon_C_UserConstructionScript_Params
{
};

// Function BP_Cannon.BP_Cannon_C.OnCannonDescLoaded
struct ABP_Cannon_C_OnCannonDescLoaded_Params
{
	class UCannonDescAsset*                            CannonDesc;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Cannon.BP_Cannon_C.ExecuteUbergraph_BP_Cannon
struct ABP_Cannon_C_ExecuteUbergraph_BP_Cannon_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
