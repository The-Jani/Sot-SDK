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

// Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStarted
struct UBP_Anim_Concertina_C_OnUseStarted_Params
{
	class UClass*                                      InputID;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FWieldableItemActionVisuals                 ActionVisuals;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStopped
struct UBP_Anim_Concertina_C_OnUseStopped_Params
{
	class UClass*                                      InputID;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Anim_Concertina.BP_Anim_Concertina_C.ExecuteUbergraph_BP_Anim_Concertina
struct UBP_Anim_Concertina_C_ExecuteUbergraph_BP_Anim_Concertina_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
