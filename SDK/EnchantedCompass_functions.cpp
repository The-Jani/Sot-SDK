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

// Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.GetFloatMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float APrototypeMultiTargetEnchantedCompass::GetFloatMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.GetFloatMax");

	APrototypeMultiTargetEnchantedCompass_GetFloatMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.CalculateDesiredYaw
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FRotator                CompassRotation                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float APrototypeMultiTargetEnchantedCompass::CalculateDesiredYaw(const struct FRotator& CompassRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.CalculateDesiredYaw");

	APrototypeMultiTargetEnchantedCompass_CalculateDesiredYaw_Params params;
	params.CompassRotation = CompassRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.BP_GetTargetLocations
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<struct FVector> APrototypeMultiTargetEnchantedCompass::BP_GetTargetLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.BP_GetTargetLocations");

	APrototypeMultiTargetEnchantedCompass_BP_GetTargetLocations_Params params;

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
