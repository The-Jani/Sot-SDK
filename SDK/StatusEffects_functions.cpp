// Name: SoT, Version: 2.1.0

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

// Function StatusEffects.StatusEffectOverlapZone.OnStatusDelayEnd
// (Final, Native, Private)
// Parameters:
// int                            InStatusIndex                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  ActorRef                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStatusEffectOverlapZone::OnStatusDelayEnd(int InStatusIndex, class AActor* ActorRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectOverlapZone.OnStatusDelayEnd");

	AStatusEffectOverlapZone_OnStatusDelayEnd_Params params;
	params.InStatusIndex = InStatusIndex;
	params.ActorRef = ActorRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_SetDebugDrawColour
// (Final, Native, Private)
void UDebugStatusEffectOverlapZoneVisualizerComponent::OnRep_SetDebugDrawColour()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_SetDebugDrawColour");

	UDebugStatusEffectOverlapZoneVisualizerComponent_OnRep_SetDebugDrawColour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_DebugBoxDimensions
// (Final, Native, Private)
void UDebugStatusEffectOverlapZoneVisualizerComponent::OnRep_DebugBoxDimensions()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_DebugBoxDimensions");

	UDebugStatusEffectOverlapZoneVisualizerComponent_OnRep_DebugBoxDimensions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffects.LightWeightStatusEffectManagerComponent.OnRep_ActiveEffects
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FActiveStatusEffect> OldEffects                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ULightWeightStatusEffectManagerComponent::OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.LightWeightStatusEffectManagerComponent.OnRep_ActiveEffects");

	ULightWeightStatusEffectManagerComponent_OnRep_ActiveEffects_Params params;
	params.OldEffects = OldEffects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// TArray<struct FActiveStatusEffect> AddedEffects                   (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<struct FActiveStatusEffect> RemovedEffects                 (ConstParm, Parm, ZeroConstructor, ReferenceParm)
void ULightWeightStatusEffectManagerComponent::MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> AddedEffects, TArray<struct FActiveStatusEffect> RemovedEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus");

	ULightWeightStatusEffectManagerComponent_MultiCast_ApplyOneShotStatus_Params params;
	params.AddedEffects = AddedEffects;
	params.RemovedEffects = RemovedEffects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffects.StatusEffectHelperFunctionLibrary.ApplyOneShotStatus
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Recipient                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatus                 Status                         (ConstParm, Parm, OutParm, ReferenceParm)
void UStatusEffectHelperFunctionLibrary::STATIC_ApplyOneShotStatus(class AActor* Recipient, const struct FStatus& Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectHelperFunctionLibrary.ApplyOneShotStatus");

	UStatusEffectHelperFunctionLibrary_ApplyOneShotStatus_Params params;
	params.Recipient = Recipient;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FActiveStatusEffect> OldEffects                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UStatusEffectManagerComponent::OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects");

	UStatusEffectManagerComponent_OnRep_ActiveEffects_Params params;
	params.OldEffects = OldEffects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffects.StatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// TArray<struct FActiveStatusEffect> AddedEffects                   (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<struct FActiveStatusEffect> RemovedEffects                 (ConstParm, Parm, ZeroConstructor, ReferenceParm)
void UStatusEffectManagerComponent::MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> AddedEffects, TArray<struct FActiveStatusEffect> RemovedEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectManagerComponent.MultiCast_ApplyOneShotStatus");

	UStatusEffectManagerComponent_MultiCast_ApplyOneShotStatus_Params params;
	params.AddedEffects = AddedEffects;
	params.RemovedEffects = RemovedEffects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffects.StatusEffectVolumeComponent.UnaffectActor
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffectVolumeComponent::UnaffectActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectVolumeComponent.UnaffectActor");

	UStatusEffectVolumeComponent_UnaffectActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentEndOverlap
// (Final, Native, Private)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffectVolumeComponent::OnParentComponentEndOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentEndOverlap");

	UStatusEffectVolumeComponent_OnParentComponentEndOverlap_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UStatusEffectVolumeComponent::OnParentComponentBeginOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentBeginOverlap");

	UStatusEffectVolumeComponent_OnParentComponentBeginOverlap_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StatusEffects.StatusEffectVolumeComponent.AffectActor
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStatusEffectVolumeComponent::AffectActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectVolumeComponent.AffectActor");

	UStatusEffectVolumeComponent_AffectActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
