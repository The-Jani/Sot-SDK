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

// Function BP_Placement_Garden.BP_Placement_Garden_C.Set Garden Parameters
struct ABP_Placement_Garden_C_Set_Garden_Parameters_Params
{
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Int;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Instances_Created;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Garden.BP_Placement_Garden_C.Create Garden
struct ABP_Placement_Garden_C_Create_Garden_Params
{
};

// Function BP_Placement_Garden.BP_Placement_Garden_C.Initialise Instances
struct ABP_Placement_Garden_C_Initialise_Instances_Params
{
};

// Function BP_Placement_Garden.BP_Placement_Garden_C.UserConstructionScript
struct ABP_Placement_Garden_C_UserConstructionScript_Params
{
};

// Function BP_Placement_Garden.BP_Placement_Garden_C.Force Create Garden
struct ABP_Placement_Garden_C_Force_Create_Garden_Params
{
};

// Function BP_Placement_Garden.BP_Placement_Garden_C.ExecuteUbergraph_BP_Placement_Garden
struct ABP_Placement_Garden_C_ExecuteUbergraph_BP_Placement_Garden_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
