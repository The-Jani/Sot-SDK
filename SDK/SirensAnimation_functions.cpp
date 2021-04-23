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

// Function SirensAnimation.SirenAnimationInstance.ClearActiveAttack
// (Final, Native, Public, BlueprintCallable)
void USirenAnimationInstance::ClearActiveAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function SirensAnimation.SirenAnimationInstance.ClearActiveAttack");

	USirenAnimationInstance_ClearActiveAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SirensAnimation.SirenAnimationInstance.BeginNewAttack
// (Final, Native, Public, BlueprintCallable)
void USirenAnimationInstance::BeginNewAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function SirensAnimation.SirenAnimationInstance.BeginNewAttack");

	USirenAnimationInstance_BeginNewAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
