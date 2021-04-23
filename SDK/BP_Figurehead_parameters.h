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

// Function BP_Figurehead.BP_Figurehead_C.UserConstructionScript
struct ABP_Figurehead_C_UserConstructionScript_Params
{
};

// Function BP_Figurehead.BP_Figurehead_C.OnPartMeshLoaded
struct ABP_Figurehead_C_OnPartMeshLoaded_Params
{
	class UStaticMesh*                                 Mesh;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Figurehead.BP_Figurehead_C.OnPartDescLoaded
struct ABP_Figurehead_C_OnPartDescLoaded_Params
{
	class UGenericPartDescAsset*                       Desc;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Figurehead.BP_Figurehead_C.ExecuteUbergraph_BP_Figurehead
struct ABP_Figurehead_C_ExecuteUbergraph_BP_Figurehead_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
