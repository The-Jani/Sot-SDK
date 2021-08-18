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

// Function BP_TunnelOfTheDamnedPortal_Ship.BP_TunnelOfTheDamnedPortal_Ship_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TunnelOfTheDamnedPortal_Ship_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TunnelOfTheDamnedPortal_Ship.BP_TunnelOfTheDamnedPortal_Ship_C.UserConstructionScript");

	ABP_TunnelOfTheDamnedPortal_Ship_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TunnelOfTheDamnedPortal_Ship.BP_TunnelOfTheDamnedPortal_Ship_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_TunnelOfTheDamnedPortal_Ship_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TunnelOfTheDamnedPortal_Ship.BP_TunnelOfTheDamnedPortal_Ship_C.ReceiveBeginPlay");

	ABP_TunnelOfTheDamnedPortal_Ship_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TunnelOfTheDamnedPortal_Ship.BP_TunnelOfTheDamnedPortal_Ship_C.ExecuteUbergraph_BP_TunnelOfTheDamnedPortal_Ship
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TunnelOfTheDamnedPortal_Ship_C::ExecuteUbergraph_BP_TunnelOfTheDamnedPortal_Ship(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TunnelOfTheDamnedPortal_Ship.BP_TunnelOfTheDamnedPortal_Ship_C.ExecuteUbergraph_BP_TunnelOfTheDamnedPortal_Ship");

	ABP_TunnelOfTheDamnedPortal_Ship_C_ExecuteUbergraph_BP_TunnelOfTheDamnedPortal_Ship_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
