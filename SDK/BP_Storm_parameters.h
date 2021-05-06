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

// Function BP_Storm.BP_Storm_C.UserConstructionScript
struct ABP_Storm_C_UserConstructionScript_Params
{
};

// Function BP_Storm.BP_Storm_C.ReceiveBeginPlay
struct ABP_Storm_C_ReceiveBeginPlay_Params
{
};

// Function BP_Storm.BP_Storm_C.ReceiveTick
struct ABP_Storm_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Storm.BP_Storm_C.ExecuteUbergraph_BP_Storm
struct ABP_Storm_C_ExecuteUbergraph_BP_Storm_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
