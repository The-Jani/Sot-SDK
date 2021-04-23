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

// Function BP_GlitterbeardLoreBook_MyMaidenVoyage.BP_GlitterbeardLoreBook_MyMaidenVoyage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_GlitterbeardLoreBook_MyMaidenVoyage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlitterbeardLoreBook_MyMaidenVoyage.BP_GlitterbeardLoreBook_MyMaidenVoyage_C.UserConstructionScript");

	ABP_GlitterbeardLoreBook_MyMaidenVoyage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
