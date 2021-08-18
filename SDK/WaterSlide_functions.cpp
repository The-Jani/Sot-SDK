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

// Function WaterSlide.WaterSlide.SetEntranceCollisionComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     InEntranceCollisionComponent   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWaterSlide::SetEntranceCollisionComponent(class UPrimitiveComponent* InEntranceCollisionComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WaterSlide.WaterSlide.SetEntranceCollisionComponent");

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
	static UFunction* fn = UObject::FindObject<UFunction>("Function WaterSlide.WaterSlide.ComponentBeginOverlapCallBack");

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
