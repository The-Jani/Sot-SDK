#pragma once

// Name: SoT, Version: 2.1.1


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
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UOceanCrawlerAnimationData : public UAnimationData
{
public:
	struct FOceanCrawlerAnimationDataStructure         OceanCrawlerAnimationDataStructure;                        // 0x0028(0x0058) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OceanCrawlersAnimation.OceanCrawlerAnimationData");
		return ptr;
	}



};

// Class OceanCrawlersAnimation.OceanCrawlerAnimationInstance
// 0x0290 (FullSize[0x06D0] - InheritedSize[0x0440])
class UOceanCrawlerAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_3B6T[0x8];                                     // 0x0440(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FOceanCrawlerAnimationDataStructure         LoadedAnimations;                                          // 0x0448(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FActorVelocityData                          MovementData;                                              // 0x04A0(0x0018) (BlueprintVisible, BlueprintReadOnly)
	float                                              CurrentDirection;                                          // 0x04B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Q8MY[0x4];                                     // 0x04BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAthenaAnimationWeapon                      AttackAnims;                                               // 0x04C0(0x00B8) (BlueprintVisible, BlueprintReadOnly)
	bool                                               UseDefaultAnimations;                                      // 0x0578(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AnimationsLoaded;                                          // 0x0579(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SporeBreathActive;                                         // 0x057A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QR0M[0x5];                                     // 0x057B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomAnimationMontageStateMachine         MontagePlayer;                                             // 0x0580(0x00D8)
	struct FHitReactionAnimationState                  HitReacts;                                                 // 0x0658(0x0028) (BlueprintVisible)
	unsigned char                                      UnknownData_U0VF[0x50];                                    // 0x0680(0x0050) MISSED OFFSET (PADDING)


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
