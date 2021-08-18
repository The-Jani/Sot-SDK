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

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.BlendParams
struct ABP_DynamicDensityFogVolume_C_BlendParams_Params
{
	float                                              BlendAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.OnRep_NextState
struct ABP_DynamicDensityFogVolume_C_OnRep_NextState_Params
{
};

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UserConstructionScript
struct ABP_DynamicDensityFogVolume_C_UserConstructionScript_Params
{
};

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__FinishedFunc
struct ABP_DynamicDensityFogVolume_C_StateBlend__FinishedFunc_Params
{
};

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__UpdateFunc
struct ABP_DynamicDensityFogVolume_C_StateBlend__UpdateFunc_Params
{
};

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ReceiveBeginPlay
struct ABP_DynamicDensityFogVolume_C_ReceiveBeginPlay_Params
{
};

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UpdateCanvas
struct ABP_DynamicDensityFogVolume_C_UpdateCanvas_Params
{
	class UCanvas*                                     Canvas;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Width;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Height;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ChangeState
struct ABP_DynamicDensityFogVolume_C_ChangeState_Params
{
	int                                                State;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.SetState
struct ABP_DynamicDensityFogVolume_C_SetState_Params
{
};

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ExecuteUbergraph_BP_DynamicDensityFogVolume
struct ABP_DynamicDensityFogVolume_C_ExecuteUbergraph_BP_DynamicDensityFogVolume_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
