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

// Function TestUtilities.TestPrimitiveComponent.GetCollisionObjectType
struct UTestPrimitiveComponent_GetCollisionObjectType_Params
{
	TEnumAsByte<Engine_ECollisionChannel>              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TestUtilities.TestStaticMeshComponent.AddForce
struct UTestStaticMeshComponent_AddForce_Params
{
	struct FVector                                     Force;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       BoneName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAccelChange;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TestUtilities.DelegateTester.Callback
struct UDelegateTester_Callback_Params
{
};

// Function TestUtilities.DelegateTesterWithFNameParam.Callback
struct UDelegateTesterWithFNameParam_Callback_Params
{
	struct FName                                       InParam;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
