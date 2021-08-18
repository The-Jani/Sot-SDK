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

// Function GameplayDebugger.GameplayDebuggingComponent.ServerReplicateData
// (Final, Exec, Native, Public)
// Parameters:
// uint32_t                       InMessage                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint32_t                       DataView                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameplayDebuggingComponent::ServerReplicateData(uint32_t InMessage, uint32_t DataView)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.ServerReplicateData");

	UGameplayDebuggingComponent_ServerReplicateData_Params params;
	params.InMessage = InMessage;
	params.DataView = DataView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void UGameplayDebuggingComponent::ServerDiscardNavmeshData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.ServerDiscardNavmeshData");

	UGameplayDebuggingComponent_ServerDiscardNavmeshData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FVector_NetQuantize10   TargetLocation                 (Parm)
void UGameplayDebuggingComponent::ServerCollectNavmeshData(const struct FVector_NetQuantize10& TargetLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.ServerCollectNavmeshData");

	UGameplayDebuggingComponent_ServerCollectNavmeshData_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh
// (Native, Public)
void UGameplayDebuggingComponent::OnRep_UpdateNavmesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateNavmesh");

	UGameplayDebuggingComponent_OnRep_UpdateNavmesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS
// (Native, Public)
void UGameplayDebuggingComponent::OnRep_UpdateEQS()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateEQS");

	UGameplayDebuggingComponent_OnRep_UpdateEQS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard
// (Native, Public)
void UGameplayDebuggingComponent::OnRep_UpdateBlackboard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_UpdateBlackboard");

	UGameplayDebuggingComponent_OnRep_UpdateBlackboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData
// (Native, Public)
void UGameplayDebuggingComponent::OnRep_PathCorridorData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnRep_PathCorridorData");

	UGameplayDebuggingComponent_OnRep_PathCorridorData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView
// (Native, Public)
void UGameplayDebuggingComponent::OnCycleDetailsView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.OnCycleDetailsView");

	UGameplayDebuggingComponent_OnCycleDetailsView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameplayDebuggingComponent::ClientEnableTargetSelection(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingComponent.ClientEnableTargetSelection");

	UGameplayDebuggingComponent_ClientEnableTargetSelection_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameplayDebuggingReplicator::ServerSetActorToDebug(class AActor* InActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ServerSetActorToDebug");

	AGameplayDebuggingReplicator_ServerSetActorToDebug_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint32_t                       InMessage                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint32_t                       DataView                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameplayDebuggingReplicator::ServerReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ServerReplicateMessage");

	AGameplayDebuggingReplicator_ServerReplicateMessage_Params params;
	params.Actor = Actor;
	params.InMessage = InMessage;
	params.DataView = DataView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayDebugger.GameplayDebuggingReplicator.OnRep_AutoActivate
// (Native, Public)
void AGameplayDebuggingReplicator::OnRep_AutoActivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.OnRep_AutoActivate");

	AGameplayDebuggingReplicator_OnRep_AutoActivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint32_t                       InMessage                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint32_t                       DataView                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameplayDebuggingReplicator::ClientReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ClientReplicateMessage");

	AGameplayDebuggingReplicator_ClientReplicateMessage_Params params;
	params.Actor = Actor;
	params.InMessage = InMessage;
	params.DataView = DataView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*       Context                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameplayDebuggingReplicator::ClientEnableTargetSelection(bool bEnable, class APlayerController* Context)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ClientEnableTargetSelection");

	AGameplayDebuggingReplicator_ClientEnableTargetSelection_Params params;
	params.bEnable = bEnable;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate
// (Net, NetReliable, Native, Event, Public, NetClient)
void AGameplayDebuggingReplicator::ClientAutoActivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggingReplicator.ClientAutoActivate");

	AGameplayDebuggingReplicator_ClientAutoActivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
