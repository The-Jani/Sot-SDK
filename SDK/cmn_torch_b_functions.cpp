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

// Function cmn_torch_b.cmn_torch_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Acmn_torch_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_torch_b.cmn_torch_b_C.UserConstructionScript");

	Acmn_torch_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function cmn_torch_b.cmn_torch_b_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void Acmn_torch_b_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_torch_b.cmn_torch_b_C.ReceiveBeginPlay");

	Acmn_torch_b_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function cmn_torch_b.cmn_torch_b_C.ExecuteUbergraph_cmn_torch_b
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Acmn_torch_b_C::ExecuteUbergraph_cmn_torch_b(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_torch_b.cmn_torch_b_C.ExecuteUbergraph_cmn_torch_b");

	Acmn_torch_b_C_ExecuteUbergraph_cmn_torch_b_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
