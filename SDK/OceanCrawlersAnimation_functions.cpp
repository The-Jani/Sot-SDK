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
// Functions
//---------------------------------------------------------------------------

// Function OceanCrawlersAnimation.OceanCrawlerAnimationInstance.ClearActiveAttack
// (Final, Native, Public, BlueprintCallable)
void UOceanCrawlerAnimationInstance::ClearActiveAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlersAnimation.OceanCrawlerAnimationInstance.ClearActiveAttack");

	UOceanCrawlerAnimationInstance_ClearActiveAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlersAnimation.OceanCrawlerAnimationInstance.BeginNewAttack
// (Final, Native, Public, BlueprintCallable)
void UOceanCrawlerAnimationInstance::BeginNewAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlersAnimation.OceanCrawlerAnimationInstance.BeginNewAttack");

	UOceanCrawlerAnimationInstance_BeginNewAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
