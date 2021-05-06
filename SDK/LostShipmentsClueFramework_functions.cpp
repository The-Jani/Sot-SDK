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

// Function LostShipmentsClueFramework.TaleQuestClueSiteService.GetClueSites
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FClueSite>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<struct FClueSite> UTaleQuestClueSiteService::GetClueSites()
{
	static auto fn = UObject::FindObject<UFunction>("Function LostShipmentsClueFramework.TaleQuestClueSiteService.GetClueSites");

	UTaleQuestClueSiteService_GetClueSites_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LostShipmentsClueFramework.ClueDestinationDescriptor.OnRep_DestinationInfo
// (Native, Public)
void UClueDestinationDescriptor::OnRep_DestinationInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function LostShipmentsClueFramework.ClueDestinationDescriptor.OnRep_DestinationInfo");

	UClueDestinationDescriptor_OnRep_DestinationInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary.CreateCluePointingToSite
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UClueConnectionConfig*   ConnectionConfiguration        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Difficulty                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>          AllowedClueTypes               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper)
// class UTaleQuestSelectorService* SelectorService                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 SourceLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FClueSite               TargetSite                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UClueDescriptor*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UClueDescriptor* UClueConnectionBlueprintFunctionLibrary::STATIC_CreateCluePointingToSite(class UClueConnectionConfig* ConnectionConfiguration, int Difficulty, TArray<class UClass*> AllowedClueTypes, class UTaleQuestSelectorService* SelectorService, const struct FVector& SourceLocation, const struct FClueSite& TargetSite)
{
	static auto fn = UObject::FindObject<UFunction>("Function LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary.CreateCluePointingToSite");

	UClueConnectionBlueprintFunctionLibrary_CreateCluePointingToSite_Params params;
	params.ConnectionConfiguration = ConnectionConfiguration;
	params.Difficulty = Difficulty;
	params.AllowedClueTypes = AllowedClueTypes;
	params.SelectorService = SelectorService;
	params.SourceLocation = SourceLocation;
	params.TargetSite = TargetSite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary.GiveClueToParticipant
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Participant                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClueDescriptor*         Clue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ClueSite                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UClueLifetimeBlueprintFunctionLibrary::STATIC_GiveClueToParticipant(class AActor* Participant, class UClueDescriptor* Clue, class UClass* ClueSite)
{
	static auto fn = UObject::FindObject<UFunction>("Function LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary.GiveClueToParticipant");

	UClueLifetimeBlueprintFunctionLibrary_GiveClueToParticipant_Params params;
	params.Participant = Participant;
	params.Clue = Clue;
	params.ClueSite = ClueSite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
