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

// Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.UserConstructionScript
struct ABP_CastawayCamp_AudioLayer_C_UserConstructionScript_Params
{
};

// Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.ReceiveBeginPlay
struct ABP_CastawayCamp_AudioLayer_C_ReceiveBeginPlay_Params
{
};

// Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.ReceiveEndPlay
struct ABP_CastawayCamp_AudioLayer_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.ExecuteUbergraph_BP_CastawayCamp_AudioLayer
struct ABP_CastawayCamp_AudioLayer_C_ExecuteUbergraph_BP_CastawayCamp_AudioLayer_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
