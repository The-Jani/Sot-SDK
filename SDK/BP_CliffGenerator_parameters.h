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

// Function BP_CliffGenerator.BP_CliffGenerator_C.Draw_Debug_Numbers
struct ABP_CliffGenerator_C_Draw_Debug_Numbers_Params
{
	int                                                CurrentIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NextIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     StartLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     EndLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     StartTangent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CliffGenerator.BP_CliffGenerator_C.Deform_Terrain
struct ABP_CliffGenerator_C_Deform_Terrain_Params
{
};

// Function BP_CliffGenerator.BP_CliffGenerator_C.Build_Element
struct ABP_CliffGenerator_C_Build_Element_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStaticMesh*                                 ElementMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CliffGenerator.BP_CliffGenerator_C.UserConstructionScript
struct ABP_CliffGenerator_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
