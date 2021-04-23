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

// Function BP_Anim_Contract.BP_Anim_Contract_C.OnUseStarted
struct UBP_Anim_Contract_C_OnUseStarted_Params
{
	class UClass*                                      InputID;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FWieldableItemActionVisuals                 ActionVisuals;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Anim_Contract.BP_Anim_Contract_C.OnUseStopped
struct UBP_Anim_Contract_C_OnUseStopped_Params
{
	class UClass*                                      InputID;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Anim_Contract.BP_Anim_Contract_C.ExecuteUbergraph_BP_Anim_Contract
struct UBP_Anim_Contract_C_ExecuteUbergraph_BP_Anim_Contract_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
