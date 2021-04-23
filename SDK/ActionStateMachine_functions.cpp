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

// Function ActionStateMachine.ActionStateMachineComponent.Server_RequestActionWithMessageForCurrentState
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (ConstParm, Parm)
// struct FActionStateChangeRequestId InRequestId                    (ConstParm, Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo (ConstParm, Parm, ReferenceParm)
// struct FSerialisedActionStateMessage InSerialisedPreviousStateMessage (ConstParm, Parm, ReferenceParm)
void UActionStateMachineComponent::Server_RequestActionWithMessageForCurrentState(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, const struct FSerialisedActionStateMessage& InSerialisedPreviousStateMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Server_RequestActionWithMessageForCurrentState");

	UActionStateMachineComponent_Server_RequestActionWithMessageForCurrentState_Params params;
	params.InEpochId = InEpochId;
	params.InRequestId = InRequestId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;
	params.InSerialisedPreviousStateMessage = InSerialisedPreviousStateMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (ConstParm, Parm)
// struct FActionStateChangeRequestId InRequestId                    (ConstParm, Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo (ConstParm, Parm, ReferenceParm)
// TEnumAsByte<ActionStateMachine_EActionPredictionType> ClientPredicted                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActionStateMachineComponent::Server_RequestAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, TEnumAsByte<ActionStateMachine_EActionPredictionType> ClientPredicted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction");

	UActionStateMachineComponent_Server_RequestAction_Params params;
	params.InEpochId = InEpochId;
	params.InRequestId = InRequestId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;
	params.ClientPredicted = ClientPredicted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActionStateMachine.ActionStateMachineComponent.PostNetInit
// (Final, Native, Public, BlueprintCallable)
void UActionStateMachineComponent::PostNetInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.PostNetInit");

	UActionStateMachineComponent_PostNetInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged
// (Final, Native, Protected)
void UActionStateMachineComponent::OnNetOwnershipChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged");

	UActionStateMachineComponent_OnNetOwnershipChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (ConstParm, Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateSerialisationStateInfo (ConstParm, Parm, ReferenceParm)
void UActionStateMachineComponent::Multicast_PushSerialisableData(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateSerialisationStateInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData");

	UActionStateMachineComponent_Multicast_PushSerialisableData_Params params;
	params.InEpochId = InEpochId;
	params.InSerialisedActionStateSerialisationStateInfo = InSerialisedActionStateSerialisationStateInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushActionFromRequest
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (ConstParm, Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo (ConstParm, Parm, ReferenceParm)
void UActionStateMachineComponent::Multicast_PushActionFromRequest(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushActionFromRequest");

	UActionStateMachineComponent_Multicast_PushActionFromRequest_Params params;
	params.InEpochId = InEpochId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushAction
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (ConstParm, Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo (ConstParm, Parm, ReferenceParm)
void UActionStateMachineComponent::Multicast_PushAction(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushAction");

	UActionStateMachineComponent_Multicast_PushAction_Params params;
	params.InEpochId = InEpochId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActionStateMachine.ActionStateMachineComponent.End
// (Final, Native, Public, BlueprintCallable)
void UActionStateMachineComponent::End()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.End");

	UActionStateMachineComponent_End_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FResetStateMachineRpc   Rpc                            (ConstParm, Parm)
void UActionStateMachineComponent::Client_ResetStateMachine(const struct FResetStateMachineRpc& Rpc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine");

	UActionStateMachineComponent_Client_ResetStateMachine_Params params;
	params.Rpc = Rpc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActionStateMachine.ActionStateMachineComponent.Client_CorrectAction
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FActionStateChangeRequestId InEpochId                      (ConstParm, Parm)
// struct FActionStateChangeRequestId InRequestId                    (ConstParm, Parm)
// struct FSerialisedActionStateInfo InSerialisedActionStateConstructionInfo (ConstParm, Parm, ReferenceParm)
void UActionStateMachineComponent::Client_CorrectAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Client_CorrectAction");

	UActionStateMachineComponent_Client_CorrectAction_Params params;
	params.InEpochId = InEpochId;
	params.InRequestId = InRequestId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPassesExceptForId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  StateId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateValidatorThatAlwaysPassesExceptForId(class UActionStateMachineComponent* InComponent, class UClass* StateId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPassesExceptForId");

	UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPassesExceptForId_Params params;
	params.InComponent = InComponent;
	params.StateId = StateId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateValidatorThatAlwaysPasses(class UActionStateMachineComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses");

	UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPasses_Params params;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateValidatorThatAlwaysFails(class UActionStateMachineComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails");

	UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysFails_Params params;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateFactoryChangeToNullOnUpdate(class UActionStateMachineComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate");

	UActionStateMachineComponentTestFunctions_SetTestStateFactoryChangeToNullOnUpdate_Params params;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateFactory(class UActionStateMachineComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory");

	UActionStateMachineComponentTestFunctions_SetTestStateFactory_Params params;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomClientValidityCheckCallback* InCallback                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_SetCustomClientValidationTestStateFactory(class UActionStateMachineComponent* InComponent, class UCustomClientValidityCheckCallback* InCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory");

	UActionStateMachineComponentTestFunctions_SetCustomClientValidationTestStateFactory_Params params;
	params.InComponent = InComponent;
	params.InCallback = InCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestUnpredictedTestActionStateWithIdOnTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ClientStateId                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                  ServerStateId                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_RequestUnpredictedTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId, class UClass* ClientStateId, class UClass* ServerStateId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestUnpredictedTestActionStateWithIdOnTrack");

	UActionStateMachineComponentTestFunctions_RequestUnpredictedTestActionStateWithIdOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.ClientStateId = ClientStateId;
	params.ServerStateId = ServerStateId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestTestActionStateWithIdOnTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  StateId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_RequestTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId, class UClass* StateId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestTestActionStateWithIdOnTrack");

	UActionStateMachineComponentTestFunctions_RequestTestActionStateWithIdOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.StateId = StateId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestNullActionStateOnTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_RequestNullActionStateOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestNullActionStateOnTrack");

	UActionStateMachineComponentTestFunctions_RequestNullActionStateOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  StateId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int                            DataValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActionStateMachineComponentTestFunctions::STATIC_PushTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId, class UClass* StateId, int DataValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack");

	UActionStateMachineComponentTestFunctions_PushTestActionStateSerialisableDataOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.StateId = StateId;
	params.DataValue = DataValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.IsActionStateTypeActiveOnTrack
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  StateId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_IsActionStateTypeActiveOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId, class UClass* StateId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.IsActionStateTypeActiveOnTrack");

	UActionStateMachineComponentTestFunctions_IsActionStateTypeActiveOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.StateId = StateId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTypeOfActionStateActiveOnTrack
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
class UClass* UActionStateMachineComponentTestFunctions::STATIC_GetTypeOfActionStateActiveOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTypeOfActionStateActiveOnTrack");

	UActionStateMachineComponentTestFunctions_GetTypeOfActionStateActiveOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UActionStateMachineComponent* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTestActionStateSerialisableData Data                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_GetTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId, struct FTestActionStateSerialisableData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack");

	UActionStateMachineComponentTestFunctions_GetTestActionStateSerialisableDataOnTrack_Params params;
	params.InComponent = InComponent;
	params.TrackId = TrackId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.CreateCustomClientValidityCheckCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCustomClientValidityCheckCallback* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCustomClientValidityCheckCallback* UActionStateMachineComponentTestFunctions::STATIC_CreateCustomClientValidityCheckCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.CreateCustomClientValidityCheckCallback");

	UActionStateMachineComponentTestFunctions_CreateCustomClientValidityCheckCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FActionStatePriorityTable PriorityTable                  (Parm, OutParm, ReferenceParm)
// class UClass*                  InStateA                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                  InStateB                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TEnumAsByte<ActionStateMachine_EActionStatePriority> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<ActionStateMachine_EActionStatePriority> UActionStatePriorityTableUtility::STATIC_GetPriority(struct FActionStatePriorityTable* PriorityTable, class UClass* InStateA, class UClass* InStateB)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority");

	UActionStatePriorityTableUtility_GetPriority_Params params;
	params.InStateA = InStateA;
	params.InStateB = InStateB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PriorityTable != nullptr)
		*PriorityTable = params.PriorityTable;


	return params.ReturnValue;
}


// Function ActionStateMachine.ActionStatePriorityTableUtility.CreatePriorityTable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActionStatePriorityTableData* Data                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionStatePriorityTable ReturnValue                    (Parm, OutParm, ReturnParm)
struct FActionStatePriorityTable UActionStatePriorityTableUtility::STATIC_CreatePriorityTable(class UActionStatePriorityTableData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStatePriorityTableUtility.CreatePriorityTable");

	UActionStatePriorityTableUtility_CreatePriorityTable_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool USerialisedActionStateConstructionInfoTestFunctions::STATIC_IsValid(const struct FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid");

	USerialisedActionStateConstructionInfoTestFunctions_IsValid_Params params;
	params.TestStruct = TestStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool USerialisedActionStateConstructionInfoTestFunctions::STATIC_HasTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner");

	USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfoWithInner_Params params;
	params.TestStruct = TestStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool USerialisedActionStateConstructionInfoTestFunctions::STATIC_HasTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo");

	USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfo_Params params;
	params.TestStruct = TestStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTestActionStateConstructionInfoWithInner ReturnValue                    (Parm, OutParm, ReturnParm)
struct FTestActionStateConstructionInfoWithInner USerialisedActionStateConstructionInfoTestFunctions::STATIC_GetTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner");

	USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfoWithInner_Params params;
	params.TestStruct = TestStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSerialisedActionStateInfo TestStruct                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTestActionStateConstructionInfo ReturnValue                    (Parm, OutParm, ReturnParm)
struct FTestActionStateConstructionInfo USerialisedActionStateConstructionInfoTestFunctions::STATIC_GetTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo");

	USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfo_Params params;
	params.TestStruct = TestStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Id                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int                            IntProp                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSerialisedActionStateInfo ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::STATIC_CreateTestSerialisableData(class UClass* Id, int IntProp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData");

	USerialisedActionStateConstructionInfoTestFunctions_CreateTestSerialisableData_Params params;
	params.Id = Id;
	params.IntProp = IntProp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfoWithInner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Id                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                          FloatProp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           BoolProp                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 StringProp                     (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSerialisedActionStateInfo ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::STATIC_CreateTestConstructionInfoWithInner(class UClass* Id, float FloatProp, bool BoolProp, const struct FString& StringProp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfoWithInner");

	USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfoWithInner_Params params;
	params.Id = Id;
	params.FloatProp = FloatProp;
	params.BoolProp = BoolProp;
	params.StringProp = StringProp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Id                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int                            IntProp                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSerialisedActionStateInfo ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::STATIC_CreateTestConstructionInfo(class UClass* Id, int IntProp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfo");

	USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfo_Params params;
	params.Id = Id;
	params.IntProp = IntProp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
