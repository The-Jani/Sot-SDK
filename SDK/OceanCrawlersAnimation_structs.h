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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OceanCrawlersAnimation.OceanCrawlerSporeBreathAnimationData
// 0x0018
struct FOceanCrawlerSporeBreathAnimationData
{
	class UBlendSpace1D*                               Into;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                               Locomotion;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                               Outof;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct OceanCrawlersAnimation.OceanCrawlerLocomotionAnimationDataStructure
// 0x0018
struct FOceanCrawlerLocomotionAnimationDataStructure
{
	class UAnimSequence*                               Idle;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                               LocomotionOutOf;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                                 Locomotion;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct OceanCrawlersAnimation.OceanCrawlerAnimationDataStructure
// 0x0050
struct FOceanCrawlerAnimationDataStructure
{
	struct FOceanCrawlerLocomotionAnimationDataStructure LocomotionData;                                            // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UCustomAnimationMontageDefinitionListingDataAsset* MontageData;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaAnimationWeaponDataAsset*             AttackAnimations;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitReactionAnimationData                   HitReactionData;                                           // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FOceanCrawlerSporeBreathAnimationData       SporeBreathData;                                           // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FCustomAnimationMontageId                   DeathMontageId;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
