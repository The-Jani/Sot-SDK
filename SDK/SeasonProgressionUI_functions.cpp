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

// Function SeasonProgressionUI.SeasonProgressionUIComponent.OnHUDDestroyed
// (Final, Native, Private)
void USeasonProgressionUIComponent::OnHUDDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SeasonProgressionUI.SeasonProgressionUIComponent.OnHUDDestroyed");

	USeasonProgressionUIComponent_OnHUDDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SeasonProgressionUI.SeasonProgressionUICompositeInputHandler.OnMenuButtonPressed
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<AthenaInput_EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> USeasonProgressionUICompositeInputHandler::OnMenuButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SeasonProgressionUI.SeasonProgressionUICompositeInputHandler.OnMenuButtonPressed");

	USeasonProgressionUICompositeInputHandler_OnMenuButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
