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

// Function NaturalDisasters.AshenLordAshCloud.UpdatePostSettingsBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AAshenLordAshCloud::UpdatePostSettingsBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordAshCloud.UpdatePostSettingsBP");

	AAshenLordAshCloud_UpdatePostSettingsBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.AshenLordAshCloud.SetDissipationDensityBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CloudDensity                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAshenLordAshCloud::SetDissipationDensityBP(float CloudDensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordAshCloud.SetDissipationDensityBP");

	AAshenLordAshCloud_SetDissipationDensityBP_Params params;
	params.CloudDensity = CloudDensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.AshenLordAshCloud.OnRep_StateChanged
// (Final, Native, Private)
void AAshenLordAshCloud::OnRep_StateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordAshCloud.OnRep_StateChanged");

	AAshenLordAshCloud_OnRep_StateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.AshenLordVolcano.Multicast_FireProjectile
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
// int                            WeightedVolcanoProjectileIndex (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 AuthoritySpawnLocation         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 LaunchVelocity                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                 RotationRate                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void AAshenLordVolcano::Multicast_FireProjectile(int WeightedVolcanoProjectileIndex, const struct FVector& AuthoritySpawnLocation, const struct FVector& LaunchVelocity, const struct FVector& RotationRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordVolcano.Multicast_FireProjectile");

	AAshenLordVolcano_Multicast_FireProjectile_Params params;
	params.WeightedVolcanoProjectileIndex = WeightedVolcanoProjectileIndex;
	params.AuthoritySpawnLocation = AuthoritySpawnLocation;
	params.LaunchVelocity = LaunchVelocity;
	params.RotationRate = RotationRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.AshenLordWorldEndCloud.OnRep_CloudStateChange
// (Final, Native, Public)
void AAshenLordWorldEndCloud::OnRep_CloudStateChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordWorldEndCloud.OnRep_CloudStateChange");

	AAshenLordWorldEndCloud_OnRep_CloudStateChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.AshenLordWorldEndCloud.AnimateCloud
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          AdjustedLifetime               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAshenLordWorldEndCloud::AnimateCloud(float AdjustedLifetime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordWorldEndCloud.AnimateCloud");

	AAshenLordWorldEndCloud_AnimateCloud_Params params;
	params.AdjustedLifetime = AdjustedLifetime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.Earthquake.OnRep_EarthquakeState
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<NaturalDisasters_EEarthquakeState> OldEarthquakeState             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEarthquake::OnRep_EarthquakeState(TEnumAsByte<NaturalDisasters_EEarthquakeState> OldEarthquakeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Earthquake.OnRep_EarthquakeState");

	AEarthquake_OnRep_EarthquakeState_Params params;
	params.OldEarthquakeState = OldEarthquakeState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.Geyser.OnRep_GeyserState
// (Final, Native, Private)
void AGeyser::OnRep_GeyserState()
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Geyser.OnRep_GeyserState");

	AGeyser_OnRep_GeyserState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.Geyser.Multicast_TriggerExplosion
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void AGeyser::Multicast_TriggerExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Geyser.Multicast_TriggerExplosion");

	AGeyser_Multicast_TriggerExplosion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.MechanismGeyser.OnMechanismActionStateChanged
// (Final, Native, Public)
// Parameters:
// TScriptInterface<class UMechanismActionInterface> Action                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// TEnumAsByte<Athena_EMechanismActionState> PreviousState                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Athena_EMechanismActionState> NewState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  InInstigator                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMechanismGeyser::OnMechanismActionStateChanged(const TScriptInterface<class UMechanismActionInterface>& Action, TEnumAsByte<Athena_EMechanismActionState> PreviousState, TEnumAsByte<Athena_EMechanismActionState> NewState, class AActor* InInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.MechanismGeyser.OnMechanismActionStateChanged");

	AMechanismGeyser_OnMechanismActionStateChanged_Params params;
	params.Action = Action;
	params.PreviousState = PreviousState;
	params.NewState = NewState;
	params.InInstigator = InInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.MechanismGeyser.OnMechanismActionReset
// (Final, Native, Private)
// Parameters:
// TScriptInterface<class UMechanismResetInterface> Action                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
void AMechanismGeyser::OnMechanismActionReset(const TScriptInterface<class UMechanismResetInterface>& Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.MechanismGeyser.OnMechanismActionReset");

	AMechanismGeyser_OnMechanismActionReset_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.GeyserItemSpawnComponent.OnGeyserSpawned
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 GeyserSpawnLocation            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UGeyserItemSpawnComponent::OnGeyserSpawned(const struct FVector& GeyserSpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.GeyserItemSpawnComponent.OnGeyserSpawned");

	UGeyserItemSpawnComponent_OnGeyserSpawned_Params params;
	params.GeyserSpawnLocation = GeyserSpawnLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.LavaZone.OnRep_ActorsInZone
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<class AActor*>          PreviousActors                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ALavaZone::OnRep_ActorsInZone(TArray<class AActor*> PreviousActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.LavaZone.OnRep_ActorsInZone");

	ALavaZone_OnRep_ActorsInZone_Params params;
	params.PreviousActors = PreviousActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.LavaZone.OnRep_Active
// (Final, Native, Private)
void ALavaZone::OnRep_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.LavaZone.OnRep_Active");

	ALavaZone_OnRep_Active_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.SuperheatedWater.OnRep_PlayersInZone
// (Final, Native, Private)
void ASuperheatedWater::OnRep_PlayersInZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.SuperheatedWater.OnRep_PlayersInZone");

	ASuperheatedWater_OnRep_PlayersInZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.Volcano.OnRep_VolcanoState
// (Final, Native, Private)
// Parameters:
// struct FVolcanoStateData       OldVolcanoState                (ConstParm, Parm)
void AVolcano::OnRep_VolcanoState(const struct FVolcanoStateData& OldVolcanoState)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Volcano.OnRep_VolcanoState");

	AVolcano_OnRep_VolcanoState_Params params;
	params.OldVolcanoState = OldVolcanoState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NaturalDisasters.Volcano.Multicast_FireProjectile
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
// struct FVector                 AuthoritySpawnLocation         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// TArray<struct FVolcanoProjectileData> VolcanoProjectileDataArray     (ConstParm, Parm, ZeroConstructor, ReferenceParm)
void AVolcano::Multicast_FireProjectile(const struct FVector& AuthoritySpawnLocation, TArray<struct FVolcanoProjectileData> VolcanoProjectileDataArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Volcano.Multicast_FireProjectile");

	AVolcano_Multicast_FireProjectile_Params params;
	params.AuthoritySpawnLocation = AuthoritySpawnLocation;
	params.VolcanoProjectileDataArray = VolcanoProjectileDataArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
