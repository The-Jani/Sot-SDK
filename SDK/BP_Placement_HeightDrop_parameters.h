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

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateComponentList
struct ABP_Placement_HeightDrop_C_CreateComponentList_Params
{
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateParentBounds
struct ABP_Placement_HeightDrop_C_CreateParentBounds_Params
{
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CheckMobilityState
struct ABP_Placement_HeightDrop_C_CheckMobilityState_Params
{
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Get Valid Collision
struct ABP_Placement_HeightDrop_C_Get_Valid_Collision_Params
{
	TArray<struct FHitResult>                          Hit_Results;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Hit_Success;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USceneComponent*                             Current_Component;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Impact_Position;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Impact_Normal;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Drop Components
struct ABP_Placement_HeightDrop_C_Drop_Components_Params
{
};

// Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.UserConstructionScript
struct ABP_Placement_HeightDrop_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
