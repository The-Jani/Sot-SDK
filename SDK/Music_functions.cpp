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

// Function Music.MusicZoneInterface.CanPlayForPlayer
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UMusicZoneInterface::CanPlayForPlayer(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music.MusicZoneInterface.CanPlayForPlayer");

	UMusicZoneInterface_CanPlayForPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Music.MusicZoneComponent.GetEmitter
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           ReturnValue                    (Parm, OutParm, ReturnParm)
struct FWwiseEmitter UMusicZoneComponent::GetEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.GetEmitter");

	UMusicZoneComponent_GetEmitter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Music.MusicZoneComponent.DisableZone
// (Final, Native, Public, BlueprintCallable)
void UMusicZoneComponent::DisableZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.DisableZone");

	UMusicZoneComponent_DisableZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Music.MusicZoneComponent.Client_StopMusicAndDisableZone
// (Net, NetReliable, Native, Event, NetMulticast, Public)
void UMusicZoneComponent::Client_StopMusicAndDisableZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.Client_StopMusicAndDisableZone");

	UMusicZoneComponent_Client_StopMusicAndDisableZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Music.MusicZoneComponent.Client_PlayOneShot
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMusicZoneComponent::Client_PlayOneShot(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.Client_PlayOneShot");

	UMusicZoneComponent_Client_PlayOneShot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Music.MusicZoneComponent.ActivateZone
// (Final, Native, Public, BlueprintCallable)
void UMusicZoneComponent::ActivateZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.ActivateZone");

	UMusicZoneComponent_ActivateZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Music.AISpawnerMusicZoneComponent.OnRep_SpawnerState
// (Final, Native, Private)
void UAISpawnerMusicZoneComponent::OnRep_SpawnerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music.AISpawnerMusicZoneComponent.OnRep_SpawnerState");

	UAISpawnerMusicZoneComponent_OnRep_SpawnerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
