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

// Function Cleanliness.CleanlinessComponent.OnRep_CleanlinessInfo
// (Final, Native, Private)
void UCleanlinessComponent::OnRep_CleanlinessInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cleanliness.CleanlinessComponent.OnRep_CleanlinessInfo");

	UCleanlinessComponent_OnRep_CleanlinessInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
