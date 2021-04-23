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

// Function BP_AIShipWheel.BP_AIShipWheel_C.GetDockableInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDockableInfo           ReturnValue                    (Parm, OutParm, ReturnParm)
struct FDockableInfo ABP_AIShipWheel_C::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIShipWheel.BP_AIShipWheel_C.GetDockableInfo");

	ABP_AIShipWheel_C_GetDockableInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AIShipWheel.BP_AIShipWheel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AIShipWheel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIShipWheel.BP_AIShipWheel_C.UserConstructionScript");

	ABP_AIShipWheel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
