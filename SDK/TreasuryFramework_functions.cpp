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

// Function TreasuryFramework.TreasuryRoom.OnWaveStart
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<TreasuryFramework_ETreasuryEncounterType> EncounterType                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATreasuryRoom::OnWaveStart(TEnumAsByte<TreasuryFramework_ETreasuryEncounterType> EncounterType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnWaveStart");

	ATreasuryRoom_OnWaveStart_Params params;
	params.EncounterType = EncounterType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TreasuryFramework.TreasuryRoom.OnWaveFinished
// (Final, Native, Protected)
void ATreasuryRoom::OnWaveFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnWaveFinished");

	ATreasuryRoom_OnWaveFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TreasuryFramework.TreasuryRoom.OnWaveComplete
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<TreasuryFramework_ETreasuryEncounterType> EncounterType                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATreasuryRoom::OnWaveComplete(TEnumAsByte<TreasuryFramework_ETreasuryEncounterType> EncounterType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnWaveComplete");

	ATreasuryRoom_OnWaveComplete_Params params;
	params.EncounterType = EncounterType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TreasuryFramework.TreasuryRoom.OnVaultOpen
// (Native, Event, Public, BlueprintEvent)
void ATreasuryRoom::OnVaultOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnVaultOpen");

	ATreasuryRoom_OnVaultOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TreasuryFramework.TreasuryRoom.OnVaultClosed
// (Native, Event, Public, BlueprintEvent)
void ATreasuryRoom::OnVaultClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnVaultClosed");

	ATreasuryRoom_OnVaultClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TreasuryFramework.TreasuryRoom.OnTreasuryStateChange
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<TreasuryFramework_ETreasuryState> PrevState                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<TreasuryFramework_ETreasuryState> NewState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATreasuryRoom::OnTreasuryStateChange(TEnumAsByte<TreasuryFramework_ETreasuryState> PrevState, TEnumAsByte<TreasuryFramework_ETreasuryState> NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnTreasuryStateChange");

	ATreasuryRoom_OnTreasuryStateChange_Params params;
	params.PrevState = PrevState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TreasuryFramework.TreasuryRoom.OnTreasuryDeactivate
// (Native, Event, Public, BlueprintEvent)
void ATreasuryRoom::OnTreasuryDeactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnTreasuryDeactivate");

	ATreasuryRoom_OnTreasuryDeactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TreasuryFramework.TreasuryRoom.OnTreasuryActivate
// (Native, Event, Public, BlueprintEvent)
void ATreasuryRoom::OnTreasuryActivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnTreasuryActivate");

	ATreasuryRoom_OnTreasuryActivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TreasuryFramework.TreasuryRoom.OnStartRaiseWater
// (Native, Event, Public, BlueprintEvent)
void ATreasuryRoom::OnStartRaiseWater()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnStartRaiseWater");

	ATreasuryRoom_OnStartRaiseWater_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TreasuryFramework.TreasuryRoom.OnStartDrainWater
// (Native, Event, Public, BlueprintEvent)
void ATreasuryRoom::OnStartDrainWater()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnStartDrainWater");

	ATreasuryRoom_OnStartDrainWater_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TreasuryFramework.TreasuryRoom.OnRoomStarted
// (Native, Event, Public, BlueprintEvent)
void ATreasuryRoom::OnRoomStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnRoomStarted");

	ATreasuryRoom_OnRoomStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TreasuryFramework.TreasuryRoom.OnRaisedWater
// (Final, Native, Protected)
void ATreasuryRoom::OnRaisedWater()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnRaisedWater");

	ATreasuryRoom_OnRaisedWater_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TreasuryFramework.TreasuryRoom.OnDrainedWater
// (Final, Native, Protected)
void ATreasuryRoom::OnDrainedWater()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnDrainedWater");

	ATreasuryRoom_OnDrainedWater_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
