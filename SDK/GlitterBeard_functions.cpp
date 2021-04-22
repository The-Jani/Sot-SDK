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

// Function GlitterBeard.GlitterBeardFinaleCoordinatorComponent.OnRep_ReplicationState
// (Final, RequiredAPI, Native, Private, HasOutParms)
// Parameters:
// struct FFinaleReplicationState OldState                       (ConstParm, Parm, OutParm, ReferenceParm)
void UGlitterBeardFinaleCoordinatorComponent::OnRep_ReplicationState(const struct FFinaleReplicationState& OldState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardFinaleCoordinatorComponent.OnRep_ReplicationState");

	UGlitterBeardFinaleCoordinatorComponent_OnRep_ReplicationState_Params params;
	params.OldState = OldState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlitterBeard.GlitterBeardTree.StopVocals
// (Final, Native, Public, BlueprintCallable)
void AGlitterBeardTree::StopVocals()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTree.StopVocals");

	AGlitterBeardTree_StopVocals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlitterBeard.GlitterBeardTree.StopReaction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AGlitterBeardTree::StopReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTree.StopReaction");

	AGlitterBeardTree_StopReaction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GlitterBeard.GlitterBeardTree.StartVocals
// (Final, Native, Public, BlueprintCallable)
void AGlitterBeardTree::StartVocals()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTree.StartVocals");

	AGlitterBeardTree_StartVocals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlitterBeard.GlitterBeardTree.StartReaction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AGlitterBeardTree::StartReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTree.StartReaction");

	AGlitterBeardTree_StartReaction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GlitterBeard.GlitterBeardTree.Reset_Impl
// (Event, Protected, BlueprintEvent)
void AGlitterBeardTree::Reset_Impl()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTree.Reset_Impl");

	AGlitterBeardTree_Reset_Impl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GlitterBeard.GlitterBeardTreeVisualFeedbackComponent.OnRep_NextStateEvent
// (Final, RequiredAPI, Native, Private, HasOutParms)
// Parameters:
// TArray<TEnumAsByte<GlitterBeard_EGlitterbeardVFXState>> OldStates                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UGlitterBeardTreeVisualFeedbackComponent::OnRep_NextStateEvent(TArray<TEnumAsByte<GlitterBeard_EGlitterbeardVFXState>> OldStates)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlitterBeard.GlitterBeardTreeVisualFeedbackComponent.OnRep_NextStateEvent");

	UGlitterBeardTreeVisualFeedbackComponent_OnRep_NextStateEvent_Params params;
	params.OldStates = OldStates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
