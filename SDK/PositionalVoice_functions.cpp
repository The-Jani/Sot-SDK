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

// Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetNumberOfUnmutedRemotePlayers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       CurrentPlayer                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UPositionalVoiceTestFunctionLibrary::STATIC_GetNumberOfUnmutedRemotePlayers(class APlayerController* CurrentPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetNumberOfUnmutedRemotePlayers");

	UPositionalVoiceTestFunctionLibrary_GetNumberOfUnmutedRemotePlayers_Params params;
	params.CurrentPlayer = CurrentPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetNumberOfRegisteredChatEmitters
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UPositionalVoiceTestFunctionLibrary::STATIC_GetNumberOfRegisteredChatEmitters(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetNumberOfRegisteredChatEmitters");

	UPositionalVoiceTestFunctionLibrary_GetNumberOfRegisteredChatEmitters_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetMaxNumberOfAudibleChatEmitters
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UPositionalVoiceTestFunctionLibrary::STATIC_GetMaxNumberOfAudibleChatEmitters()
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetMaxNumberOfAudibleChatEmitters");

	UPositionalVoiceTestFunctionLibrary_GetMaxNumberOfAudibleChatEmitters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UVoiceChatEmitterInterface::GetVoiceLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation");

	UVoiceChatEmitterInterface_GetVoiceLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           EmitterProxy                   (Parm, OutParm)
void UVoiceChatEmitterInterface::GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy");

	UVoiceChatEmitterInterface_GetVoiceAudioEmitterProxy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EmitterProxy != nullptr)
		*EmitterProxy = params.EmitterProxy;

}


// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class UVoiceChatEmitterInterface> RelativeToThisEmitter          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UVoiceChatEmitterInterface::GetVoiceAttenuationScaler(const TScriptInterface<class UVoiceChatEmitterInterface>& RelativeToThisEmitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler");

	UVoiceChatEmitterInterface_GetVoiceAttenuationScaler_Params params;
	params.RelativeToThisEmitter = RelativeToThisEmitter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PositionalVoice.TestVoiceChatEmitter.GetVoiceLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ATestVoiceChatEmitter::GetVoiceLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.TestVoiceChatEmitter.GetVoiceLocation");

	ATestVoiceChatEmitter_GetVoiceLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PositionalVoice.TestVoiceChatEmitter.GetVoiceAudioEmitterProxy
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           EmitterProxy                   (Parm, OutParm)
void ATestVoiceChatEmitter::GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.TestVoiceChatEmitter.GetVoiceAudioEmitterProxy");

	ATestVoiceChatEmitter_GetVoiceAudioEmitterProxy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EmitterProxy != nullptr)
		*EmitterProxy = params.EmitterProxy;

}


// Function PositionalVoice.TestVoiceChatEmitter.GetVoiceAttenuationScaler
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class UVoiceChatEmitterInterface> RelativeToThisEmitter          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ATestVoiceChatEmitter::GetVoiceAttenuationScaler(const TScriptInterface<class UVoiceChatEmitterInterface>& RelativeToThisEmitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PositionalVoice.TestVoiceChatEmitter.GetVoiceAttenuationScaler");

	ATestVoiceChatEmitter_GetVoiceAttenuationScaler_Params params;
	params.RelativeToThisEmitter = RelativeToThisEmitter;

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
