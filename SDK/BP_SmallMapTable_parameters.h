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

// Function BP_SmallMapTable.BP_SmallMapTable_C.UpdateBlurEffect
struct ABP_SmallMapTable_C_UpdateBlurEffect_Params
{
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.GetClosestInteractionPoint
struct ABP_SmallMapTable_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              OutInteractionPointRadius;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.UserConstructionScript
struct ABP_SmallMapTable_C_UserConstructionScript_Params
{
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.ReceiveBeginPlay
struct ABP_SmallMapTable_C_ReceiveBeginPlay_Params
{
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.SetEffectActiveWhenClose
struct ABP_SmallMapTable_C_SetEffectActiveWhenClose_Params
{
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.OnMapActivate
struct ABP_SmallMapTable_C_OnMapActivate_Params
{
	bool                                               IsMapActive;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTextureRenderTarget2D*                      Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.OnMapMove
struct ABP_SmallMapTable_C_OnMapMove_Params
{
	struct FVector2D                                   CentreLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ZoomLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SmallMapTable.BP_SmallMapTable_C.ExecuteUbergraph_BP_SmallMapTable
struct ABP_SmallMapTable_C_ExecuteUbergraph_BP_SmallMapTable_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
