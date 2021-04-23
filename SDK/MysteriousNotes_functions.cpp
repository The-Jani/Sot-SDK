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

// Function MysteriousNotes.PlayerMysteriousNoteComponent.TriggerNotesReceivedPopup
// (RequiredAPI, Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           InCinematicSkipped             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerMysteriousNoteComponent::TriggerNotesReceivedPopup(bool InCinematicSkipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.TriggerNotesReceivedPopup");

	UPlayerMysteriousNoteComponent_TriggerNotesReceivedPopup_Params params;
	params.InCinematicSkipped = InCinematicSkipped;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_NoteCompletionStepReceived
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class APlayerController*       InPlayerController             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   InCompletionID                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerMysteriousNoteComponent::Server_NoteCompletionStepReceived(class APlayerController* InPlayerController, const struct FName& InCompletionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_NoteCompletionStepReceived");

	UPlayerMysteriousNoteComponent_Server_NoteCompletionStepReceived_Params params;
	params.InPlayerController = InPlayerController;
	params.InCompletionID = InCompletionID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsRead
// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// class APlayerController*       InPlayerController             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                   NoteId                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UPlayerMysteriousNoteComponent::Server_MarkNoteAsRead(class APlayerController* InPlayerController, const struct FGuid& NoteId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsRead");

	UPlayerMysteriousNoteComponent_Server_MarkNoteAsRead_Params params;
	params.InPlayerController = InPlayerController;
	params.NoteId = NoteId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsDeleted
// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// class APlayerController*       InPlayerController             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                   NoteId                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UPlayerMysteriousNoteComponent::Server_MarkNoteAsDeleted(class APlayerController* InPlayerController, const struct FGuid& NoteId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsDeleted");

	UPlayerMysteriousNoteComponent_Server_MarkNoteAsDeleted_Params params;
	params.InPlayerController = InPlayerController;
	params.NoteId = NoteId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_NoteData
// (Final, RequiredAPI, Native, Private)
void UPlayerMysteriousNoteComponent::OnRep_NoteData()
{
	static auto fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_NoteData");

	UPlayerMysteriousNoteComponent_OnRep_NoteData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_BeenPossessed
// (Final, RequiredAPI, Native, Private)
void UPlayerMysteriousNoteComponent::OnRep_BeenPossessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_BeenPossessed");

	UPlayerMysteriousNoteComponent_OnRep_BeenPossessed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.AddFakeNote
// (RequiredAPI, Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 NoteType                       (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 NoteTitle                      (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 NoteBody                       (Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FString>         CompletionStrings              (ConstParm, Parm, ZeroConstructor, ReferenceParm)
void UPlayerMysteriousNoteComponent::AddFakeNote(const struct FString& NoteType, const struct FString& NoteTitle, const struct FString& NoteBody, TArray<struct FString> CompletionStrings)
{
	static auto fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.AddFakeNote");

	UPlayerMysteriousNoteComponent_AddFakeNote_Params params;
	params.NoteType = NoteType;
	params.NoteTitle = NoteTitle;
	params.NoteBody = NoteBody;
	params.CompletionStrings = CompletionStrings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MysteriousNotes.WieldableMysteriousNote.OnTextCanvasUpdate
// (Final, Native, Private)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWieldableMysteriousNote::OnTextCanvasUpdate(class UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function MysteriousNotes.WieldableMysteriousNote.OnTextCanvasUpdate");

	AWieldableMysteriousNote_OnTextCanvasUpdate_Params params;
	params.Canvas = Canvas;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MysteriousNotes.WieldableMysteriousNote.OnRep_NoteLayout
// (Final, RequiredAPI, Native, Private)
void AWieldableMysteriousNote::OnRep_NoteLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function MysteriousNotes.WieldableMysteriousNote.OnRep_NoteLayout");

	AWieldableMysteriousNote_OnRep_NoteLayout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
