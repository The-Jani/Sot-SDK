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
// Functions
//---------------------------------------------------------------------------

// Function BP_Campaign035_JewelsOfTheDeep_BilgeRats_NPC.BP_Campaign035_JewelsOfTheDeep_BilgeRats_NPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Campaign035_JewelsOfTheDeep_BilgeRats_NPC_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Campaign035_JewelsOfTheDeep_BilgeRats_NPC.BP_Campaign035_JewelsOfTheDeep_BilgeRats_NPC_C.UserConstructionScript");

	ABP_Campaign035_JewelsOfTheDeep_BilgeRats_NPC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Campaign035_JewelsOfTheDeep_BilgeRats_NPC.BP_Campaign035_JewelsOfTheDeep_BilgeRats_NPC_C.ExecuteUbergraph_BP_Campaign035_JewelsOfTheDeep_BilgeRats_NPC
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Campaign035_JewelsOfTheDeep_BilgeRats_NPC_C::ExecuteUbergraph_BP_Campaign035_JewelsOfTheDeep_BilgeRats_NPC(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Campaign035_JewelsOfTheDeep_BilgeRats_NPC.BP_Campaign035_JewelsOfTheDeep_BilgeRats_NPC_C.ExecuteUbergraph_BP_Campaign035_JewelsOfTheDeep_BilgeRats_NPC");

	ABP_Campaign035_JewelsOfTheDeep_BilgeRats_NPC_C_ExecuteUbergraph_BP_Campaign035_JewelsOfTheDeep_BilgeRats_NPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
