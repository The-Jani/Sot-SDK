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

// Function BP_Harpoon.BP_Harpoon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Harpoon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Harpoon.BP_Harpoon_C.UserConstructionScript");

	ABP_Harpoon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Harpoon.BP_Harpoon_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_Harpoon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Harpoon.BP_Harpoon_C.ReceiveBeginPlay");

	ABP_Harpoon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Harpoon.BP_Harpoon_C.ExecuteUbergraph_BP_Harpoon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Harpoon_C::ExecuteUbergraph_BP_Harpoon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Harpoon.BP_Harpoon_C.ExecuteUbergraph_BP_Harpoon");

	ABP_Harpoon_C_ExecuteUbergraph_BP_Harpoon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
