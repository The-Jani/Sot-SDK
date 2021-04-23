#pragma once

// Name: SoT, Version: 2.1.0.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class PositionalVoice.MockVoiceChatRendererRetriever
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UMockVoiceChatRendererRetriever : public UObject
{
public:
	unsigned char                                      UnknownData_UK0N[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.MockVoiceChatRendererRetriever");
		return ptr;
	}



};

// Class PositionalVoice.VoiceChatRenderer
// 0x0158 (FullSize[0x0180] - InheritedSize[0x0028])
class UVoiceChatRenderer : public UObject
{
public:
	unsigned char                                      UnknownData_5YCS[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 AttenuatedVoiceEvent;                                      // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 AttenuatedAndSpatialisedVoiceEvent;                        // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 UnattenuatedVoiceEvent;                                    // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PreBufferInMilliseconds;                                   // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ChatRoutingListenerIndex;                                  // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EmitterHoldInSeconds;                                      // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DGQC[0x124];                                   // 0x005C(0x0124) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.VoiceChatRenderer");
		return ptr;
	}



};

// Class PositionalVoice.PositionalVoiceTestFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPositionalVoiceTestFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.PositionalVoiceTestFunctionLibrary");
		return ptr;
	}



	int STATIC_GetNumberOfUnmutedRemotePlayers(class APlayerController* CurrentPlayer);
	int STATIC_GetNumberOfRegisteredChatEmitters(class UObject* WorldContextObject);
	int STATIC_GetMaxNumberOfAudibleChatEmitters();
};

// Class PositionalVoice.VoiceChatEmitterInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoiceChatEmitterInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.VoiceChatEmitterInterface");
		return ptr;
	}



	struct FVector GetVoiceLocation();
	void GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy);
	float GetVoiceAttenuationScaler(const TScriptInterface<class UVoiceChatEmitterInterface>& RelativeToThisEmitter);
};

// Class PositionalVoice.VoiceChatRendererInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoiceChatRendererInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.VoiceChatRendererInterface");
		return ptr;
	}



};

// Class PositionalVoice.MockVoiceChatRenderer
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UMockVoiceChatRenderer : public UObject
{
public:
	unsigned char                                      UnknownData_N4Q2[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.MockVoiceChatRenderer");
		return ptr;
	}



};

// Class PositionalVoice.VoiceChatRendererRetreivalInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoiceChatRendererRetreivalInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.VoiceChatRendererRetreivalInterface");
		return ptr;
	}



};

// Class PositionalVoice.TestVoiceChatEmitter
// 0x0068 (FullSize[0x0490] - InheritedSize[0x0428])
class ATestVoiceChatEmitter : public AActor
{
public:
	unsigned char                                      UnknownData_B0VO[0x58];                                    // 0x0428(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseObjectPoolWrapper*                     PoolWrapper;                                               // 0x0480(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8C1T[0x8];                                     // 0x0488(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.TestVoiceChatEmitter");
		return ptr;
	}



	struct FVector GetVoiceLocation();
	void GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy);
	float GetVoiceAttenuationScaler(const TScriptInterface<class UVoiceChatEmitterInterface>& RelativeToThisEmitter);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
