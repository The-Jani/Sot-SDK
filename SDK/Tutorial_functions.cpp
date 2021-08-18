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

// Function Tutorial.CompanyTutorialVoyageProgress.IsSameVoyage
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   VoyageName                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCompanyTutorialVoyageProgress::IsSameVoyage(const struct FText& VoyageName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.CompanyTutorialVoyageProgress.IsSameVoyage");

	UCompanyTutorialVoyageProgress_IsSameVoyage_Params params;
	params.VoyageName = VoyageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Tutorial.CompanyTutorialVoyageProgress.AssignVoyage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  VoyageProposalDescClass        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                  TaleRankDescClass              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UCompanyTutorialVoyageProgress::AssignVoyage(class UClass* VoyageProposalDescClass, class UClass* TaleRankDescClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.CompanyTutorialVoyageProgress.AssignVoyage");

	UCompanyTutorialVoyageProgress_AssignVoyage_Params params;
	params.VoyageProposalDescClass = VoyageProposalDescClass;
	params.TaleRankDescClass = TaleRankDescClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnServer
// (Event, Public, BlueprintEvent)
void UTutorial2019Component::ReceiveTutorial2019BeginPlayOnServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnServer");

	UTutorial2019Component_ReceiveTutorial2019BeginPlayOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnClient
// (Event, Public, BlueprintEvent)
void UTutorial2019Component::ReceiveTutorial2019BeginPlayOnClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnClient");

	UTutorial2019Component_ReceiveTutorial2019BeginPlayOnClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial.Tutorial2019Component.OnRep_IsEnabledByServer
// (Final, Native, Private)
// Parameters:
// bool                           OldIsEnabled                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTutorial2019Component::OnRep_IsEnabledByServer(bool OldIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.OnRep_IsEnabledByServer");

	UTutorial2019Component_OnRep_IsEnabledByServer_Params params;
	params.OldIsEnabled = OldIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial.Tutorial2019Component.ForceDisableComponent_Blueprint
// (Event, Public, BlueprintEvent)
void UTutorial2019Component::ForceDisableComponent_Blueprint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.ForceDisableComponent_Blueprint");

	UTutorial2019Component_ForceDisableComponent_Blueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial.Tutorial2019Component.BeginOnServer
// (Final, Native, Public, BlueprintCallable)
void UTutorial2019Component::BeginOnServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.BeginOnServer");

	UTutorial2019Component_BeginOnServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial.Tutorial2019FunctionLibrary.GetNearestOnboardingSpawnPoint
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  CharacterToTeleport            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTeleportLocation       ReturnValue                    (Parm, OutParm, ReturnParm, ContainsInstancedReference)
struct FTeleportLocation UTutorial2019FunctionLibrary::STATIC_GetNearestOnboardingSpawnPoint(class AActor* CharacterToTeleport)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019FunctionLibrary.GetNearestOnboardingSpawnPoint");

	UTutorial2019FunctionLibrary_GetNearestOnboardingSpawnPoint_Params params;
	params.CharacterToTeleport = CharacterToTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Tutorial.TutorialHelpersBlueprintLibrary.FirePromptCompleted
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  AccessKey                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTutorialHelpersBlueprintLibrary::STATIC_FirePromptCompleted(class UClass* AccessKey, class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.TutorialHelpersBlueprintLibrary.FirePromptCompleted");

	UTutorialHelpersBlueprintLibrary_FirePromptCompleted_Params params;
	params.AccessKey = AccessKey;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial.TutorialManager.OnRep_SelectedTutorialClass
// (Final, Native, Private)
void UTutorialManager::OnRep_SelectedTutorialClass()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.TutorialManager.OnRep_SelectedTutorialClass");

	UTutorialManager_OnRep_SelectedTutorialClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial.CompanyOnboardingStarter.HasPrerequisites
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCompanyOnboardingStarter::HasPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.CompanyOnboardingStarter.HasPrerequisites");

	UCompanyOnboardingStarter_HasPrerequisites_Params params;

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
