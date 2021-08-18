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

// Function BP_Anim_OceanCrawler_Hermit.BP_Anim_OceanCrawler_Hermit_C.AnimNotify_NewAttack
// (BlueprintCallable, BlueprintEvent)
void UBP_Anim_OceanCrawler_Hermit_C::AnimNotify_NewAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_OceanCrawler_Hermit.BP_Anim_OceanCrawler_Hermit_C.AnimNotify_NewAttack");

	UBP_Anim_OceanCrawler_Hermit_C_AnimNotify_NewAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Anim_OceanCrawler_Hermit.BP_Anim_OceanCrawler_Hermit_C.AnimNotify_AttackCompleted
// (BlueprintCallable, BlueprintEvent)
void UBP_Anim_OceanCrawler_Hermit_C::AnimNotify_AttackCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_OceanCrawler_Hermit.BP_Anim_OceanCrawler_Hermit_C.AnimNotify_AttackCompleted");

	UBP_Anim_OceanCrawler_Hermit_C_AnimNotify_AttackCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Anim_OceanCrawler_Hermit.BP_Anim_OceanCrawler_Hermit_C.AnimNotify_StartingHitReact
// (BlueprintCallable, BlueprintEvent)
void UBP_Anim_OceanCrawler_Hermit_C::AnimNotify_StartingHitReact()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_OceanCrawler_Hermit.BP_Anim_OceanCrawler_Hermit_C.AnimNotify_StartingHitReact");

	UBP_Anim_OceanCrawler_Hermit_C_AnimNotify_StartingHitReact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Anim_OceanCrawler_Hermit.BP_Anim_OceanCrawler_Hermit_C.ExecuteUbergraph_BP_Anim_OceanCrawler_Hermit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_OceanCrawler_Hermit_C::ExecuteUbergraph_BP_Anim_OceanCrawler_Hermit(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_OceanCrawler_Hermit.BP_Anim_OceanCrawler_Hermit_C.ExecuteUbergraph_BP_Anim_OceanCrawler_Hermit");

	UBP_Anim_OceanCrawler_Hermit_C_ExecuteUbergraph_BP_Anim_OceanCrawler_Hermit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
