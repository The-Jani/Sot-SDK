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

// Function BP_AIShipStorageBarrel_Wood.BP_AIShipStorageBarrel_Wood_C.ShouldDrawTooltipInWorldSpace
struct ABP_AIShipStorageBarrel_Wood_C_ShouldDrawTooltipInWorldSpace_Params
{
	class AActor*                                      InInteractor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     DesiredTooltipWorldPosition;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AIShipStorageBarrel_Wood.BP_AIShipStorageBarrel_Wood_C.UserConstructionScript
struct ABP_AIShipStorageBarrel_Wood_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
