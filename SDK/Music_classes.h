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

// Class Music.MusicZoneInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMusicZoneInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Music.MusicZoneInterface");
		return ptr;
	}



	bool CanPlayForPlayer(class AActor* Player);
};

// Class Music.MusicZoneComponent
// 0x00B0 (FullSize[0x0360] - InheritedSize[0x02B0])
class UMusicZoneComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_ZCEI[0x8];                                     // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InnerRadius;                                               // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OuterRadius;                                               // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LocationRTPC;                                              // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LocalRTPC;                                                 // 0x02C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EPV6[0x7];                                     // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 PlayEvent;                                                 // 0x02D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopEvent;                                                 // 0x02D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWwiseEvent*>                         OneShotEvents;                                             // 0x02E0(0x0010) (Edit, ZeroConstructor)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                               // 0x02F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableAfterPlayThrough;                                   // 0x02F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ActivateOnBeginPlay;                                       // 0x02F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5W1S[0x66];                                    // 0x02FA(0x0066) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Music.MusicZoneComponent");
		return ptr;
	}



	struct FWwiseEmitter GetEmitter();
	void DisableZone();
	void Client_StopMusicAndDisableZone();
	void Client_PlayOneShot(int Index);
	void ActivateZone();
};

// Class Music.AISpawnerMusicZoneComponent
// 0x0030 (FullSize[0x0390] - InheritedSize[0x0360])
class UAISpawnerMusicZoneComponent : public UMusicZoneComponent
{
public:
	class UWwiseEvent*                                 BattleWonEvent;                                            // 0x0360(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISpawner*                                  AISpawner;                                                 // 0x0368(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APawn*>                               SpawnerPawns;                                              // 0x0370(0x0010) (Net, ZeroConstructor)
	TEnumAsByte<Music_EAISpawnerMusicZoneState>        SpawnerState;                                              // 0x0380(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N7CY[0xF];                                     // 0x0381(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Music.AISpawnerMusicZoneComponent");
		return ptr;
	}



	void OnRep_SpawnerState();
};

// Class Music.SynchedMusicZoneComponent
// 0x0030 (FullSize[0x0390] - InheritedSize[0x0360])
class USynchedMusicZoneComponent : public UMusicZoneComponent
{
public:
	float                                              StartDelayTime;                                            // 0x0360(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayFromStartTimeMS;                                       // 0x0364(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KKCX[0x28];                                    // 0x0368(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Music.SynchedMusicZoneComponent");
		return ptr;
	}



};

// Class Music.MusicZoneServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMusicZoneServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Music.MusicZoneServiceInterface");
		return ptr;
	}



};

// Class Music.MusicZoneService
// 0x00A8 (FullSize[0x04D0] - InheritedSize[0x0428])
class AMusicZoneService : public AActor
{
public:
	unsigned char                                      UnknownData_A80D[0xA8];                                    // 0x0428(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Music.MusicZoneService");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
