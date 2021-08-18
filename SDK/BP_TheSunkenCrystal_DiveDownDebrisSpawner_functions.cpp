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

// Function BP_TheSunkenCrystal_DiveDownDebrisSpawner.BP_TheSunkenCrystal_DiveDownDebrisSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TheSunkenCrystal_DiveDownDebrisSpawner_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TheSunkenCrystal_DiveDownDebrisSpawner.BP_TheSunkenCrystal_DiveDownDebrisSpawner_C.UserConstructionScript");

	ABP_TheSunkenCrystal_DiveDownDebrisSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TheSunkenCrystal_DiveDownDebrisSpawner.BP_TheSunkenCrystal_DiveDownDebrisSpawner_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_TheSunkenCrystal_DiveDownDebrisSpawner_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TheSunkenCrystal_DiveDownDebrisSpawner.BP_TheSunkenCrystal_DiveDownDebrisSpawner_C.ReceiveBeginPlay");

	ABP_TheSunkenCrystal_DiveDownDebrisSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TheSunkenCrystal_DiveDownDebrisSpawner.BP_TheSunkenCrystal_DiveDownDebrisSpawner_C.ExecuteUbergraph_BP_TheSunkenCrystal_DiveDownDebrisSpawner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TheSunkenCrystal_DiveDownDebrisSpawner_C::ExecuteUbergraph_BP_TheSunkenCrystal_DiveDownDebrisSpawner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TheSunkenCrystal_DiveDownDebrisSpawner.BP_TheSunkenCrystal_DiveDownDebrisSpawner_C.ExecuteUbergraph_BP_TheSunkenCrystal_DiveDownDebrisSpawner");

	ABP_TheSunkenCrystal_DiveDownDebrisSpawner_C_ExecuteUbergraph_BP_TheSunkenCrystal_DiveDownDebrisSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
