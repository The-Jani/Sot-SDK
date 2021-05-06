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

// Function Pets.PetAIController.OnPerceptionUpdated
// (Native, Public)
// Parameters:
// TArray<class AActor*>          ChangedPerceivedActors         (Parm, ZeroConstructor)
void APetAIController::OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pets.PetAIController.OnPerceptionUpdated");

	APetAIController_OnPerceptionUpdated_Params params;
	params.ChangedPerceivedActors = ChangedPerceivedActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pets.PetAIController.GetAthenaAICharPathFollowingComp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAthenaAICharacterPathFollowingComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAthenaAICharacterPathFollowingComponent* APetAIController::GetAthenaAICharPathFollowingComp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pets.PetAIController.GetAthenaAICharPathFollowingComp");

	APetAIController_GetAthenaAICharPathFollowingComp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Pets.PetHangoutSpotComponent.OnRep_IsOwnerSinking
// (Final, Native, Private)
void UPetHangoutSpotComponent::OnRep_IsOwnerSinking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pets.PetHangoutSpotComponent.OnRep_IsOwnerSinking");

	UPetHangoutSpotComponent_OnRep_IsOwnerSinking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pets.PetOwnerComponent.Server_RequestDismissal
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void UPetOwnerComponent::Server_RequestDismissal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pets.PetOwnerComponent.Server_RequestDismissal");

	UPetOwnerComponent_Server_RequestDismissal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pets.PetsService.RemovePetFromActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InOwner                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPetsService::RemovePetFromActor(class AActor* InOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pets.PetsService.RemovePetFromActor");

	UPetsService_RemovePetFromActor_Params params;
	params.InOwner = InOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pets.PetsService.AddPetForActorAndWield
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InPetType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FPetCustomisation       InCustomisation                (ConstParm, Parm)
// class AActor*                  InOwner                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsWielded                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPetsService::AddPetForActorAndWield(class UClass* InPetType, const struct FPetCustomisation& InCustomisation, class AActor* InOwner, bool IsWielded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pets.PetsService.AddPetForActorAndWield");

	UPetsService_AddPetForActorAndWield_Params params;
	params.InPetType = InPetType;
	params.InCustomisation = InCustomisation;
	params.InOwner = InOwner;
	params.IsWielded = IsWielded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pets.PetsService.AddPetForActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InPetType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FPetCustomisation       InCustomisation                (ConstParm, Parm)
// class AActor*                  InOwner                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPetsService::AddPetForActor(class UClass* InPetType, const struct FPetCustomisation& InCustomisation, class AActor* InOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pets.PetsService.AddPetForActor");

	UPetsService_AddPetForActor_Params params;
	params.InPetType = InPetType;
	params.InCustomisation = InCustomisation;
	params.InOwner = InOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pets.WieldablePet.OnRep_HungerReactAnimationState
// (Final, Native, Private)
void AWieldablePet::OnRep_HungerReactAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pets.WieldablePet.OnRep_HungerReactAnimationState");

	AWieldablePet_OnRep_HungerReactAnimationState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pets.WieldablePet.OnRep_DropRequest
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<Pets_EWieldablePetDropRequestReason> PriorDropRequest               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWieldablePet::OnRep_DropRequest(TEnumAsByte<Pets_EWieldablePetDropRequestReason> PriorDropRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pets.WieldablePet.OnRep_DropRequest");

	AWieldablePet_OnRep_DropRequest_Params params;
	params.PriorDropRequest = PriorDropRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
