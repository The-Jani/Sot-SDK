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

// Function wld_palm_cluster_05_b.wld_palm_cluster_05_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Awld_palm_cluster_05_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wld_palm_cluster_05_b.wld_palm_cluster_05_b_C.UserConstructionScript");

	Awld_palm_cluster_05_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
