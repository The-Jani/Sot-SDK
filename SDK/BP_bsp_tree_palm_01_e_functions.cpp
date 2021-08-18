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

// Function BP_bsp_tree_palm_01_e.BP_bsp_tree_palm_01_e_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_bsp_tree_palm_01_e_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_bsp_tree_palm_01_e.BP_bsp_tree_palm_01_e_C.UserConstructionScript");

	ABP_bsp_tree_palm_01_e_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
