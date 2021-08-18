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

// Function MerchantContracts.MerchantContractsBlueprintLibrary.GetDateFromTimeLimit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          TimeLimit                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UMerchantContractsBlueprintLibrary::STATIC_GetDateFromTimeLimit(float TimeLimit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MerchantContracts.MerchantContractsBlueprintLibrary.GetDateFromTimeLimit");

	UMerchantContractsBlueprintLibrary_GetDateFromTimeLimit_Params params;
	params.TimeLimit = TimeLimit;

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
