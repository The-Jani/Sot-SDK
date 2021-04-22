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

// Function TestUtilities.DelegateTester.Callback
// (Final, RequiredAPI, Native, Public)
void UDelegateTester::Callback()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestUtilities.DelegateTester.Callback");

	UDelegateTester_Callback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestUtilities.DelegateTesterWithFNameParam.Callback
// (Final, RequiredAPI, Native, Public, HasOutParms)
// Parameters:
// struct FName                   InParam                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDelegateTesterWithFNameParam::Callback(const struct FName& InParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestUtilities.DelegateTesterWithFNameParam.Callback");

	UDelegateTesterWithFNameParam_Callback_Params params;
	params.InParam = InParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestUtilities.TestPrimitiveComponent.GetCollisionObjectType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Engine_ECollisionChannel> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<Engine_ECollisionChannel> UTestPrimitiveComponent::GetCollisionObjectType()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestUtilities.TestPrimitiveComponent.GetCollisionObjectType");

	UTestPrimitiveComponent_GetCollisionObjectType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TestUtilities.TestStaticMeshComponent.AddForce
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Force                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTestStaticMeshComponent::AddForce(const struct FVector& Force, const struct FName& BoneName, bool bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestUtilities.TestStaticMeshComponent.AddForce");

	UTestStaticMeshComponent_AddForce_Params params;
	params.Force = Force;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
