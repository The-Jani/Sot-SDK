#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetNumberOfUnmutedRemotePlayers
struct UPositionalVoiceTestFunctionLibrary_GetNumberOfUnmutedRemotePlayers_Params
{
	class APlayerController*                           CurrentPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetNumberOfRegisteredChatEmitters
struct UPositionalVoiceTestFunctionLibrary_GetNumberOfRegisteredChatEmitters_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PositionalVoice.PositionalVoiceTestFunctionLibrary.GetMaxNumberOfAudibleChatEmitters
struct UPositionalVoiceTestFunctionLibrary_GetMaxNumberOfAudibleChatEmitters_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation
struct UVoiceChatEmitterInterface_GetVoiceLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy
struct UVoiceChatEmitterInterface_GetVoiceAudioEmitterProxy_Params
{
	struct FWwiseEmitter                               EmitterProxy;                                              // (Parm, OutParm)
};

// Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler
struct UVoiceChatEmitterInterface_GetVoiceAttenuationScaler_Params
{
	TScriptInterface<class UVoiceChatEmitterInterface> RelativeToThisEmitter;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PositionalVoice.TestVoiceChatEmitter.GetVoiceLocation
struct ATestVoiceChatEmitter_GetVoiceLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PositionalVoice.TestVoiceChatEmitter.GetVoiceAudioEmitterProxy
struct ATestVoiceChatEmitter_GetVoiceAudioEmitterProxy_Params
{
	struct FWwiseEmitter                               EmitterProxy;                                              // (Parm, OutParm)
};

// Function PositionalVoice.TestVoiceChatEmitter.GetVoiceAttenuationScaler
struct ATestVoiceChatEmitter_GetVoiceAttenuationScaler_Params
{
	TScriptInterface<class UVoiceChatEmitterInterface> RelativeToThisEmitter;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
