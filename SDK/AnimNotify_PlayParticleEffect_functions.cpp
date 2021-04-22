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

// Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.GetNotifyName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
struct FString UAnimNotify_PlayParticleEffect_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.GetNotifyName");

	UAnimNotify_PlayParticleEffect_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.Received_Notify
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequenceBase*       Animation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAnimNotify_PlayParticleEffect_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.Received_Notify");

	UAnimNotify_PlayParticleEffect_C_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
