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
// Functions
//---------------------------------------------------------------------------

// Function AthenaAIAbilities.ElectricShieldBuffComponent.OnRep_IsShieldActive
// (Final, Native, Public)
void UElectricShieldBuffComponent::OnRep_IsShieldActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAIAbilities.ElectricShieldBuffComponent.OnRep_IsShieldActive");

	UElectricShieldBuffComponent_OnRep_IsShieldActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaAIAbilities.ElectricShieldBuffComponent.DeactivateShield
// (Native, Public)
void UElectricShieldBuffComponent::DeactivateShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAIAbilities.ElectricShieldBuffComponent.DeactivateShield");

	UElectricShieldBuffComponent_DeactivateShield_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
