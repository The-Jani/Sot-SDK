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

// Function BP_onboarding_intro_tavern_table.BP_onboarding_intro_tavern_table_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_onboarding_intro_tavern_table_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_onboarding_intro_tavern_table.BP_onboarding_intro_tavern_table_C.UserConstructionScript");

	ABP_onboarding_intro_tavern_table_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
