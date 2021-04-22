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

// Function AIShips.AIShipDebugFunctionLibrary.RequestAIShipForCrew
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                   CrewId                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAIShipDebugFunctionLibrary::STATIC_RequestAIShipForCrew(class UObject* WorldContextObject, const struct FGuid& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIShips.AIShipDebugFunctionLibrary.RequestAIShipForCrew");

	UAIShipDebugFunctionLibrary_RequestAIShipForCrew_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CrewId = CrewId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIShips.AIShipDebugFunctionLibrary.GenerateAIShipBattleDesc
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIShipServiceDataAsset* ServiceParams                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIShipEncounterBattleDesc ReturnValue                    (Parm, OutParm, ReturnParm)
struct FAIShipEncounterBattleDesc UAIShipDebugFunctionLibrary::STATIC_GenerateAIShipBattleDesc(class UObject* WorldContextObject, class UAIShipServiceDataAsset* ServiceParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIShips.AIShipDebugFunctionLibrary.GenerateAIShipBattleDesc");

	UAIShipDebugFunctionLibrary_GenerateAIShipBattleDesc_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ServiceParams = ServiceParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIShips.AthenaAIShipController.ApplyControllerParams
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAthenaAIControllerParamsDataAsset* ParamsAsset                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   InPawn                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAthenaAIShipController::ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIShips.AthenaAIShipController.ApplyControllerParams");

	AAthenaAIShipController_ApplyControllerParams_Params params;
	params.ParamsAsset = ParamsAsset;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIShips.CursedCrewCustomisationInterface.SetCursedCrewCustomisationProperties
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAIShipSailData         SailData                       (ConstParm, Parm, OutParm, ReferenceParm)
void UCursedCrewCustomisationInterface::SetCursedCrewCustomisationProperties(const struct FAIShipSailData& SailData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIShips.CursedCrewCustomisationInterface.SetCursedCrewCustomisationProperties");

	UCursedCrewCustomisationInterface_SetCursedCrewCustomisationProperties_Params params;
	params.SailData = SailData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
