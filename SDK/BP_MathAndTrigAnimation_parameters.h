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

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DisplayAllCharacterSockets
struct UBP_MathAndTrigAnimation_C_DisplayAllCharacterSockets_Params
{
	class AAthenaCharacter*                            Athena_Character;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Size;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DecrementFloat
struct UBP_MathAndTrigAnimation_C_DecrementFloat_Params
{
	float                                              Float;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              DecrementValue;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Increment Float
struct UBP_MathAndTrigAnimation_C_Increment_Float_Params
{
	float                                              Float;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              Incement_Value;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Apply Relative Transform
struct UBP_MathAndTrigAnimation_C_Apply_Relative_Transform_Params
{
	struct FTransform                                  RelativeTransform;                                         // (Parm, IsPlainOldData, NoDestructor)
	struct FTransform                                  BaseTransform;                                             // (Parm, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  CombinedTransform;                                         // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Calculate Relative Transform
struct UBP_MathAndTrigAnimation_C_Calculate_Relative_Transform_Params
{
	struct FTransform                                  RelativeObjectsWorldTransform;                             // (Parm, IsPlainOldData, NoDestructor)
	struct FTransform                                  BaseObjectsWorldTransform;                                 // (Parm, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  RealtiveOffsetTransform;                                   // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
