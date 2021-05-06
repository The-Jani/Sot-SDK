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

// Function Kraken.KrakenTentacle.OnDamageToTentacle
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FImpactDamageEvent      ImpactDamageEvent              (ConstParm, Parm, OutParm, ReferenceParm)
void AKrakenTentacle::OnDamageToTentacle(const struct FImpactDamageEvent& ImpactDamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kraken.KrakenTentacle.OnDamageToTentacle");

	AKrakenTentacle_OnDamageToTentacle_Params params;
	params.ImpactDamageEvent = ImpactDamageEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Kraken.Murk.DeactivateMurkBP
// (Final, Native, Public, BlueprintCallable)
void AMurk::DeactivateMurkBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kraken.Murk.DeactivateMurkBP");

	AMurk_DeactivateMurkBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Kraken.Murk.ActivateMurkBP
// (Final, Native, Public, BlueprintCallable)
void AMurk::ActivateMurkBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kraken.Murk.ActivateMurkBP");

	AMurk_ActivateMurkBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Kraken.KrakenShipWrappingTentacle.OnRep_CurrentServerAnimationState
// (Final, Native, Private)
void AKrakenShipWrappingTentacle::OnRep_CurrentServerAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kraken.KrakenShipWrappingTentacle.OnRep_CurrentServerAnimationState");

	AKrakenShipWrappingTentacle_OnRep_CurrentServerAnimationState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Kraken.Kraken.Multicast_OnTentacleTakenDamage
// (Final, Net, Native, Event, NetMulticast, Private)
void AKraken::Multicast_OnTentacleTakenDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kraken.Kraken.Multicast_OnTentacleTakenDamage");

	AKraken_Multicast_OnTentacleTakenDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Kraken.Kraken.AddActorToKnownTargets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKraken::AddActorToKnownTargets(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kraken.Kraken.AddActorToKnownTargets");

	AKraken_AddActorToKnownTargets_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Kraken.KrakenHead.RequestState
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  NewState                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void AKrakenHead::RequestState(class UClass* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kraken.KrakenHead.RequestState");

	AKrakenHead_RequestState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Kraken.KrakenHead.OnCoordinatedKrakenSpecialEvent
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<Kraken_ECoordinatedKrakenSpecialEventTypes> InEventType                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKrakenHead::OnCoordinatedKrakenSpecialEvent(TEnumAsByte<Kraken_ECoordinatedKrakenSpecialEventTypes> InEventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kraken.KrakenHead.OnCoordinatedKrakenSpecialEvent");

	AKrakenHead_OnCoordinatedKrakenSpecialEvent_Params params;
	params.InEventType = InEventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Kraken.KrakenService.RequestKrakenWithLocation
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 SpawnLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class AActor*                  SpawnedForActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKrakenService::RequestKrakenWithLocation(const struct FVector& SpawnLocation, class AActor* SpawnedForActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kraken.KrakenService.RequestKrakenWithLocation");

	AKrakenService_RequestKrakenWithLocation_Params params;
	params.SpawnLocation = SpawnLocation;
	params.SpawnedForActor = SpawnedForActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Kraken.KrakenService.IsServiceInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AKrakenService::IsServiceInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kraken.KrakenService.IsServiceInitialized");

	AKrakenService_IsServiceInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Kraken.KrakenService.IsKrakenActive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AKrakenService::IsKrakenActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kraken.KrakenService.IsKrakenActive");

	AKrakenService_IsKrakenActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Kraken.KrakenService.DismissKraken
// (Native, Public, BlueprintCallable)
void AKrakenService::DismissKraken()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kraken.KrakenService.DismissKraken");

	AKrakenService_DismissKraken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
