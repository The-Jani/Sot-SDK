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

// Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentTitleText
// (Final, Native, Private)
void UAbandonedNoteClueDestinationContainerComponent::OnRep_CurrentTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentTitleText");

	UAbandonedNoteClueDestinationContainerComponent_OnRep_CurrentTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentClueDestination
// (Final, Native, Private)
void UAbandonedNoteClueDestinationContainerComponent::OnRep_CurrentClueDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentClueDestination");

	UAbandonedNoteClueDestinationContainerComponent_OnRep_CurrentClueDestination_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LostShipmentsClueVariants.ClueSiteCircleMapWieldable.OnRep_MapRadialIconData
// (Final, Native, Private)
void AClueSiteCircleMapWieldable::OnRep_MapRadialIconData()
{
	static auto fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.ClueSiteCircleMapWieldable.OnRep_MapRadialIconData");

	AClueSiteCircleMapWieldable_OnRep_MapRadialIconData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary.GiveClueDescriptorToItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AItemInfo*               ItemInfo                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClueDescriptor*         Clue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UClueVariantsBlueprintFunctionLibrary::STATIC_GiveClueDescriptorToItem(class AItemInfo* ItemInfo, class UClueDescriptor* Clue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary.GiveClueDescriptorToItem");

	UClueVariantsBlueprintFunctionLibrary_GiveClueDescriptorToItem_Params params;
	params.ItemInfo = ItemInfo;
	params.Clue = Clue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LostShipmentsClueVariants.CompositeClueDestinationDescriptor.OnRep_DestinationInfo
// (Native, Public)
void UCompositeClueDestinationDescriptor::OnRep_DestinationInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.CompositeClueDestinationDescriptor.OnRep_DestinationInfo");

	UCompositeClueDestinationDescriptor_OnRep_DestinationInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary.CreateEndOfGooseChaseClue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClueDescriptor*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UClueDescriptor* UGooseChaseClueBlueprintFunctionLibrary::STATIC_CreateEndOfGooseChaseClue()
{
	static auto fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary.CreateEndOfGooseChaseClue");

	UGooseChaseClueBlueprintFunctionLibrary_CreateEndOfGooseChaseClue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary.CreateCluePointingToShipwreck
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UClueConnectionConfig*   ConnectionConfiguration        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Difficulty                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>          AllowedClueTypes               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper)
// class UTaleQuestSelectorService* SelectorService                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 SourceLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class AShipwreck*              Shipwreck                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClueDescriptor*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UClueDescriptor* UShipwreckClueBlueprintFunctionLibrary::STATIC_CreateCluePointingToShipwreck(class UClueConnectionConfig* ConnectionConfiguration, int Difficulty, TArray<class UClass*> AllowedClueTypes, class UTaleQuestSelectorService* SelectorService, const struct FVector& SourceLocation, class AShipwreck* Shipwreck)
{
	static auto fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary.CreateCluePointingToShipwreck");

	UShipwreckClueBlueprintFunctionLibrary_CreateCluePointingToShipwreck_Params params;
	params.ConnectionConfiguration = ConnectionConfiguration;
	params.Difficulty = Difficulty;
	params.AllowedClueTypes = AllowedClueTypes;
	params.SelectorService = SelectorService;
	params.SourceLocation = SourceLocation;
	params.Shipwreck = Shipwreck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LostShipmentsClueVariants.TaleQuestClueInventoryService.SetClueTitleText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   InTitleText                    (ConstParm, Parm, OutParm, ReferenceParm)
void UTaleQuestClueInventoryService::SetClueTitleText(const struct FText& InTitleText)
{
	static auto fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.TaleQuestClueInventoryService.SetClueTitleText");

	UTaleQuestClueInventoryService_SetClueTitleText_Params params;
	params.InTitleText = InTitleText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LostShipmentsClueVariants.TaleQuestClueInventoryService.GetCollectedClueCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UTaleQuestClueInventoryService::GetCollectedClueCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.TaleQuestClueInventoryService.GetCollectedClueCount");

	UTaleQuestClueInventoryService_GetCollectedClueCount_Params params;

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
