#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function BP_SmallShip_Mast.BP_SmallShip_Mast_C.UserConstructionScript
struct ABP_SmallShip_Mast_C_UserConstructionScript_Params
{
};

// Function BP_SmallShip_Mast.BP_SmallShip_Mast_C.OnMastDescLoaded
struct ABP_SmallShip_Mast_C_OnMastDescLoaded_Params
{
	class UMastDescAsset*                              MastDesc;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SmallShip_Mast.BP_SmallShip_Mast_C.ExecuteUbergraph_BP_SmallShip_Mast
struct ABP_SmallShip_Mast_C_ExecuteUbergraph_BP_SmallShip_Mast_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
