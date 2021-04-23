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

// Function ShantyPuzzle.ShantyPuzzleComponent.OnEndOverlap
// (Final, Native, Public)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InOtherBodyIndex               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShantyPuzzleComponent::OnEndOverlap(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShantyPuzzle.ShantyPuzzleComponent.OnEndOverlap");

	UShantyPuzzleComponent_OnEndOverlap_Params params;
	params.InActor = InActor;
	params.InComponent = InComponent;
	params.InOtherBodyIndex = InOtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ShantyPuzzle.ShantyPuzzleComponent.OnBeginOverlap
// (Final, Native, Public, HasOutParms)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InOtherBodyIndex               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UShantyPuzzleComponent::OnBeginOverlap(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShantyPuzzle.ShantyPuzzleComponent.OnBeginOverlap");

	UShantyPuzzleComponent_OnBeginOverlap_Params params;
	params.InActor = InActor;
	params.InComponent = InComponent;
	params.InOtherBodyIndex = InOtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
