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

// Function ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary.RegisterActorsWithShortRangeMarker
struct UShortRangeMarkerBlueprintFunctionLibrary_RegisterActorsWithShortRangeMarker_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      InMarker;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              InActors;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ShortRangeMarkerFramework.ShortRangeMarker.Multicast_OnCleanUp
struct AShortRangeMarker_Multicast_OnCleanUp_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
