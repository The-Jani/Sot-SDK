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

// Function BP_shop_oos_01_a.BP_shop_oos_01_a_C.Set Magic Box Hidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Hidden                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_shop_oos_01_a_C::Set_Magic_Box_Hidden(bool Is_Hidden)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_shop_oos_01_a.BP_shop_oos_01_a_C.Set Magic Box Hidden");

	ABP_shop_oos_01_a_C_Set_Magic_Box_Hidden_Params params;
	params.Is_Hidden = Is_Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_shop_oos_01_a.BP_shop_oos_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_shop_oos_01_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_shop_oos_01_a.BP_shop_oos_01_a_C.UserConstructionScript");

	ABP_shop_oos_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
