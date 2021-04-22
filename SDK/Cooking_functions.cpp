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

// Function Cooking.CookerComponent.OnRep_CookingState
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FCookingClientRepresentation OldRepresentation              (ConstParm, Parm, OutParm, ReferenceParm)
void UCookerComponent::OnRep_CookingState(const struct FCookingClientRepresentation& OldRepresentation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cooking.CookerComponent.OnRep_CookingState");

	UCookerComponent_OnRep_CookingState_Params params;
	params.OldRepresentation = OldRepresentation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
