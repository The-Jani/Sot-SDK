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

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.FindExistingLight
struct ABP_DistantLightProxy_C_FindExistingLight_Params
{
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor)
	bool                                               Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.Create Lights
struct ABP_DistantLightProxy_C_Create_Lights_Params
{
};

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.UserConstructionScript
struct ABP_DistantLightProxy_C_UserConstructionScript_Params
{
};

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.Add Light
struct ABP_DistantLightProxy_C_Add_Light_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Size;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          Material;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor)
};

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.ExecuteUbergraph_BP_DistantLightProxy
struct ABP_DistantLightProxy_C_ExecuteUbergraph_BP_DistantLightProxy_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
