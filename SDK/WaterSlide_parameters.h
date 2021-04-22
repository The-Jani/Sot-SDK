#pragma once

// Name: SoT, Version: 2.1.0

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

// Function WaterSlide.WaterSlide.SetEntranceCollisionComponent
struct AWaterSlide_SetEntranceCollisionComponent_Params
{
	class UPrimitiveComponent*                         InEntranceCollisionComponent;                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WaterSlide.WaterSlide.ComponentBeginOverlapCallBack
struct AWaterSlide_ComponentBeginOverlapCallBack_Params
{
	class AActor*                                      InOtherActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         InOtherComp;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InOtherBodyIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  InSweepResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function WaterSlide.WaterSlideCompositeInputHandler.OnMoveRight
struct UWaterSlideCompositeInputHandler_OnMoveRight_Params
{
	float                                              Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WaterSlide.WaterSlideCompositeInputHandler.OnMoveForward
struct UWaterSlideCompositeInputHandler_OnMoveForward_Params
{
	float                                              Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
