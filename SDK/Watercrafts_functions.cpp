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

// Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnRep_CurrentWatercraft
// (Final, Native, Private)
// Parameters:
// class AActor*                  PreviousWatercraft             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemProxyWatercraftTrackerComponent::OnRep_CurrentWatercraft(class AActor* PreviousWatercraft)
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnRep_CurrentWatercraft");

	UItemProxyWatercraftTrackerComponent_OnRep_CurrentWatercraft_Params params;
	params.PreviousWatercraft = PreviousWatercraft;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnCurrentWatercraftDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedWatercraft            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemProxyWatercraftTrackerComponent::OnCurrentWatercraftDestroyed(class AActor* DestroyedWatercraft)
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnCurrentWatercraftDestroyed");

	UItemProxyWatercraftTrackerComponent_OnCurrentWatercraftDestroyed_Params params;
	params.DestroyedWatercraft = DestroyedWatercraft;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Watercrafts.Watercraft.OnRigidBodyWake
// (Final, Native, Protected)
// Parameters:
// struct FName                   InBoneName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWatercraft::OnRigidBodyWake(const struct FName& InBoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.Watercraft.OnRigidBodyWake");

	AWatercraft_OnRigidBodyWake_Params params;
	params.InBoneName = InBoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Watercrafts.Watercraft.OnRigidBodySleep
// (Final, Native, Protected)
// Parameters:
// struct FName                   InBoneName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWatercraft::OnRigidBodySleep(const struct FName& InBoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.Watercraft.OnRigidBodySleep");

	AWatercraft_OnRigidBodySleep_Params params;
	params.InBoneName = InBoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Watercrafts.Rowboat.SetAlwaysEnabledInteractables
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UChildActorComponent*> InAlwaysEnabledInteractables   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void ARowboat::SetAlwaysEnabledInteractables(TArray<class UChildActorComponent*> InAlwaysEnabledInteractables)
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.Rowboat.SetAlwaysEnabledInteractables");

	ARowboat_SetAlwaysEnabledInteractables_Params params;
	params.InAlwaysEnabledInteractables = InAlwaysEnabledInteractables;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Watercrafts.Rowboat.OnRep_IsSinking
// (Final, Native, Private)
void ARowboat::OnRep_IsSinking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.Rowboat.OnRep_IsSinking");

	ARowboat_OnRep_IsSinking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Watercrafts.RowingCompositeInputHandler.OnUseRightOar
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<AthenaInput_EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> URowingCompositeInputHandler::OnUseRightOar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.RowingCompositeInputHandler.OnUseRightOar");

	URowingCompositeInputHandler_OnUseRightOar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Watercrafts.RowingCompositeInputHandler.OnUseLeftOar
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<AthenaInput_EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> URowingCompositeInputHandler::OnUseLeftOar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.RowingCompositeInputHandler.OnUseLeftOar");

	URowingCompositeInputHandler_OnUseLeftOar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Watercrafts.RowingCompositeInputHandler.OnStopUseRightOar
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<AthenaInput_EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> URowingCompositeInputHandler::OnStopUseRightOar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.RowingCompositeInputHandler.OnStopUseRightOar");

	URowingCompositeInputHandler_OnStopUseRightOar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Watercrafts.RowingCompositeInputHandler.OnStopUseLeftOar
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<AthenaInput_EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> URowingCompositeInputHandler::OnStopUseLeftOar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.RowingCompositeInputHandler.OnStopUseLeftOar");

	URowingCompositeInputHandler_OnStopUseLeftOar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Watercrafts.RowingCompositeInputHandler.OnBrakeRightOar
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<AthenaInput_EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> URowingCompositeInputHandler::OnBrakeRightOar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.RowingCompositeInputHandler.OnBrakeRightOar");

	URowingCompositeInputHandler_OnBrakeRightOar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Watercrafts.RowingCompositeInputHandler.OnBrakeLeftOar
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<AthenaInput_EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> URowingCompositeInputHandler::OnBrakeLeftOar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.RowingCompositeInputHandler.OnBrakeLeftOar");

	URowingCompositeInputHandler_OnBrakeLeftOar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Watercrafts.WatercraftBlueprintFunctionLibrary.SpawnWatercraft
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  WatercraftClass                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                Rotation                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWatercraft*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AWatercraft* UWatercraftBlueprintFunctionLibrary::STATIC_SpawnWatercraft(class UObject* WorldContextObject, class UClass* WatercraftClass, const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.WatercraftBlueprintFunctionLibrary.SpawnWatercraft");

	UWatercraftBlueprintFunctionLibrary_SpawnWatercraft_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WatercraftClass = WatercraftClass;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Watercrafts.WatercraftTrackerComponent.OnWatercraftDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  WatercraftActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWatercraftTrackerComponent::OnWatercraftDestroyed(class AActor* WatercraftActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.WatercraftTrackerComponent.OnWatercraftDestroyed");

	UWatercraftTrackerComponent_OnWatercraftDestroyed_Params params;
	params.WatercraftActor = WatercraftActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
