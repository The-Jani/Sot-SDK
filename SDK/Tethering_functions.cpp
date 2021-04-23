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

// Function Tethering.DynamicCordRenderComponent.SetCordEndPointB
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         EndPointB                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDynamicCordRenderComponent::SetCordEndPointB(class USceneComponent* EndPointB)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tethering.DynamicCordRenderComponent.SetCordEndPointB");

	UDynamicCordRenderComponent_SetCordEndPointB_Params params;
	params.EndPointB = EndPointB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tethering.DynamicCordRenderComponent.SetCordEndPointA
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         EndPointA                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDynamicCordRenderComponent::SetCordEndPointA(class USceneComponent* EndPointA)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tethering.DynamicCordRenderComponent.SetCordEndPointA");

	UDynamicCordRenderComponent_SetCordEndPointA_Params params;
	params.EndPointA = EndPointA;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
