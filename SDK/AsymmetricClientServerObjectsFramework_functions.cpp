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

// Function AsymmetricClientServerObjectsFramework.AsymmetricObjectServerManager.OnRep_AsymmetricObjectAsset
// (Final, RequiredAPI, Native, Private)
void AAsymmetricObjectServerManager::OnRep_AsymmetricObjectAsset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AsymmetricClientServerObjectsFramework.AsymmetricObjectServerManager.OnRep_AsymmetricObjectAsset");

	AAsymmetricObjectServerManager_OnRep_AsymmetricObjectAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
