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

// Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.PlayShowTokenAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Token                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_VotableVoyageProposal_C::PlayShowTokenAnimation(class UPrimitiveComponent* Token)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.PlayShowTokenAnimation");

	ABP_VotableVoyageProposal_C_PlayShowTokenAnimation_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.Is Session Locked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsLocked                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_VotableVoyageProposal_C::Is_Session_Locked(bool* IsLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.Is Session Locked");

	ABP_VotableVoyageProposal_C_Is_Session_Locked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;

}


// Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_VotableVoyageProposal_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.UserConstructionScript");

	ABP_VotableVoyageProposal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_VotableVoyageProposal_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.ReceiveBeginPlay");

	ABP_VotableVoyageProposal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.OnVoteAdded
// (Event, Public, HasOutParms, BlueprintEvent)
void ABP_VotableVoyageProposal_C::OnVoteAdded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.OnVoteAdded");

	ABP_VotableVoyageProposal_C_OnVoteAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.OnVoteRemoved
// (Event, Public, HasOutParms, BlueprintEvent)
void ABP_VotableVoyageProposal_C::OnVoteRemoved()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.OnVoteRemoved");

	ABP_VotableVoyageProposal_C_OnVoteRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.ExecuteUbergraph_BP_VotableVoyageProposal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_VotableVoyageProposal_C::ExecuteUbergraph_BP_VotableVoyageProposal(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VotableVoyageProposal.BP_VotableVoyageProposal_C.ExecuteUbergraph_BP_VotableVoyageProposal");

	ABP_VotableVoyageProposal_C_ExecuteUbergraph_BP_VotableVoyageProposal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
