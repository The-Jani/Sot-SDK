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

// Function BP_FishCreature.BP_FishCreature_C.ConfigureMaterialInstance
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FishCreature_C::ConfigureMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishCreature.BP_FishCreature_C.ConfigureMaterialInstance");

	ABP_FishCreature_C_ConfigureMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FishCreature.BP_FishCreature_C.CreateCreature
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_FishCreature_C::CreateCreature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishCreature.BP_FishCreature_C.CreateCreature");

	ABP_FishCreature_C_CreateCreature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FishCreature.BP_FishCreature_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FishCreature_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishCreature.BP_FishCreature_C.UserConstructionScript");

	ABP_FishCreature_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
