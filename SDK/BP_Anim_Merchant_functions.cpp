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
// Functions
//---------------------------------------------------------------------------

// Function BP_Anim_Merchant.BP_Anim_Merchant_C.AnimNotify_NPCItemAnimation
// (BlueprintCallable, BlueprintEvent)
void UBP_Anim_Merchant_C::AnimNotify_NPCItemAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_Merchant.BP_Anim_Merchant_C.AnimNotify_NPCItemAnimation");

	UBP_Anim_Merchant_C_AnimNotify_NPCItemAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Anim_Merchant.BP_Anim_Merchant_C.ExecuteUbergraph_BP_Anim_Merchant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_Merchant_C::ExecuteUbergraph_BP_Anim_Merchant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_Merchant.BP_Anim_Merchant_C.ExecuteUbergraph_BP_Anim_Merchant");

	UBP_Anim_Merchant_C_ExecuteUbergraph_BP_Anim_Merchant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
