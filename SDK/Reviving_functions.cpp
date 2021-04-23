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

// Function Reviving.DeathSelfInteractionComponent.SetGiveUpAvaliable
// (Final, Native, Private)
void UDeathSelfInteractionComponent::SetGiveUpAvaliable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Reviving.DeathSelfInteractionComponent.SetGiveUpAvaliable");

	UDeathSelfInteractionComponent_SetGiveUpAvaliable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Reviving.DeathSelfInteractionComponent.OnRep_HasGivenUp
// (Final, Native, Private)
void UDeathSelfInteractionComponent::OnRep_HasGivenUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Reviving.DeathSelfInteractionComponent.OnRep_HasGivenUp");

	UDeathSelfInteractionComponent_OnRep_HasGivenUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Reviving.ReviveComponent.OnRep_ReviveState
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<Reviving_EReviveState> PreviousReviveState            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UReviveComponent::OnRep_ReviveState(TEnumAsByte<Reviving_EReviveState> PreviousReviveState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Reviving.ReviveComponent.OnRep_ReviveState");

	UReviveComponent_OnRep_ReviveState_Params params;
	params.PreviousReviveState = PreviousReviveState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Reviving.ReviveComponent.HandleOwningCharacterEndPlay
// (Final, Native, Public)
void UReviveComponent::HandleOwningCharacterEndPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Reviving.ReviveComponent.HandleOwningCharacterEndPlay");

	UReviveComponent_HandleOwningCharacterEndPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
