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

// Class AthenaAIAbilities.AreaOfEffectHealAIAbilityType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAreaOfEffectHealAIAbilityType : public UAthenaAIAbilityType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.AreaOfEffectHealAIAbilityType");
		return ptr;
	}



};

// Class AthenaAIAbilities.MeleeAIAbilityType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMeleeAIAbilityType : public UAthenaAIAbilityType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.MeleeAIAbilityType");
		return ptr;
	}



};

// Class AthenaAIAbilities.AreaOfEffectHealAIAbility
// 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
class UAreaOfEffectHealAIAbility : public UAthenaAIAbility
{
public:
	unsigned char                                      UnknownData_VYQY[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      HealAreaOfEffectActor;                                     // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FOON[0x10];                                    // 0x0090(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.AreaOfEffectHealAIAbility");
		return ptr;
	}



};

// Class AthenaAIAbilities.AreaOfEffectHealAIAbilityParams
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
class UAreaOfEffectHealAIAbilityParams : public UAthenaAIAbilityParams
{
public:
	float                                              ChanceToGoOnCooldownInsteadOfExecuting;                    // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealthPercentageThresholdToHeal;                           // 0x00CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      StatusEffectZone;                                          // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              MinimumTimeSpentHealing;                                   // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaximumTimeSpentHealing;                                   // 0x00DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.AreaOfEffectHealAIAbilityParams");
		return ptr;
	}



};

// Class AthenaAIAbilities.AshenFireStatus
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAshenFireStatus : public UStatusBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.AshenFireStatus");
		return ptr;
	}



};

// Class AthenaAIAbilities.BullRushAIAbilityType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBullRushAIAbilityType : public UAthenaAIAbilityType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.BullRushAIAbilityType");
		return ptr;
	}



};

// Class AthenaAIAbilities.BurrowEruptDamagerType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBurrowEruptDamagerType : public UDamagerType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.BurrowEruptDamagerType");
		return ptr;
	}



};

// Class AthenaAIAbilities.CoralShieldStatus
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCoralShieldStatus : public UStatusBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.CoralShieldStatus");
		return ptr;
	}



};

// Class AthenaAIAbilities.EelSlapAIAbilityType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEelSlapAIAbilityType : public UAthenaAIAbilityType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.EelSlapAIAbilityType");
		return ptr;
	}



};

// Class AthenaAIAbilities.EelSlapStatus
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEelSlapStatus : public UStatusBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.EelSlapStatus");
		return ptr;
	}



};

// Class AthenaAIAbilities.EelThrowAIAbility
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UEelThrowAIAbility : public UAthenaAIAbility
{
public:
	class UBlackboardComponent*                        CachedBlackboardComponent;                                 // 0x0078(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.EelThrowAIAbility");
		return ptr;
	}



};

// Class AthenaAIAbilities.EelThrowAIAbilityParams
// 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
class UEelThrowAIAbilityParams : public UAthenaAIAbilityParams
{
public:
	struct FWeightedProbabilityRange                   MinMaxNumberOfAttacksBeforeEnd;                            // 0x00C8(0x0020) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.EelThrowAIAbilityParams");
		return ptr;
	}



};

// Class AthenaAIAbilities.EelThrowAIAbilityType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEelThrowAIAbilityType : public UAthenaAIAbilityType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.EelThrowAIAbilityType");
		return ptr;
	}



};

// Class AthenaAIAbilities.ElectricShieldBuffInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UElectricShieldBuffInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.ElectricShieldBuffInterface");
		return ptr;
	}



};

// Class AthenaAIAbilities.ElectricShieldBuffComponent
// 0x0098 (FullSize[0x0160] - InheritedSize[0x00C8])
class UElectricShieldBuffComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_NWL0[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             ShieldVFXAsset;                                            // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       VfxSocketName;                                             // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsShieldActive;                                            // 0x00E0(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_XWQN[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    ShieldEffectComponent;                                     // 0x00E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GPSX[0x70];                                    // 0x00F0(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.ElectricShieldBuffComponent");
		return ptr;
	}



	void OnRep_IsShieldActive();
	void DeactivateShield();
};

// Class AthenaAIAbilities.ElectricShieldStatus
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UElectricShieldStatus : public UStatusBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.ElectricShieldStatus");
		return ptr;
	}



};

// Class AthenaAIAbilities.ImpactMeleeAttackEelSlapId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UImpactMeleeAttackEelSlapId : public UImpactProjectileId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.ImpactMeleeAttackEelSlapId");
		return ptr;
	}



};

// Class AthenaAIAbilities.MeleeAIAbility
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UMeleeAIAbility : public UAthenaAIAbility
{
public:
	unsigned char                                      UnknownData_XTLQ[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.MeleeAIAbility");
		return ptr;
	}



};

// Class AthenaAIAbilities.MeleeAIAbilityParams
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UMeleeAIAbilityParams : public UAthenaAIAbilityParams
{
public:
	TArray<struct FMeleeAttackIdWeights>               MeleeAttacks;                                              // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.MeleeAIAbilityParams");
		return ptr;
	}



};

// Class AthenaAIAbilities.EelSlapAIAbilityParams
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UEelSlapAIAbilityParams : public UMeleeAIAbilityParams
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.EelSlapAIAbilityParams");
		return ptr;
	}



};

// Class AthenaAIAbilities.EelSlapAIAbility
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UEelSlapAIAbility : public UMeleeAIAbility
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.EelSlapAIAbility");
		return ptr;
	}



};

// Class AthenaAIAbilities.MeleeAttackId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMeleeAttackId : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.MeleeAttackId");
		return ptr;
	}



};

// Class AthenaAIAbilities.ComboMeleeAttackId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UComboMeleeAttackId : public UMeleeAttackId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.ComboMeleeAttackId");
		return ptr;
	}



};

// Class AthenaAIAbilities.HeavyMeleeAttackId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHeavyMeleeAttackId : public UMeleeAttackId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.HeavyMeleeAttackId");
		return ptr;
	}



};

// Class AthenaAIAbilities.LightMeleeAttackId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULightMeleeAttackId : public UMeleeAttackId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.LightMeleeAttackId");
		return ptr;
	}



};

// Class AthenaAIAbilities.BullRushAIAbilityParams
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
class UBullRushAIAbilityParams : public UMeleeChargeAIAbilityParams
{
public:
	float                                              StaticCollisionWarmup;                                     // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D5AI[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.BullRushAIAbilityParams");
		return ptr;
	}



};

// Class AthenaAIAbilities.BullRushAIAbility
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UBullRushAIAbility : public UMeleeChargeAIAbility
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.BullRushAIAbility");
		return ptr;
	}



};

// Class AthenaAIAbilities.MeleeStaticCollisionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMeleeStaticCollisionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.MeleeStaticCollisionInterface");
		return ptr;
	}



};

// Class AthenaAIAbilities.SporeCloudStatus
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USporeCloudStatus : public UStatusBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.SporeCloudStatus");
		return ptr;
	}



};

// Class AthenaAIAbilities.SporeExposureInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USporeExposureInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.SporeExposureInterface");
		return ptr;
	}



};

// Class AthenaAIAbilities.SporeExposureComponent
// 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
class USporeExposureComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_PE42[0x38];                                    // 0x00C8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.SporeExposureComponent");
		return ptr;
	}



};

// Class AthenaAIAbilities.SporeExposureStatus
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USporeExposureStatus : public UStatusBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.SporeExposureStatus");
		return ptr;
	}



};

// Class AthenaAIAbilities.StatusResponseActivateElectricShield
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UStatusResponseActivateElectricShield : public UStatusResponse
{
public:
	float                                              Duration;                                                  // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8PA2[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.StatusResponseActivateElectricShield");
		return ptr;
	}



};

// Class AthenaAIAbilities.StatusResponseSporeCloud
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStatusResponseSporeCloud : public UStatusResponse
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAIAbilities.StatusResponseSporeCloud");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
