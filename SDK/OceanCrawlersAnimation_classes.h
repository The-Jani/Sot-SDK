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

// Class OceanCrawlersAnimation.OceanCrawlerAnimationData
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UOceanCrawlerAnimationData : public UAnimationData
{
public:
	struct FOceanCrawlerAnimationDataStructure         OceanCrawlerAnimationDataStructure;                        // 0x0028(0x0050) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OceanCrawlersAnimation.OceanCrawlerAnimationData");
		return ptr;
	}



};

// Class OceanCrawlersAnimation.OceanCrawlerAnimationInstance
// 0x0280 (FullSize[0x06C0] - InheritedSize[0x0440])
class UOceanCrawlerAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_ARHO[0x8];                                     // 0x0440(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FOceanCrawlerAnimationDataStructure         LoadedAnimations;                                          // 0x0448(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FActorVelocityData                          MovementData;                                              // 0x0498(0x0018) (BlueprintVisible, BlueprintReadOnly)
	float                                              CurrentDirection;                                          // 0x04B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_205J[0x4];                                     // 0x04B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAthenaAnimationWeapon                      AttackAnims;                                               // 0x04B8(0x00B8) (BlueprintVisible, BlueprintReadOnly)
	bool                                               UseDefaultAnimations;                                      // 0x0570(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AnimationsLoaded;                                          // 0x0571(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SporeBreathActive;                                         // 0x0572(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GXT9[0x5];                                     // 0x0573(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomAnimationMontageStateMachine         MontagePlayer;                                             // 0x0578(0x00D8)
	struct FHitReactionAnimationState                  HitReacts;                                                 // 0x0650(0x0028) (BlueprintVisible)
	unsigned char                                      UnknownData_L1LL[0x48];                                    // 0x0678(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OceanCrawlersAnimation.OceanCrawlerAnimationInstance");
		return ptr;
	}



	void ClearActiveAttack();
	void BeginNewAttack();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
