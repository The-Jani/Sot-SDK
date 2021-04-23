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

// Function WaterSlide.WaterSlide.SetEntranceCollisionComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     InEntranceCollisionComponent   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWaterSlide::SetEntranceCollisionComponent(class UPrimitiveComponent* InEntranceCollisionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSlide.WaterSlide.SetEntranceCollisionComponent");

	AWaterSlide_SetEntranceCollisionComponent_Params params;
	params.InEntranceCollisionComponent = InEntranceCollisionComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WaterSlide.WaterSlide.ComponentBeginOverlapCallBack
// (Final, Native, Private, HasOutParms)
// Parameters:
// class AActor*                  InOtherActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     InOtherComp                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InOtherBodyIndex               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           InFromSweep                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              InSweepResult                  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AWaterSlide::ComponentBeginOverlapCallBack(class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int InOtherBodyIndex, bool InFromSweep, const struct FHitResult& InSweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSlide.WaterSlide.ComponentBeginOverlapCallBack");

	AWaterSlide_ComponentBeginOverlapCallBack_Params params;
	params.InOtherActor = InOtherActor;
	params.InOtherComp = InOtherComp;
	params.InOtherBodyIndex = InOtherBodyIndex;
	params.InFromSweep = InFromSweep;
	params.InSweepResult = InSweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WaterSlide.WaterSlideCompositeInputHandler.OnMoveRight
// (Final, Native, Private)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<AthenaInput_EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> UWaterSlideCompositeInputHandler::OnMoveRight(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSlide.WaterSlideCompositeInputHandler.OnMoveRight");

	UWaterSlideCompositeInputHandler_OnMoveRight_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WaterSlide.WaterSlideCompositeInputHandler.OnMoveForward
// (Final, Native, Private)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<AthenaInput_EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> UWaterSlideCompositeInputHandler::OnMoveForward(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSlide.WaterSlideCompositeInputHandler.OnMoveForward");

	UWaterSlideCompositeInputHandler_OnMoveForward_Params params;
	params.Value = Value;

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
