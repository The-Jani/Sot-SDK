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

// Function BP_LargeShip_StandardHull_Art_Interior_Captains_Cabin.BP_LargeShip_StandardHull_Art_Interior_Captains_Cabin_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LargeShip_StandardHull_Art_Interior_Captains_Cabin_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LargeShip_StandardHull_Art_Interior_Captains_Cabin.BP_LargeShip_StandardHull_Art_Interior_Captains_Cabin_C.UserConstructionScript");

	ABP_LargeShip_StandardHull_Art_Interior_Captains_Cabin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
