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

// Function Fire.FlammableComponent.OnRep_OnFire
// (Final, Native, Protected)
void UFlammableComponent::OnRep_OnFire()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.OnRep_OnFire");

	UFlammableComponent_OnRep_OnFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Fire.FlammableComponent.Multicast_NotifyExtinguished_RPC
// (Net, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// struct FVector                 InExtinguishLocationWS         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UFlammableComponent::Multicast_NotifyExtinguished_RPC(const struct FVector& InExtinguishLocationWS)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.Multicast_NotifyExtinguished_RPC");

	UFlammableComponent_Multicast_NotifyExtinguished_RPC_Params params;
	params.InExtinguishLocationWS = InExtinguishLocationWS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Fire.FlammableComponent.IsOnFire
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UFlammableComponent::IsOnFire()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.IsOnFire");

	UFlammableComponent_IsOnFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Fire.FlammableComponent.IncrementFireSource
// (Native, Public, BlueprintCallable)
void UFlammableComponent::IncrementFireSource()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.IncrementFireSource");

	UFlammableComponent_IncrementFireSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Fire.FlammableComponent.DecrementFireSource
// (Native, Public, BlueprintCallable)
void UFlammableComponent::DecrementFireSource()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.FlammableComponent.DecrementFireSource");

	UFlammableComponent_DecrementFireSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Fire.FlammableInterface.IncrementFireSource
// (Native, Public, BlueprintCallable)
void UFlammableInterface::IncrementFireSource()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.FlammableInterface.IncrementFireSource");

	UFlammableInterface_IncrementFireSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Fire.FlammableInterface.DecrementFireSource
// (Native, Public, BlueprintCallable)
void UFlammableInterface::DecrementFireSource()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.FlammableInterface.DecrementFireSource");

	UFlammableInterface_DecrementFireSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Fire.FirePropagationInterface.SetAllCellsState
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Fire_EFireCellState> State                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFirePropagationInterface::SetAllCellsState(TEnumAsByte<Fire_EFireCellState> State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.FirePropagationInterface.SetAllCellsState");

	UFirePropagationInterface_SetAllCellsState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Fire.ShipFirePropagationComponent.OnRep_CellData
// (Final, Native, Private)
void UShipFirePropagationComponent::OnRep_CellData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.ShipFirePropagationComponent.OnRep_CellData");

	UShipFirePropagationComponent_OnRep_CellData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Fire.ShipFirePropagationComponent.OnRep_CellCharringData
// (Final, Native, Private)
void UShipFirePropagationComponent::OnRep_CellCharringData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Fire.ShipFirePropagationComponent.OnRep_CellCharringData");

	UShipFirePropagationComponent_OnRep_CellCharringData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
