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

// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.GetClosestInteractionPoint
struct ABP_SmallShip_WindowHatch_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              OutInteractionPointRadius;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.UserConstructionScript
struct ABP_SmallShip_WindowHatch_C_UserConstructionScript_Params
{
};

// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.OnAnimationStarted
struct ABP_SmallShip_WindowHatch_C_OnAnimationStarted_Params
{
};

// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.OnAnimationCompleted
struct ABP_SmallShip_WindowHatch_C_OnAnimationCompleted_Params
{
};

// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.ExecuteUbergraph_BP_SmallShip_WindowHatch
struct ABP_SmallShip_WindowHatch_C_ExecuteUbergraph_BP_SmallShip_WindowHatch_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
