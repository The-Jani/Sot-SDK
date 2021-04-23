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

// Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.Set Value on All Materials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Variable_Name                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AILargeShipNetProxy_C::Set_Value_on_All_Materials(const struct FName& Variable_Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.Set Value on All Materials");

	ABP_AILargeShipNetProxy_C_Set_Value_on_All_Materials_Params params;
	params.Variable_Name = Variable_Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.Apply Bits to Lanterns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Lantern_Bits                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AILargeShipNetProxy_C::Apply_Bits_to_Lanterns(int Lantern_Bits)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.Apply Bits to Lanterns");

	ABP_AILargeShipNetProxy_C_Apply_Bits_to_Lanterns_Params params;
	params.Lantern_Bits = Lantern_Bits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.Create Dynamic Materials
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AILargeShipNetProxy_C::Create_Dynamic_Materials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.Create Dynamic Materials");

	ABP_AILargeShipNetProxy_C_Create_Dynamic_Materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AILargeShipNetProxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.UserConstructionScript");

	ABP_AILargeShipNetProxy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_AILargeShipNetProxy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.ReceiveBeginPlay");

	ABP_AILargeShipNetProxy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.OnLanternStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            LanternStateBits               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AILargeShipNetProxy_C::OnLanternStateChanged(int LanternStateBits)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.OnLanternStateChanged");

	ABP_AILargeShipNetProxy_C_OnLanternStateChanged_Params params;
	params.LanternStateBits = LanternStateBits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.ExecuteUbergraph_BP_AILargeShipNetProxy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AILargeShipNetProxy_C::ExecuteUbergraph_BP_AILargeShipNetProxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AILargeShipNetProxy.BP_AILargeShipNetProxy_C.ExecuteUbergraph_BP_AILargeShipNetProxy");

	ABP_AILargeShipNetProxy_C_ExecuteUbergraph_BP_AILargeShipNetProxy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
