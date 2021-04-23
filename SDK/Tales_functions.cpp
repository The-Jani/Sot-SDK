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

// Function Tales.TaleQuestCargoRunContractsService.GetContract
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   Guid                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTaleQuestCargoRunContract* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTaleQuestCargoRunContract* UTaleQuestCargoRunContractsService::GetContract(const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestCargoRunContractsService.GetContract");

	UTaleQuestCargoRunContractsService_GetContract_Params params;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Tales.TaleQuestCargoRunContractsService.AddContract
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<class UClass*>          InItems                        (Parm, ZeroConstructor, UObjectWrapper)
// class AActor*                  InCollectFromNPC               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  InDeliverToNPC                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InTimeLimitInMinutes           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FGuid UTaleQuestCargoRunContractsService::AddContract(TArray<class UClass*> InItems, class AActor* InCollectFromNPC, class AActor* InDeliverToNPC, int InTimeLimitInMinutes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestCargoRunContractsService.AddContract");

	UTaleQuestCargoRunContractsService_AddContract_Params params;
	params.InItems = InItems;
	params.InCollectFromNPC = InCollectFromNPC;
	params.InDeliverToNPC = InDeliverToNPC;
	params.InTimeLimitInMinutes = InTimeLimitInMinutes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Tales.TaleQuestMerchantContractsService.GetContract
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   Guid                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTaleQuestMerchantContract* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTaleQuestMerchantContract* UTaleQuestMerchantContractsService::GetContract(const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestMerchantContractsService.GetContract");

	UTaleQuestMerchantContractsService_GetContract_Params params;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Tales.TaleQuestMerchantContractsService.AddContract
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FTaleQuestDeliveryRequest> Requests                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   InDeliveryDestination          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InTimeLimit                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FGuid UTaleQuestMerchantContractsService::AddContract(TArray<struct FTaleQuestDeliveryRequest> Requests, const struct FName& InDeliveryDestination, float InTimeLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestMerchantContractsService.AddContract");

	UTaleQuestMerchantContractsService_AddContract_Params params;
	params.Requests = Requests;
	params.InDeliveryDestination = InDeliveryDestination;
	params.InTimeLimit = InTimeLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.SetDebugVoyageSeed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Seed                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTaleQuestSelectorServiceBlueprintFunctionLibrary::STATIC_SetDebugVoyageSeed(int Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.SetDebugVoyageSeed");

	UTaleQuestSelectorServiceBlueprintFunctionLibrary_SetDebugVoyageSeed_Params params;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.ResetVoyageDebugSeed
// (Final, Native, Static, Public, BlueprintCallable)
void UTaleQuestSelectorServiceBlueprintFunctionLibrary::STATIC_ResetVoyageDebugSeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.ResetVoyageDebugSeed");

	UTaleQuestSelectorServiceBlueprintFunctionLibrary_ResetVoyageDebugSeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tales.CutsceneResponsesTaleService.StartCutsceneResponseSheet
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UCutsceneResponsePlayerInterface> CutsceneResponsePlayer         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// class UClass*                  ResponseSheetClass             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UCutsceneResponseSheet*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCutsceneResponseSheet* UCutsceneResponsesTaleService::StartCutsceneResponseSheet(class AActor* TargetActor, const TScriptInterface<class UCutsceneResponsePlayerInterface>& CutsceneResponsePlayer, class UClass* ResponseSheetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tales.CutsceneResponsesTaleService.StartCutsceneResponseSheet");

	UCutsceneResponsesTaleService_StartCutsceneResponseSheet_Params params;
	params.TargetActor = TargetActor;
	params.CutsceneResponsePlayer = CutsceneResponsePlayer;
	params.ResponseSheetClass = ResponseSheetClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Tales.CutsceneResponsesTaleService.ClearAllActiveResponseSheets
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void UCutsceneResponsesTaleService::ClearAllActiveResponseSheets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tales.CutsceneResponsesTaleService.ClearAllActiveResponseSheets");

	UCutsceneResponsesTaleService_ClearAllActiveResponseSheets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tales.CutsceneResponsesTaleService.AddResponseSheetRelevantActor
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCutsceneResponsesTaleService::AddResponseSheetRelevantActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tales.CutsceneResponsesTaleService.AddResponseSheetRelevantActor");

	UCutsceneResponsesTaleService_AddResponseSheetRelevantActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tales.TaleQuestSelectorService.GetRandomIntegerInRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Minimum                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Maximum                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UTaleQuestSelectorService::GetRandomIntegerInRange(int Minimum, int Maximum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestSelectorService.GetRandomIntegerInRange");

	UTaleQuestSelectorService_GetRandomIntegerInRange_Params params;
	params.Minimum = Minimum;
	params.Maximum = Maximum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Tales.TaleQuestMapService.UpdateMerchantMap
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   MapId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTaleQuestDeliverableItem Deliverable                    (Parm)
void UTaleQuestMapService::UpdateMerchantMap(const struct FName& MapId, int Index, const struct FTaleQuestDeliverableItem& Deliverable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestMapService.UpdateMerchantMap");

	UTaleQuestMapService_UpdateMerchantMap_Params params;
	params.MapId = MapId;
	params.Index = Index;
	params.Deliverable = Deliverable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tales.TaleQuestMapService.AdvanceRiddleMap
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   MapId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTaleQuestMapService::AdvanceRiddleMap(const struct FName& MapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestMapService.AdvanceRiddleMap");

	UTaleQuestMapService_AdvanceRiddleMap_Params params;
	params.MapId = MapId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
