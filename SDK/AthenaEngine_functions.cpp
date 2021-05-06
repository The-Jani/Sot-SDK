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

// Function AthenaEngine.BoxedRpcDispatcherComponent.Server_SendRpc
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FSerialisedRpc          Event                          (ConstParm, Parm, ReferenceParm)
void UBoxedRpcDispatcherComponent::Server_SendRpc(const struct FSerialisedRpc& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.BoxedRpcDispatcherComponent.Server_SendRpc");

	UBoxedRpcDispatcherComponent_Server_SendRpc_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaEngine.BoxedRpcDispatcherComponent.NetMulticastExcludeServer_SendRpc
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FSerialisedRpc          Event                          (ConstParm, Parm, ReferenceParm)
void UBoxedRpcDispatcherComponent::NetMulticastExcludeServer_SendRpc(const struct FSerialisedRpc& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.BoxedRpcDispatcherComponent.NetMulticastExcludeServer_SendRpc");

	UBoxedRpcDispatcherComponent_NetMulticastExcludeServer_SendRpc_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaEngine.BoxedRpcDispatcherComponent.Client_SendRpc
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FSerialisedRpc          Event                          (ConstParm, Parm, ReferenceParm)
void UBoxedRpcDispatcherComponent::Client_SendRpc(const struct FSerialisedRpc& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.BoxedRpcDispatcherComponent.Client_SendRpc");

	UBoxedRpcDispatcherComponent_Client_SendRpc_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaEngine.DynamicColourPointLightComponent.DeactivateLight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Blend                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDynamicColourPointLightComponent::DeactivateLight(bool Blend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.DynamicColourPointLightComponent.DeactivateLight");

	UDynamicColourPointLightComponent_DeactivateLight_Params params;
	params.Blend = Blend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaEngine.DynamicColourPointLightComponent.ActivateLight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Blend                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDynamicColourPointLightComponent::ActivateLight(bool Blend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.DynamicColourPointLightComponent.ActivateLight");

	UDynamicColourPointLightComponent_ActivateLight_Params params;
	params.Blend = Blend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  InOwner                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UForceFeedbackCondition::CanPlayForceFeedback(class AActor* InOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback");

	UForceFeedbackCondition_CanPlayForceFeedback_Params params;
	params.InOwner = InOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaEngine.PlayModeHelpers.SetPlayModeVariantOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<AthenaEngine_EPlayModeVariant> NewPlayModeVariantOverride     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayModeHelpers::STATIC_SetPlayModeVariantOverride(TEnumAsByte<AthenaEngine_EPlayModeVariant> NewPlayModeVariantOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.SetPlayModeVariantOverride");

	UPlayModeHelpers_SetPlayModeVariantOverride_Params params;
	params.NewPlayModeVariantOverride = NewPlayModeVariantOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaEngine.PlayModeHelpers.SetPlayModeOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<AthenaEngine_EPlayMode> NewPlayModeOverride            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayModeHelpers::STATIC_SetPlayModeOverride(TEnumAsByte<AthenaEngine_EPlayMode> NewPlayModeOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.SetPlayModeOverride");

	UPlayModeHelpers_SetPlayModeOverride_Params params;
	params.NewPlayModeOverride = NewPlayModeOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaEngine.PlayModeHelpers.GetPlayModeVariant
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<AthenaEngine_EPlayModeVariant> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaEngine_EPlayModeVariant> UPlayModeHelpers::STATIC_GetPlayModeVariant(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.GetPlayModeVariant");

	UPlayModeHelpers_GetPlayModeVariant_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaEngine.PlayModeHelpers.GetPlayMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<AthenaEngine_EPlayMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaEngine_EPlayMode> UPlayModeHelpers::STATIC_GetPlayMode(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.GetPlayMode");

	UPlayModeHelpers_GetPlayMode_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaEngine.PlayModeHelpers.ClearPlayModeVariantOverride
// (Final, Native, Static, Public, BlueprintCallable)
void UPlayModeHelpers::STATIC_ClearPlayModeVariantOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.ClearPlayModeVariantOverride");

	UPlayModeHelpers_ClearPlayModeVariantOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaEngine.PlayModeHelpers.ClearPlayModeOverride
// (Final, Native, Static, Public, BlueprintCallable)
void UPlayModeHelpers::STATIC_ClearPlayModeOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.PlayModeHelpers.ClearPlayModeOverride");

	UPlayModeHelpers_ClearPlayModeOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaEngine.RotateMeshToActorComponent.SnapMeshToLookAtActor
// (Final, Native, Public, BlueprintCallable)
void URotateMeshToActorComponent::SnapMeshToLookAtActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.RotateMeshToActorComponent.SnapMeshToLookAtActor");

	URotateMeshToActorComponent_SnapMeshToLookAtActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaEngine.RotateMeshToActorComponent.Initialise
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*          InMeshToRotate                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  InActorToRotateTo              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URotateMeshToActorComponent::Initialise(class UMeshComponent* InMeshToRotate, class AActor* InActorToRotateTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.RotateMeshToActorComponent.Initialise");

	URotateMeshToActorComponent_Initialise_Params params;
	params.InMeshToRotate = InMeshToRotate;
	params.InActorToRotateTo = InActorToRotateTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
