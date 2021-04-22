#pragma once

// Name: SoT, Version: 2.1.0


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

// Class OceanCrawlers.BTTask_BroadcastOceanCrawlerAbilityAudioEvent
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_BroadcastOceanCrawlerAbilityAudioEvent : public UBTTaskNode
{
public:
	struct FEventOceanCrawlerAIAbilityAudioRequest     OceanCrawlerAIAbilityToBroadcast;                          // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData_Q6EL[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OceanCrawlers.BTTask_BroadcastOceanCrawlerAbilityAudioEvent");
		return ptr;
	}



};

// Class OceanCrawlers.OceanCrawlerAudioParamsDataAsset
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UOceanCrawlerAudioParamsDataAsset : public UDataAsset
{
public:
	class UWwiseEvent*                                 StartHermitBurrowingLoop;                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopHermitBurrowingLoop;                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayHermitBurrowDownOneShot;                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayHermitBurrowEmergeOneShot;                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayHermitBurrowHealTargetOneShot;                         // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayHermitSporeBreathOneShot;                              // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayHermitBullRushChargeUpOneShot;                         // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayHermitBullRushChargeGoOneShot;                         // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayHermitBullRushStaticImpactOneShot;                     // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayCrabPummelWindBackOneShot;                             // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayCrabPummelImpactOneShot;                               // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayCrabCoralShieldStartOneShot;                           // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayCrabCoralShieldEndOneShot;                             // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayCrabCoralShieldInterruptedOneShot;                     // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayCrabCoralShieldAppliedOneShot;                         // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayCrabCoralShieldStopApplyingOneShot;                    // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayEelelectricElectricShieldStartChargeOneShot;           // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayEelelectricElectricShieldCastOneShot;                  // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayEelelectricElectricShieldInterruptedOneShot;           // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayEelelectricElectricShieldAppliedToTargetOneShot;       // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayEelelectricElectricShieldHitToChainOneShot;            // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayEelelectricElectricShieldFinishedOnTargetOneShot;      // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayEelelectricEelThrowChargeOneShot;                      // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OceanCrawlers.OceanCrawlerAudioParamsDataAsset");
		return ptr;
	}



};

// Class OceanCrawlers.OceanCrawlerAudioComponent
// 0x0060 (FullSize[0x0340] - InheritedSize[0x02E0])
class UOceanCrawlerAudioComponent : public UAICharacterAudioComponent
{
public:
	class UOceanCrawlerAudioParamsDataAsset*           AudioDataAsset;                                            // 0x02E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AActor*                                      CachedOwner;                                               // 0x02E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3I0S[0x50];                                    // 0x02F0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OceanCrawlers.OceanCrawlerAudioComponent");
		return ptr;
	}



	void Multicast_PlayAudio_StopHermitBurrowingLoop();
	void Multicast_PlayAudio_StartHermitBurrowingLoop();
	void Multicast_PlayAudio_PlayHermitSporeBreathOneShot();
	void Multicast_PlayAudio_PlayHermitBurrowHealTargetOneShot();
	void Multicast_PlayAudio_PlayHermitBurrowEmergeOneShot();
	void Multicast_PlayAudio_PlayHermitBurrowDownOneShot();
	void Multicast_PlayAudio_PlayHermitBullRushStaticImpactOneShot();
	void Multicast_PlayAudio_PlayHermitBullRushChargeUpOneShot();
	void Multicast_PlayAudio_PlayHermitBullRushChargeGoOneShot();
	void Multicast_PlayAudio_PlayEelelectricElectricShieldStartChargeOneShot();
	void Multicast_PlayAudio_PlayEelelectricElectricShieldInterruptedOneShot();
	void Multicast_PlayAudio_PlayEelelectricElectricShieldHitToChainOneShot();
	void Multicast_PlayAudio_PlayEelelectricElectricShieldFinishedOnTargetOneShot();
	void Multicast_PlayAudio_PlayEelelectricElectricShieldCastOneShot();
	void Multicast_PlayAudio_PlayEelelectricElectricShieldAppliedToTargetOneShot();
	void Multicast_PlayAudio_PlayEelelectricEelThrowChargeOneShot();
	void Multicast_PlayAudio_PlayCrabPummelWindBackOneShot();
	void Multicast_PlayAudio_PlayCrabPummelImpactOneShot();
	void Multicast_PlayAudio_PlayCrabCoralShieldStopApplyingOneShot();
	void Multicast_PlayAudio_PlayCrabCoralShieldStartOneShot();
	void Multicast_PlayAudio_PlayCrabCoralShieldInterruptedOneShot();
	void Multicast_PlayAudio_PlayCrabCoralShieldEndOneShot();
	void Multicast_PlayAudio_PlayCrabCoralShieldAppliedOneShot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
