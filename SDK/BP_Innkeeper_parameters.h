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

// Function BP_Innkeeper.BP_Innkeeper_C.GetClosestInteractionPoint
struct ABP_Innkeeper_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              OutInteractionPointRadius;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Innkeeper.BP_Innkeeper_C.UserConstructionScript
struct ABP_Innkeeper_C_UserConstructionScript_Params
{
};

// Function BP_Innkeeper.BP_Innkeeper_C.ReceiveBeginPlay
struct ABP_Innkeeper_C_ReceiveBeginPlay_Params
{
};

// Function BP_Innkeeper.BP_Innkeeper_C.ReceiveEndPlay
struct ABP_Innkeeper_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Innkeeper.BP_Innkeeper_C.ExecuteUbergraph_BP_Innkeeper
struct ABP_Innkeeper_C_ExecuteUbergraph_BP_Innkeeper_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
