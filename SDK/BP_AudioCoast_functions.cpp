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

// Function BP_AudioCoast.BP_AudioCoast_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AudioCoast_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioCoast.BP_AudioCoast_C.UserConstructionScript");

	ABP_AudioCoast_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AudioCoast.BP_AudioCoast_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_AudioCoast_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioCoast.BP_AudioCoast_C.ReceiveBeginPlay");

	ABP_AudioCoast_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AudioCoast.BP_AudioCoast_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AudioCoast_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioCoast.BP_AudioCoast_C.ReceiveEndPlay");

	ABP_AudioCoast_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AudioCoast.BP_AudioCoast_C.ExecuteUbergraph_BP_AudioCoast
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AudioCoast_C::ExecuteUbergraph_BP_AudioCoast(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioCoast.BP_AudioCoast_C.ExecuteUbergraph_BP_AudioCoast");

	ABP_AudioCoast_C_ExecuteUbergraph_BP_AudioCoast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
