#pragma once

// Name: S, Version: 2.2.1


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

// Class AthenaAI.AthenaAIFormComponent
// 0x0070 (FullSize[0x0138] - InheritedSize[0x00C8])
class UAthenaAIFormComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_C1LD[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAthenaAIFormComponentVfxCustomisation> VfxCustomisations;                                         // 0x00D0(0x0010) (Edit, ZeroConstructor)
	class UAthenaAIFormDataAsset*                      FormData;                                                  // 0x00E0(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UCharacterHitReactionDamagerTypeToAnimTypeLayer* HitReactionsLayer;                                         // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WQ8U[0x48];                                    // 0x00F0(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIFormComponent");
		return ptr;
	}



	void OnRep_FormData();
};

// Class AthenaAI.AthenaAIAbilityType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAIAbilityType : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityType");
		return ptr;
	}



};

// Class AthenaAI.AIStrategyId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIStrategyId : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIStrategyId");
		return ptr;
	}



};

// Class AthenaAI.AISpawner
// 0x03D8 (FullSize[0x0400] - InheritedSize[0x0028])
class UAISpawner : public UDataAsset
{
public:
	unsigned char                                      UnknownData_DXUA[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               HasSpawnerLevelEncounters;                                 // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6ZUM[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAISpawnTypeParamsCollection                SpawnTypeParamsCollection;                                 // 0x0040(0x0048) (Edit)
	class UAIEncounterSettings*                        DefaultEncounterSettings;                                  // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISpawnWaveSequenceRankProgression*         DefaultSpawnWaveProgression;                               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAISpawnContextIdEncounterSettingsPair> SpawnContextSpecificEncounterSettings;                     // 0x0098(0x0010) (Edit, ZeroConstructor)
	bool                                               ShouldSpawnFacingRegionCentre;                             // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<AthenaAI_EAthenaAISpawnType>           DefaultSpawnType;                                          // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D89U[0x6];                                     // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnvQuery*                                   FindSpawnPosQuery;                                         // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EEnvQueryRunMode>             FindSpawnPosQueryRunMode;                                  // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RYXJ[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SpawnLocationType;                                         // 0x00BC(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxNumOfSpawnedPawns;                                      // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PriorityForSpawnedPawns;                                   // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H9X4[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FConditionalAISpawnOverride>         SpawnOverrides;                                            // 0x00D0(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	TArray<struct FAdditionalSpawnerBehaviour>         AdditionalBehaviours;                                      // 0x00E0(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	unsigned char                                      UnknownData_7KSL[0x270];                                   // 0x00F0(0x0270) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAthenaAISettings*                           AthenaAISettings;                                          // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_R0YK[0x98];                                    // 0x0368(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawner");
		return ptr;
	}



	int GetNumOfSpawnRequests();
};

// Class AthenaAI.AIPerCrewSpawner
// 0x0138 (FullSize[0x0538] - InheritedSize[0x0400])
class UAIPerCrewSpawner : public UAISpawner
{
public:
	class UAIWeightedProbabilityRangeOfRangesRankProgression* DefaultRespawnTimerRanges;                                 // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxNumOfCrewsToSpawnFor;                                   // 0x0408(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ActivateBySettingFootOnIsland;                             // 0x040C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseRespawnTimerForFirstSpawn;                              // 0x040D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AssociateSpawnsWithSpecificCrews;                          // 0x040E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PerceiveTriggerActorOnSpawn;                               // 0x040F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               EnforceRespawnTimeAfterCrewLeaves;                         // 0x0410(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IgnoreSpawningGracePeriodForNewCrew;                       // 0x0411(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TSNM[0x126];                                   // 0x0412(0x0126) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPerCrewSpawner");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIFormDataAsset
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UAthenaAIFormDataAsset : public UDataAsset
{
public:
	TArray<TEnumAsByte<Athena_EHealthChangedReason>>   PreventHealthChangedReasons;                               // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAIFormDamageResponse>               DamageResponses;                                           // 0x0038(0x0010) (Edit, ZeroConstructor)
	class UStatusRecipientResponseList*                OverrideStatusRecipientResponseList;                       // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                           SurfaceMaterial;                                           // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     KilledVfxTemplate;                                         // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      AICharacterAudioComponent;                                 // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      AnimNotifyEmitterWithObservers;                            // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               HighPriorityFootstepAudio;                                 // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5J7G[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MovementSpeedMultipler;                                    // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerStat                                 StatToFireOnDeath;                                         // 0x0078(0x000C) (Edit, DisableEditOnInstance)
	struct FName                                       FeatureName;                                               // 0x0084(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JQLQ[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      FormComponentClass;                                        // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIFormDataAsset");
		return ptr;
	}



};

// Class AthenaAI.AIPlayerTracker
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPlayerTracker : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPlayerTracker");
		return ptr;
	}



};

// Class AthenaAI.AISpawnerPlayerTracker
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UAISpawnerPlayerTracker : public UAIPlayerTracker
{
public:
	unsigned char                                      UnknownData_T06K[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnerPlayerTracker");
		return ptr;
	}



};

// Class AthenaAI.AIInteractableType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIInteractableType : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIInteractableType");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIAbilityStageParams
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAthenaAIAbilityStageParams : public UObject
{
public:
	float                                              AbilityCooldownSpeedMultiplier;                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageRequiredForNextIntervalMultiplier;                   // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OverrideParams;                                            // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AutoActivateOnStageTransition;                             // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VQ3X[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      TypeClass;                                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityStageParams");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIAbility
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UAthenaAIAbility : public UObject
{
public:
	class UAthenaAIAbilityParams*                      AbilityParams;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class APawn*                                       Pawn;                                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AAthenaAIController*                         Controller;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      AIPawnInterface[0x10];                                     // 0x0040(0x0010) UNKNOWN PROPERTY: InterfaceProperty AthenaAI.AthenaAIAbility.AIPawnInterface
	class UAthenaAIAbilityStageParams*                 CurrentAbilityStageParams;                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3MFV[0x20];                                    // 0x0058(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbility");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIAbilityParams
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class UAthenaAIAbilityParams : public UObject
{
public:
	TArray<struct FAthenaAIControllerParamValue>       NamedControllerParams;                                     // 0x0028(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<AthenaAI_EAIAbilityDamageIntervalCounterMode> DamageIntervalCountingMode;                                // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseTimeBetweenAbility;                                     // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6E7Y[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAthenaAIAbilityPlayerBasedRanges           ActivationTimerCooldown;                                   // 0x0040(0x0010) (Edit)
	struct FAthenaAIAbilityPlayerBasedRanges           TimeBetweenAbility;                                        // 0x0050(0x0010) (Edit)
	bool                                               UseDamageBetweenAbility;                                   // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HR3N[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAthenaAIAbilityPlayerBasedRanges           DamageBetweenAbility;                                      // 0x0068(0x0010) (Edit)
	float                                              AbilityRadius;                                             // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseMinMaxAttackRange;                                      // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KUZJ[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMinMaxAbilityRange                         MinMaxAttackRange;                                         // 0x0080(0x0008) (Edit)
	TArray<struct FAIAbilityFollowUp>                  FollowUpAbilities;                                         // 0x0088(0x0010) (Edit, ZeroConstructor)
	float                                              Weight;                                                    // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MW0I[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIAbilityContinuousCooldownParameterData   ContinuousCooldownAbilityParameters;                       // 0x00A0(0x0020) (Edit)
	class UClass*                                      AIAbilityTypeClass;                                        // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityParams");
		return ptr;
	}



};

// Class AthenaAI.AIInteractableComponent
// 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
class UAIInteractableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_JQ2J[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Type;                                                      // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                     DetachOffsetFromOwner;                                     // 0x00D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanHaveTarget;                                             // 0x00E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_58VI[0x1B];                                    // 0x00E5(0x001B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIInteractableComponent");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_BaseConditional
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UBTDecorator_BaseConditional : public UBTDecorator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_BaseConditional");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_TargetOnShip
// 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
class UBTDecorator_TargetOnShip : public UBTDecorator_BaseConditional
{
public:
	bool                                               Invert;                                                    // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Athena_EBT_ShipOwnership>              ShipOwnership;                                             // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4LE4[0x36];                                    // 0x006A(0x0036) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TargetOnShip");
		return ptr;
	}



};

// Class AthenaAI.BTService_QueryShipsForTarget
// 0x0290 (FullSize[0x0300] - InheritedSize[0x0070])
class UBTService_QueryShipsForTarget : public UBTService
{
public:
	struct FAIDataProviderFloatValue                   MaxShipDistanceFromHomePosition;                           // 0x0070(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MinDamageToSwitchTargets;                                  // 0x00A0(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MinSecondsBeforeSwitchTargets;                             // 0x00D0(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderBoolValue                    SwitchTargetsAfterTimerExpires;                            // 0x0100(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   SecondsBeforeSwitchTargetsAfterTimerExpires;               // 0x0130(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   TimeBetweenDiceRolls;                                      // 0x0160(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   DiceRollForAggression;                                     // 0x0190(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MinTotalDamageToTurnDiceRollForAggression;                 // 0x01C0(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   DiceRollForDamageAggression;                               // 0x01F0(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   DiceRollForDamageDormancy;                                 // 0x0220(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   PlayerDistanceThresholdToTurnAggressive;                   // 0x0250(0x0030) (Edit, ContainsInstancedReference)
	bool                                               IgnoreAI;                                                  // 0x0280(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VJ16[0x7F];                                    // 0x0281(0x007F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_QueryShipsForTarget");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SwimAttackTargetActor
// 0x0058 (FullSize[0x00E0] - InheritedSize[0x0088])
class UBTTask_SwimAttackTargetActor : public UBTTask_BlackboardBase
{
public:
	float                                              DamageToApply;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxAngleToTargetToSuccessfullyAttack;                      // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAttackableTypeToAnimMapping>        AttackAnimMapping;                                         // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FName                                       LoSTraceProfileName;                                       // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIDataProviderFloatValue                   LosTraceRadius;                                            // 0x00A8(0x0030) (Edit, ContainsInstancedReference)
	float                                              MaxDistanceToTargetToApplyDamage;                          // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K4VW[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimAttackTargetActor");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SwimAttackTargetShip
// 0x01B0 (FullSize[0x0238] - InheritedSize[0x0088])
class UBTTask_SwimAttackTargetShip : public UBTTask_BlackboardBase
{
public:
	float                                              BiteRadiusOffsetToBeginAttackHeadOn;                       // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BiteRadiusOffsetToBeginAttackPerpendicular;                // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTimeToStartAttack;                                      // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_18IV[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               AttackAnim;                                                // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AttackAnimLength;                                          // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeToPerformAttack;                                       // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     AttackVFX;                                                 // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AttackVFXZOffset;                                          // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LoSTraceProfileName;                                       // 0x00B4(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_781K[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   LosTraceRadius;                                            // 0x00C0(0x0030) (Edit, ContainsInstancedReference)
	TArray<struct FSwimAttackTargetShipImpulseData>    ImpulseData;                                               // 0x00F0(0x0010) (Edit, ZeroConstructor)
	struct FAIDataProviderIntValue                     MinDamageHolesToApply;                                     // 0x0100(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderIntValue                     MaxDamageHolesToApply;                                     // 0x0130(0x0030) (Edit, ContainsInstancedReference)
	int                                                LevelsOfHullDamage;                                        // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V1TR[0x4];                                     // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DamageCauserType;                                          // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FAIDataProviderFloatValue                   PlayerBiteRadius;                                          // 0x0170(0x0030) (Edit, ContainsInstancedReference)
	struct FKnockBackInfo                              KnockbackParams;                                           // 0x01A0(0x0050) (Edit)
	struct FAIDataProviderFloatValue                   PlayerBiteDamage;                                          // 0x01F0(0x0030) (Edit, ContainsInstancedReference)
	unsigned char                                      UnknownData_6AJC[0x10];                                    // 0x0220(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AShip*                                       TargetShip;                                                // 0x0230(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimAttackTargetShip");
		return ptr;
	}



};

// Class AthenaAI.BurrowEruptBase
// 0x0000 (FullSize[0x03D0] - InheritedSize[0x03D0])
class ABurrowEruptBase : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowEruptBase");
		return ptr;
	}



};

// Class AthenaAI.AIAnimationStateId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIAnimationStateId : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIAnimationStateId");
		return ptr;
	}



};

// Class AthenaAI.SpawnerBehaviourStrategy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class USpawnerBehaviourStrategy : public UObject
{
public:
	unsigned char                                      UnknownData_J8ER[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SpawnerBehaviourStrategy");
		return ptr;
	}



};

// Class AthenaAI.AIItemParameterInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIItemParameterInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIItemParameterInterface");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIControllerSharedParamValuesDataAsset
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UAthenaAIControllerSharedParamValuesDataAsset : public UDataAsset
{
public:
	bool                                               OverrideMeshScale;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IECI[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MeshScale;                                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OverrideCurrentTargetPerceivedNotVisibleAge;               // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SP03[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentTargetPerceivedNotVisibleAge;                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAthenaAIControllerSenseSettingOverride> AIStrategySenseSettingOverrides;                           // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FAthenaAIControllerHealthCustomisation      HealthCustomisationValues;                                 // 0x0048(0x000C) (Edit)
	unsigned char                                      UnknownData_OD32[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAthenaAIControllerParamValue>       InitialBlackboardValues;                                   // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerParamValue>       NamedControllerParams;                                     // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerWeightedRangesParamValue> NamedWeightedRangesControllerParams;                       // 0x0078(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerSharedParamValuesDataAsset");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIControllerParamsDataAsset
// 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
class UAthenaAIControllerParamsDataAsset : public UDataAsset
{
public:
	struct FAthenaAIControllerSenseSettings            DefaultSenseSettings;                                      // 0x0028(0x0014) (Edit)
	float                                              AutoSuccessRangeFromLastSeenLocation;                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultPerceivedNotVisibleAge;                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OverrideTeamID;                                            // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Athena_EAthenaAITeam>                  TeamID;                                                    // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FKWW[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TargetSwitchScoreTolerance;                                // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5RFW[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      TargetLoadWeightingBias;                                   // 0x0050(0x0010) (Edit, ZeroConstructor)
	float                                              DistanceToStartTargetPickingDecrease;                      // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetPickingDistScoreAtMaxSightRange;                     // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VisionAngleToStartTargetPickingDecrease;                   // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetPickingFacingScoreAtMaxPeripheralVisionAngle;        // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseDamageAsFactorInTargetScore;                            // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XMWH[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAthenaAIControllerDamageTargetScoreFromPerceivedTarget DamageTargetScores;                                        // 0x0074(0x0014) (Edit)
	TArray<class UAthenaAIControllerSharedParamValuesDataAsset*> SharedParamValues;                                         // 0x0088(0x0010) (Edit, ZeroConstructor)
	bool                                               IndividualOverrideMeshScale;                               // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YVLZ[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IndividualMeshScale;                                       // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAthenaAIControllerHealthCustomisation      IndividualHealthCustomisationValues;                       // 0x00A0(0x000C) (Edit)
	unsigned char                                      UnknownData_0XKU[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAthenaAIControllerParamValue>       IndividualInitialBlackboardValues;                         // 0x00B0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerParamValue>       IndividualNamedControllerParams;                           // 0x00C0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerWeightedRangesParamValue> IndividualNamedWeightedRangesControllerParams;             // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerSenseSettingOverride> IndividualAIStrategySenseSettingOverrides;                 // 0x00E0(0x0010) (Edit, ZeroConstructor)
	bool                                               IndividualOverrideCurrentTargetPerceivedNotVisibleAge;     // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RYWL[0x3];                                     // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IndividualCurrentTargetPerceivedNotVisibleAge;             // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FeatureName;                                               // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerParamsDataAsset");
		return ptr;
	}



};

// Class AthenaAI.AthenaAICharacterControllerSharedParamValuesDataAsset
// 0x00D0 (FullSize[0x0158] - InheritedSize[0x0088])
class UAthenaAICharacterControllerSharedParamValuesDataAsset : public UAthenaAIControllerSharedParamValuesDataAsset
{
public:
	bool                                               OverrideUseRVOAvoidance;                                   // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseRVOAvoidance;                                           // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverridePrioritiseInteractablesBeforeEnemies;              // 0x008A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PrioritiseInteractablesBeforeEnemies;                      // 0x008B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NTY3[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 DistanceInMToCannonShotHitChanceCurve;                     // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAIStrategyMovementProperties>       AIStrategyMovementProperties;                              // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemCategoryAIStrategyMovementPropertiesOverride> ItemCategoryAIStrategyMovementPropertiesOverrides;         // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FAthenaAICharacterCannonTargetingParams     CannonTargetingParams;                                     // 0x00B8(0x0010) (Edit)
	TArray<struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties> WieldedItemProjectileEffectivenessProperties;              // 0x00C8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerItemCategoryNamedParams> WieldedItemOverrideNamedControllerParams;                  // 0x00D8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIItemParamValue>             NamedItemParams;                                           // 0x00E8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerSpawnItemDescForItemCategory> SpawnItemDescForItemCategories;                            // 0x00F8(0x0010) (Edit, ZeroConstructor)
	TArray<class UAthenaAIAbilityParams*>              AIAbilityParams;                                           // 0x0108(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference)
	TArray<struct FAthenaAIEngageEnemyData>            NonItemEngageOptions;                                      // 0x0118(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       AnimationDataOverrideAsset;                                // 0x0128(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       CustomAnimationAsset;                                      // 0x0138(0x0010) (Edit, ZeroConstructor)
	bool                                               OverrideNoInitialItem;                                     // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NoInitialItem;                                             // 0x0149(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideBeginFleeing;                                      // 0x014A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BeginFleeing;                                              // 0x014B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_19MH[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnvQuery*                                   FleeingEQS;                                                // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterControllerSharedParamValuesDataAsset");
		return ptr;
	}



};

// Class AthenaAI.AthenaAICharacterControllerParamsDataAsset
// 0x00F8 (FullSize[0x01F8] - InheritedSize[0x0100])
class UAthenaAICharacterControllerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
{
public:
	bool                                               IndividualOverrideUseRVOAvoidance;                         // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IndividualUseRVOAvoidance;                                 // 0x0101(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IndividualOverridePrioritiseInteractablesBeforeEnemies;    // 0x0102(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IndividualPrioritiseInteractablesBeforeEnemies;            // 0x0103(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_19GZ[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 IndividualDistanceInMToCannonShotHitChanceCurve;           // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAIStrategyMovementProperties>       IndividualAIStrategyMovementProperties;                    // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemCategoryAIStrategyMovementPropertiesOverride> IndividualItemCategoryAIStrategyMovementPropertiesOverrides; // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FAthenaAICharacterCannonTargetingParams     IndividualCannonTargetingParams;                           // 0x0130(0x0010) (Edit)
	TArray<struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties> IndividualWieldedItemProjectileEffectivenessProperties;    // 0x0140(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerItemCategoryNamedParams> IndividualWieldedItemOverrideNamedControllerParams;        // 0x0150(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIItemParamValue>             IndividualNamedItemParams;                                 // 0x0160(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerSpawnItemDescForItemCategory> IndividualSpawnItemDescForItemCategories;                  // 0x0170(0x0010) (Edit, ZeroConstructor)
	bool                                               UseDamageBasedAbilityStages;                               // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SP2E[0x7];                                     // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      HealthStages;                                              // 0x0188(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIAbilityDamageStage>         IndividualDamageBasedAIAbilityStages;                      // 0x0198(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	TArray<class UAthenaAIAbilityParams*>              IndividualAIAbilityParams;                                 // 0x01A8(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference)
	TArray<struct FAthenaAIEngageEnemyData>            IndividualNonItemEngageOptions;                            // 0x01B8(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       IndividualAnimationDataOverrideAsset;                      // 0x01C8(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       IndividualCustomAnimationAsset;                            // 0x01D8(0x0010) (Edit, ZeroConstructor)
	bool                                               IndividualOverrideNoInitialItem;                           // 0x01E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IndividualNoInitialItem;                                   // 0x01E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IndividualOverrideBeginFleeing;                            // 0x01EA(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IndividualBeginFleeing;                                    // 0x01EB(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PZW9[0x4];                                     // 0x01EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnvQuery*                                   IndividualFleeingEQS;                                      // 0x01F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterControllerParamsDataAsset");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIAmmoDataAsset
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
class UAthenaAIAmmoDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData_S7MK[0x90];                                    // 0x0028(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAthenaAICharacterControllerWeightedAmmoType> AmmoWeights;                                               // 0x00B8(0x0010) (Edit, ZeroConstructor)
	struct FName                                       FeatureName;                                               // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIAmmoDataAsset");
		return ptr;
	}



};

// Class AthenaAI.AIAmmoRankProgression
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIAmmoRankProgression : public UDataAsset
{
public:
	TArray<struct FAIAmmoRankMapping>                  RankMappings;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_INBK[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIAmmoRankProgression");
		return ptr;
	}



};

// Class AthenaAI.AIAmmoProgressionTypeList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAIAmmoProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAIAmmoRankProgression*>              AllProgressions;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIAmmoProgressionTypeList");
		return ptr;
	}



};

// Class AthenaAI.AIAmmoTypeList
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIAmmoTypeList : public UDataAsset
{
public:
	TArray<class UAthenaAIAmmoDataAsset*>              AllAmmo;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UAthenaAIAmmoDataAsset*                      DefaultAmmo;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIAmmoTypeList");
		return ptr;
	}



};

// Class AthenaAI.AIAnimationStateInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIAnimationStateInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIAnimationStateInterface");
		return ptr;
	}



};

// Class AthenaAI.AIChargeUpInterruptedStatus
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAIChargeUpInterruptedStatus : public UStatusBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIChargeUpInterruptedStatus");
		return ptr;
	}



};

// Class AthenaAI.AIClassId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIClassId : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIClassId");
		return ptr;
	}



};

// Class AthenaAI.AIPartsDesc
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UAIPartsDesc : public UDataAsset
{
public:
	struct FAIPartId                                   AIPartId;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPartsDesc");
		return ptr;
	}



};

// Class AthenaAI.AIPartsCategory
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UAIPartsCategory : public UDataAsset
{
public:
	TArray<class UAIPartsDesc*>                        Parts;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference)
	int                                                NextPartsIndex;                                            // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseWeightedArray;                                          // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OU5P[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       UseWeightedArrayFeatureName;                               // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedProbabilityRange                   WeightedArray;                                             // 0x0048(0x0020) (Edit, DisableEditOnTemplate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPartsCategory");
		return ptr;
	}



};

// Class AthenaAI.AIPartsServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPartsServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPartsServiceInterface");
		return ptr;
	}



};

// Class AthenaAI.AIEncounterServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIEncounterServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterServiceInterface");
		return ptr;
	}



	void RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression);
	void RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset);
	void RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout);
	void RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form);
	void RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter);
};

// Class AthenaAI.AIClassIdTypeList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAIClassIdTypeList : public UDataAsset
{
public:
	TArray<class UClass*>                              AllClassIds;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIClassIdTypeList");
		return ptr;
	}



};

// Class AthenaAI.AIColorVariantPool
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAIColorVariantPool : public UDataAsset
{
public:
	TArray<struct FStringAssetReference>               AvailableColors;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIColorVariantPool");
		return ptr;
	}



};

// Class AthenaAI.AICombatEncounterInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAICombatEncounterInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AICombatEncounterInterface");
		return ptr;
	}



	void OnVulnerabilityStateEntered();
};

// Class AthenaAI.AIDebugVisualisationComponent
// 0x0050 (FullSize[0x0118] - InheritedSize[0x00C8])
class UAIDebugVisualisationComponent : public UActorComponent
{
public:
	TArray<struct FAIDebugVisualisationLine>           Lines;                                                     // 0x00C8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationBox>            Boxes;                                                     // 0x00D8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationCylinder>       Cylinders;                                                 // 0x00E8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationSphere>         Spheres;                                                   // 0x00F8(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationCone>           Cones;                                                     // 0x0108(0x0010) (Edit, Net, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDebugVisualisationComponent");
		return ptr;
	}



};

// Class AthenaAI.AIElectricProjectileInterruptedStatus
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAIElectricProjectileInterruptedStatus : public UStatusBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIElectricProjectileInterruptedStatus");
		return ptr;
	}



};

// Class AthenaAI.AIEncounterGenerationRecipe
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UAIEncounterGenerationRecipe : public UDataAsset
{
public:
	TArray<struct FAIFormVarietyEntry>                 Forms;                                                     // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       SkillsetProgression;                                       // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       ItemDropProgression;                                       // 0x0048(0x0010) (Edit, ZeroConstructor)
	struct FTargetSkillsetProgressionPair              TargetSkillsetOverrides;                                   // 0x0058(0x0020) (Edit)
	struct FTargetItemDropProgressionPair              TargetItemDropOverrides;                                   // 0x0078(0x0020) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationRecipe");
		return ptr;
	}



};

// Class AthenaAI.AIEncounterGenerationRecipeRankOrderList
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UAIEncounterGenerationRecipeRankOrderList : public UDataAsset
{
public:
	TArray<class UAIEncounterGenerationRecipe*>        Recipes;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAIEncounterGenerationRecipeFeatureBasedRankOrderList> FeatureBasedRecipeLists;                                   // 0x0038(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationRecipeRankOrderList");
		return ptr;
	}



};

// Class AthenaAI.AIEncounterGenerationRecipeTypeList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAIEncounterGenerationRecipeTypeList : public UDataAsset
{
public:
	TArray<class UAIEncounterGenerationRecipe*>        AllRecipes;                                                // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationRecipeTypeList");
		return ptr;
	}



};

// Class AthenaAI.AIEncounterGenerationServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIEncounterGenerationServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationServiceInterface");
		return ptr;
	}



};

// Class AthenaAI.AIEncounterGenerationService
// 0x0088 (FullSize[0x0458] - InheritedSize[0x03D0])
class AAIEncounterGenerationService : public AActor
{
public:
	unsigned char                                      UnknownData_T62T[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIEncounterGenerationRecipeTypeList*        GenerationRecipes;                                         // 0x03D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      EncounterService[0x10];                                    // 0x03E0(0x0010) UNKNOWN PROPERTY: InterfaceProperty AthenaAI.AIEncounterGenerationService.EncounterService
	unsigned char                                      UnknownData_CW0E[0x68];                                    // 0x03F0(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationService");
		return ptr;
	}



};

// Class AthenaAI.AIFormRankProgression
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIFormRankProgression : public UDataAsset
{
public:
	TArray<struct FAIFormRankMapping>                  RankMappings;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_X0ZL[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIFormRankProgression");
		return ptr;
	}



};

// Class AthenaAI.AIFormProgressionTypeList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAIFormProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAIFormRankProgression*>              AllProgressions;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIFormProgressionTypeList");
		return ptr;
	}



};

// Class AthenaAI.AIFormTypeList
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIFormTypeList : public UDataAsset
{
public:
	TArray<class UAthenaAIFormDataAsset*>              AllForms;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UAthenaAIFormDataAsset*                      DefaultForm;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIFormTypeList");
		return ptr;
	}



};

// Class AthenaAI.AILoadoutProgressionTypeList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAILoadoutProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAILoadoutRankProgression*>           AllProgressions;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AILoadoutProgressionTypeList");
		return ptr;
	}



};

// Class AthenaAI.AILoadoutTypeList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAILoadoutTypeList : public UDataAsset
{
public:
	TArray<class ULoadoutAsset*>                       AllLoadouts;                                               // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AILoadoutTypeList");
		return ptr;
	}



};

// Class AthenaAI.AISkillsetProgressionTypeList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAISkillsetProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAISkillsetRankProgression*>          AllProgressions;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISkillsetProgressionTypeList");
		return ptr;
	}



};

// Class AthenaAI.AISkillsetTypeList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAISkillsetTypeList : public UDataAsset
{
public:
	TArray<class UAthenaAIControllerParamsDataAsset*>  AllSkillsets;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISkillsetTypeList");
		return ptr;
	}



};

// Class AthenaAI.AIPartsCategoryTypeList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAIPartsCategoryTypeList : public UDataAsset
{
public:
	TArray<class UAIPartsCategory*>                    AllPartsCategories;                                        // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPartsCategoryTypeList");
		return ptr;
	}



};

// Class AthenaAI.AIEncounterService
// 0x03D0 (FullSize[0x07A0] - InheritedSize[0x03D0])
class AAIEncounterService : public AActor
{
public:
	unsigned char                                      UnknownData_IK7D[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAIPartsCategoryMapping>             DefaultPartsCategories;                                    // 0x03D8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAIPartsCategoryFormMapping>         FormPartsCategories;                                       // 0x03E8(0x0010) (Edit, ZeroConstructor)
	class UAIAmmoTypeList*                             Ammo;                                                      // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIAmmoProgressionTypeList*                  AmmoProgressions;                                          // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIFormTypeList*                             Forms;                                                     // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIFormProgressionTypeList*                  FormProgressions;                                          // 0x0410(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAILoadoutTypeList*                          Loadouts;                                                  // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAILoadoutProgressionTypeList*               LoadoutProgressions;                                       // 0x0420(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISkillsetTypeList*                         Skillsets;                                                 // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISkillsetProgressionTypeList*              SkillsetProgressions;                                      // 0x0430(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIClassIdTypeList*                          ClassIds;                                                  // 0x0438(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIPartsCategoryTypeList*                    PartsCategories;                                           // 0x0440(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIColorVariantPool*                         TeamColors;                                                // 0x0448(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIItemDropComponentList*                    AIItemDropSpawners;                                        // 0x0450(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIItemDropComponentRankProgressionList*     AIItemDropSpawnerProgressions;                             // 0x0458(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAIEncounterSettings*>                DebugSpawnableEncounterSettings;                           // 0x0460(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData_V586[0x330];                                   // 0x0470(0x0330) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterService");
		return ptr;
	}



	void RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression);
	void RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset);
	void RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout);
	void RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form);
	void RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter);
};

// Class AthenaAI.AISkillsetRankProgression
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAISkillsetRankProgression : public UDataAsset
{
public:
	TArray<struct FAISkillsetRankMapping>              RankMappings;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O6IL[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISkillsetRankProgression");
		return ptr;
	}



};

// Class AthenaAI.AIEncounterSettings
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UAIEncounterSettings : public UDataAsset
{
public:
	TAssetPtr<class UClass>                            PawnClass;                                                 // 0x0028(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SWY3[0x4];                                     // 0x0028(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UClass*                                      AIClass;                                                   // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FStringAssetReference                       TeamColor;                                                 // 0x0050(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterSettings");
		return ptr;
	}



};

// Class AthenaAI.AIEncounterSettingsFixed
// 0x00B0 (FullSize[0x0110] - InheritedSize[0x0060])
class UAIEncounterSettingsFixed : public UAIEncounterSettings
{
public:
	struct FStringAssetReference                       SpecificSkillset;                                          // 0x0060(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Loadout;                                                   // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Form;                                                      // 0x0080(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Ammo;                                                      // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FName                                       DioramaRole;                                               // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       LocalisableName;                                           // 0x00A8(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_U7LH[0x20];                                    // 0x00A8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FEncounterParams                            EncounterTrackingParams;                                   // 0x00E0(0x000C) (Edit)
	unsigned char                                      UnknownData_WORF[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TAssetPtr<class UClass>                            ItemDropComponentClass;                                    // 0x00F0(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H7R1[0x4];                                     // 0x00EC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterSettingsFixed");
		return ptr;
	}



};

// Class AthenaAI.AIEncounterSettingsRankProgression
// 0x0060 (FullSize[0x00C0] - InheritedSize[0x0060])
class UAIEncounterSettingsRankProgression : public UAIEncounterSettings
{
public:
	struct FStringAssetReference                       SkillsetProgression;                                       // 0x0060(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       LoadoutProgression;                                        // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       FormProgression;                                           // 0x0080(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       AmmoProgression;                                           // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       ItemDropComponentProgression;                              // 0x00A0(0x0010) (Edit, ZeroConstructor)
	struct FEncounterParams                            EncounterTrackingParams;                                   // 0x00B0(0x000C) (Edit)
	unsigned char                                      UnknownData_XZCH[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIEncounterSettingsRankProgression");
		return ptr;
	}



};

// Class AthenaAI.AIIdentifierOwnerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIIdentifierOwnerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIIdentifierOwnerInterface");
		return ptr;
	}



};

// Class AthenaAI.AIInteractableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIInteractableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIInteractableInterface");
		return ptr;
	}



};

// Class AthenaAI.AIInteractableOperatorInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIInteractableOperatorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIInteractableOperatorInterface");
		return ptr;
	}



};

// Class AthenaAI.AIItemDropComponentList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAIItemDropComponentList : public UDataAsset
{
public:
	TArray<TAssetPtr<class UClass>>                    AllSpawners;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIItemDropComponentList");
		return ptr;
	}



};

// Class AthenaAI.AIItemDropComponentRankProgressionList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAIItemDropComponentRankProgressionList : public UDataAsset
{
public:
	TArray<class UAIItemSpawnRankProgression*>         AllProgressions;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIItemDropComponentRankProgressionList");
		return ptr;
	}



};

// Class AthenaAI.AIItemSpawnRankProgression
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIItemSpawnRankProgression : public UDataAsset
{
public:
	TArray<struct FAIDropSpawnerRankMapping>           RankMappings;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UQXY[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIItemSpawnRankProgression");
		return ptr;
	}



};

// Class AthenaAI.AILoadoutInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAILoadoutInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AILoadoutInterface");
		return ptr;
	}



};

// Class AthenaAI.AILoadoutRankProgression
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAILoadoutRankProgression : public UDataAsset
{
public:
	TArray<struct FAILoadoutRankMapping>               RankMappings;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2BXF[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AILoadoutRankProgression");
		return ptr;
	}



};

// Class AthenaAI.AILoadoutWithNonStorableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAILoadoutWithNonStorableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AILoadoutWithNonStorableInterface");
		return ptr;
	}



};

// Class AthenaAI.AIManagerBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIManagerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIManagerBlueprintFunctionLibrary");
		return ptr;
	}



	class AItemInfo* STATIC_SpawnItemFromAI(class APawn* Pawn, class UClass* ItemDesc);
	int STATIC_GetFrameCounter();
	void STATIC_AddNameplateToAIWithLocalisedName(class AActor* Actor, const struct FText& DisplayName);
	void STATIC_AddNameplateToAI(class AActor* Actor, const struct FString& DisplayName);
};

// Class AthenaAI.AIManagerServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIManagerServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIManagerServiceInterface");
		return ptr;
	}



	void StartDespawnAI(class APawn* AIActor, TEnumAsByte<Athena_ECharacterDeathType> DeathType);
	int GetNumOfSpawnedPawns();
};

// Class AthenaAI.AthenaAITypeListDataAsset
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UAthenaAITypeListDataAsset : public UDataAsset
{
public:
	TArray<struct FAITypeData>                         AITypes;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FStringClassReference>               AdditionalAIActors;                                        // 0x0038(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAITypeListDataAsset");
		return ptr;
	}



};

// Class AthenaAI.AISpawnWaveSequence
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAISpawnWaveSequence : public UDataAsset
{
public:
	TArray<struct FAISpawnerWave>                      Waves;                                                     // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FName                                       FeatureName;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnWaveSequence");
		return ptr;
	}



};

// Class AthenaAI.AISpawnWaveSequenceRankProgression
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAISpawnWaveSequenceRankProgression : public UDataAsset
{
public:
	TArray<struct FAISpawnWaveSequenceRankMapping>     RankMappings;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G605[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnWaveSequenceRankProgression");
		return ptr;
	}



};

// Class AthenaAI.AIWeightedProbabilityRangeOfRangesAsset
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UAIWeightedProbabilityRangeOfRangesAsset : public UDataAsset
{
public:
	float                                              RespawnChance;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QC3Z[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           RespawnTimerRanges;                                        // 0x0030(0x0030) (Edit)
	struct FName                                       FeatureName;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIWeightedProbabilityRangeOfRangesAsset");
		return ptr;
	}



};

// Class AthenaAI.AIWeightedProbabilityRangeOfRangesRankProgression
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIWeightedProbabilityRangeOfRangesRankProgression : public UDataAsset
{
public:
	TArray<struct FAIWeightedProbabilityRangeOfRangesRankMapping> RankMappings;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NDNX[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIWeightedProbabilityRangeOfRangesRankProgression");
		return ptr;
	}



};

// Class AthenaAI.AIPlayerTrackerObservedInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPlayerTrackerObservedInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPlayerTrackerObservedInterface");
		return ptr;
	}



};

// Class AthenaAI.AIPlayerTrackerObserverInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPlayerTrackerObserverInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPlayerTrackerObserverInterface");
		return ptr;
	}



};

// Class AthenaAI.AISpawnRequestResultLoggerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAISpawnRequestResultLoggerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnRequestResultLoggerInterface");
		return ptr;
	}



};

// Class AthenaAI.AthenaAISettings
// 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
class UAthenaAISettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       AITypesAsset;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       AISpawnContextListAsset;                                   // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	int                                                FallbackAIDifficultyRank;                                  // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxNumOfSpawnedActors;                                     // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxPlayerEquivalentAIsPerRegion;                           // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxWorldAICostUnitsForWorld;                               // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AIRegionCostUnitsForPlayer;                                // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CharacterNetRelevancy;                                     // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CharacterRegionDensityCheckTimer;                          // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CharacterWorldDensityCheckTimer;                           // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceToPlayerToRaiseSpawnPriority;                      // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinRetryingCanSpawnRequestTime;                            // 0x007C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxRetryingCanSpawnRequestTime;                            // 0x0080(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinRetryingLocationCheckTime;                              // 0x0084(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxRetryingLocationCheckTime;                              // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CharacterAINoiseTickInterval;                              // 0x008C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PeriodicAINoiseComponentTickInterval;                      // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FaunaPlayerProximityDormancyRange;                         // 0x0094(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FaunaPlayerProximityTickTime;                              // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FaunaTimeOutOfPlayerProximityForDormancy;                  // 0x009C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultNavAgentCapsuleRadius;                              // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultNavAgentCapsuleHalfHeight;                          // 0x00A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinDelayBeforeRetryingUnsuccessfulWave;                    // 0x00A8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDelayBeforeRetryingUnsuccessfulWave;                    // 0x00AC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStringAssetReference                       AIEncounterServiceAssetClassFileLocation;                  // 0x00B0(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       AIEncounterGenerationServiceAssetClassFileLocation;        // 0x00C0(0x0010) (Edit, ZeroConstructor, Config)
	struct FName                                       AICharacterWaterInteractionCollisionProfileName;           // 0x00D0(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAISettings");
		return ptr;
	}



};

// Class AthenaAI.AISpawnContextId
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UAISpawnContextId : public UObject
{
public:
	int                                                Weighting;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8VDM[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnContextId");
		return ptr;
	}



};

// Class AthenaAI.AIManagerService
// 0x0678 (FullSize[0x0A48] - InheritedSize[0x03D0])
class AAIManagerService : public AActor
{
public:
	unsigned char                                      UnknownData_LBMU[0x100];                                   // 0x03D0(0x0100) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              LoadedAIPawnClasses;                                       // 0x04D0(0x0010) (ZeroConstructor, Protected)
	TArray<class UClass*>                              LoadedAIItemDropComponentClasses;                          // 0x04E0(0x0010) (ZeroConstructor, Protected)
	unsigned char                                      UnknownData_PB5M[0x8];                                     // 0x04F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AAmbientWaterSpawnerManager*                 AmbientWaterSpawnerManager;                                // 0x04F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IU1J[0x330];                                   // 0x0500(0x0330) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAIPlayerTracker*>                    PlayerTrackers;                                            // 0x0830(0x0010) (ZeroConstructor)
	TArray<struct FCustomPlayersAITrackerData>         CustomPlayersTrackerDatas;                                 // 0x0840(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_O08M[0x100];                                   // 0x0850(0x0100) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAISpawner*>                          SpawnersPendingShutdown;                                   // 0x0950(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_CA99[0xA8];                                    // 0x0960(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAthenaAITypeListDataAsset*                  AITypeList;                                                // 0x0A08(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISpawnContextList*                         AISpawnContextList;                                        // 0x0A10(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TQTF[0x30];                                    // 0x0A18(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIManagerService");
		return ptr;
	}



	void TickService(float DeltaSeconds);
	void StartDespawnAI(class APawn* AIActor, TEnumAsByte<Athena_ECharacterDeathType> DeathType);
};

// Class AthenaAI.DebugAIManagerServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDebugAIManagerServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.DebugAIManagerServiceInterface");
		return ptr;
	}



	void SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors);
	void SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion);
	void SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld);
	void SetIgnoreCharacterLimits(bool Ignore);
	void SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority);
	void SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer);
	void SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer);
	void SetCharacterNetRelevancy(float InCloseByCharactersRadius);
	bool BlockAIAbility(class UClass* InExclusive, bool InBlockState);
};

// Class AthenaAI.DebugAIManagerService
// 0x0100 (FullSize[0x0B48] - InheritedSize[0x0A48])
class ADebugAIManagerService : public AAIManagerService
{
public:
	unsigned char                                      UnknownData_N2XD[0xF0];                                    // 0x0A48(0x00F0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              BlockedAIAbilities;                                        // 0x0B38(0x0010) (ZeroConstructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.DebugAIManagerService");
		return ptr;
	}



	void SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors);
	void SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion);
	void SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld);
	void SetIgnoreCharacterLimits(bool Ignore);
	void SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority);
	void SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer);
	void SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer);
	void SetCharacterNetRelevancy(float InCloseByCharactersRadius);
	bool BlockAIAbility(class UClass* InExclusive, bool InBlockState);
};

// Class AthenaAI.AINameplateComponent
// 0x0168 (FullSize[0x0448] - InheritedSize[0x02E0])
class UAINameplateComponent : public UNameplateComponent
{
public:
	unsigned char                                      UnknownData_3NDY[0x8];                                     // 0x02E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VisibleFromWorldDistance;                                  // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VisibleUntilWorldDistance;                                 // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VisibleAfterDeathDuration;                                 // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DW6F[0x4];                                     // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Title;                                                     // 0x02F8(0x0018) ELEMENT_SIZE_MISMATCH (Net, RepNotify)
	unsigned char                                      UnknownData_V9LL[0x20];                                    // 0x02F4(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       DisplayName;                                               // 0x0330(0x0018) ELEMENT_SIZE_MISMATCH (Net, RepNotify)
	unsigned char                                      UnknownData_BNO7[0x20];                                    // 0x0330(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     DisplayNameAsString;                                       // 0x0368(0x0010) (Net, ZeroConstructor, RepNotify, HasGetValueTypeHash)
	struct FString                                     DebugDisplayText;                                          // 0x0378(0x0010) (Net, ZeroConstructor, RepNotify, HasGetValueTypeHash)
	bool                                               VisibilityDisabled;                                        // 0x0388(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AMI8[0xBF];                                    // 0x0389(0x00BF) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AINameplateComponent");
		return ptr;
	}



	void OnRep_Title();
	void OnRep_DisplayNameAsString();
	void OnRep_DisplayName();
	void OnRep_DebugDisplayText();
};

// Class AthenaAI.AINoiseFireInstigator
// 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
class AAINoiseFireInstigator : public AActor
{
public:
	unsigned char                                      UnknownData_RVBF[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AINoiseFireInstigator");
		return ptr;
	}



};

// Class AthenaAI.AIPartsService
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIPartsService : public UObject
{
public:
	unsigned char                                      UnknownData_WWAX[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIPartsCategoryTypeList*                    PartsCategoriesList;                                       // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UAIColorVariantPool*                         TeamColors;                                                // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPartsService");
		return ptr;
	}



};

// Class AthenaAI.AIPartCustomizationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPartCustomizationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPartCustomizationInterface");
		return ptr;
	}



};

// Class AthenaAI.AIPartIdListingAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAIPartIdListingAsset : public UDataAsset
{
public:
	TArray<struct FAIPartIdNumVariantInfo>             AIPartIdsVariantInfo;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPartIdListingAsset");
		return ptr;
	}



};

// Class AthenaAI.MeshMemoryConstraintsAIPartsDesc
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UMeshMemoryConstraintsAIPartsDesc : public UAIPartsDesc
{
public:
	unsigned char                                      UnknownData_4HRU[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStringAssetReference                       Mesh;                                                      // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int64_t                                            CachedMeshResourceSize;                                    // 0x0048(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      MeshFallbackCategory;                                      // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      BudgetToCountMemoryAgainstIfNoFallback;                    // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                         // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FStringAssetReference>               FallbackOverrideMaterials;                                 // 0x0070(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.MeshMemoryConstraintsAIPartsDesc");
		return ptr;
	}



};

// Class AthenaAI.AIPartsRetrievalInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPartsRetrievalInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPartsRetrievalInterface");
		return ptr;
	}



};

// Class AthenaAI.AIPartsRetrievalComponent
// 0x00A8 (FullSize[0x0170] - InheritedSize[0x00C8])
class UAIPartsRetrievalComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_HVSN[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIPartsCategory*                            PartsCategory;                                             // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FReplicatedAIPartsData                      ReplicatedAIPartsData;                                     // 0x00D8(0x0018) (Net, RepNotify)
	unsigned char                                      UnknownData_15HV[0x80];                                    // 0x00F0(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPartsRetrievalComponent");
		return ptr;
	}



	void RequestNewAIParts(class UAIPartsCategory* AssignedPartsCategory, int PartsIndexToUse, int TeamColorIndex);
	void OnRep_ReplicatedAIPartsData();
};

// Class AthenaAI.AIPawnInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPawnInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPawnInterface");
		return ptr;
	}



};

// Class AthenaAI.AIPawnTurnActiveInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPawnTurnActiveInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPawnTurnActiveInterface");
		return ptr;
	}



};

// Class AthenaAI.AIProximityPlayerTracker
// 0x01E0 (FullSize[0x0228] - InheritedSize[0x0048])
class UAIProximityPlayerTracker : public UAISpawnerPlayerTracker
{
public:
	unsigned char                                      UnknownData_BTOF[0x1E0];                                   // 0x0048(0x01E0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIProximityPlayerTracker");
		return ptr;
	}



};

// Class AthenaAI.FilterFirstPlayerEnterPlayerTrackerDecorator
// 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
class UFilterFirstPlayerEnterPlayerTrackerDecorator : public UAISpawnerPlayerTracker
{
public:
	unsigned char                                      UnknownData_T8KP[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.FilterFirstPlayerEnterPlayerTrackerDecorator");
		return ptr;
	}



};

// Class AthenaAI.AIProjectileInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIProjectileInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIProjectileInterface");
		return ptr;
	}



};

// Class AthenaAI.AIRegionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIRegionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIRegionInterface");
		return ptr;
	}



};

// Class AthenaAI.AIRegionComponent
// 0x0070 (FullSize[0x0320] - InheritedSize[0x02B0])
class UAIRegionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_6O5J[0x8];                                     // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               UpdateRegionPosition;                                      // 0x02B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YD31[0x3];                                     // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       NavMeshAgentType;                                          // 0x02BC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RegionRadius;                                              // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSpawnLocationGroup>                 SpawnLocationGroups;                                       // 0x02C8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData_E9F7[0x48];                                    // 0x02D8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIRegionComponent");
		return ptr;
	}



};

// Class AthenaAI.AIShipInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIShipInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIShipInterface");
		return ptr;
	}



};

// Class AthenaAI.AISpawnContextContainerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAISpawnContextContainerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnContextContainerInterface");
		return ptr;
	}



};

// Class AthenaAI.AISpawnContextContainerComponent
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
class UAISpawnContextContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_RD2T[0x18];                                    // 0x00C8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnContextContainerComponent");
		return ptr;
	}



};

// Class AthenaAI.AISpawnContextList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAISpawnContextList : public UDataAsset
{
public:
	TArray<struct FAISpawnContextData>                 SpawnContextList;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnContextList");
		return ptr;
	}



};

// Class AthenaAI.AISpawnContextProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAISpawnContextProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnContextProviderInterface");
		return ptr;
	}



};

// Class AthenaAI.AIFixedWavesSpawner
// 0x0028 (FullSize[0x0428] - InheritedSize[0x0400])
class UAIFixedWavesSpawner : public UAISpawner
{
public:
	TArray<struct FAIPersistentSpawnerWave>            SpawnedWaves;                                              // 0x0400(0x0010) (Edit, ZeroConstructor)
	int                                                NumWavesToSpawnOnSpottedNewTarget;                         // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RCQ5[0x14];                                    // 0x0414(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIFixedWavesSpawner");
		return ptr;
	}



};

// Class AthenaAI.AIIncrementalWaveSpawner
// 0x0118 (FullSize[0x0518] - InheritedSize[0x0400])
class UAIIncrementalWaveSpawner : public UAISpawner
{
public:
	struct FAISpawnerWave                              SpawnedWave;                                               // 0x0400(0x0100) (Edit)
	unsigned char                                      UnknownData_BOBB[0x18];                                    // 0x0500(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIIncrementalWaveSpawner");
		return ptr;
	}



};

// Class AthenaAI.AIInteractableSpawner
// 0x0100 (FullSize[0x0500] - InheritedSize[0x0400])
class UAIInteractableSpawner : public UAISpawner
{
public:
	class UClass*                                      AIInteractableType;                                        // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              InhabitedChance;                                           // 0x0408(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AYSC[0x4];                                     // 0x040C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterSuccessfulInhabitedCheck;                        // 0x0410(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterFailedInhabitedCheck;                            // 0x0440(0x0030) (Edit)
	float                                              SpawnForInteractableChance;                                // 0x0470(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G5RC[0x4];                                     // 0x0474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterSuccessfulSpawnOnInteractableCheck;              // 0x0478(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterFailedSpawnOnInteractableCheck;                  // 0x04A8(0x0030) (Edit)
	bool                                               RunInhabitedSimulation;                                    // 0x04D8(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               RunSpawnForInteractableSimulation;                         // 0x04D9(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_71SQ[0x2];                                     // 0x04DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumIterations;                                             // 0x04DC(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GEME[0x18];                                    // 0x04E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AthenaEngine_EPlayMode>                CachedPlaymode;                                            // 0x04F8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6OWO[0x7];                                     // 0x04F9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIInteractableSpawner");
		return ptr;
	}



};

// Class AthenaAI.AIOnDemandSpawner
// 0x0000 (FullSize[0x0400] - InheritedSize[0x0400])
class UAIOnDemandSpawner : public UAISpawner
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIOnDemandSpawner");
		return ptr;
	}



};

// Class AthenaAI.AIPerPlayerSpawner
// 0x01E8 (FullSize[0x05E8] - InheritedSize[0x0400])
class UAIPerPlayerSpawner : public UAISpawner
{
public:
	bool                                               CheckSpawnedActorsInRadiusBeforeSpawning;                  // 0x0400(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M3VC[0x3];                                     // 0x0401(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RadiusToCheckForExistingPopulation;                        // 0x0404(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxExistingPopulationInRadius;                             // 0x0408(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DespawnAllPawnsWhenAllPlayersLeave;                        // 0x040C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RTMB[0x3];                                     // 0x040D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxActorsTotalPerPlayer;                                   // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RunSimulation;                                             // 0x0414(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O053[0x3];                                     // 0x0415(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RankForSimulation;                                         // 0x0418(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumIterations;                                             // 0x041C(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WantsToTemporarilyRememberPlayers;                         // 0x0420(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4RX9[0x7];                                     // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           TemporaryPlayerMemoryTimeRange;                            // 0x0428(0x0030) (Edit)
	unsigned char                                      UnknownData_0OAT[0xE8];                                    // 0x0458(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class AActor*, struct FAIPerPlayerSpawnerPlayerDetailsUnit> PlayerDetails;                                             // 0x0540(0x0050) (ZeroConstructor, Transient)
	TMap<class AController*, struct FTemporaryPlayerDetailsUnitEntry> TemporaryPlayerDetails;                                    // 0x0590(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData_GD4A[0x8];                                     // 0x05E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIPerPlayerSpawner");
		return ptr;
	}



	void PlayerDeath(class AActor* Player);
};

// Class AthenaAI.NamedAIDataAsset
// 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
class UNamedAIDataAsset : public UDataAsset
{
public:
	TArray<struct FText>                               MaleCaptainNames;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               FemaleCaptainNames;                                        // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               MaleCrewNames;                                             // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               FemaleCrewNames;                                           // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAICustomNameTitleMapping>           CustomNameTitles;                                          // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAICustomClassIdNameOverrides>       CustomNameOverrides;                                       // 0x0078(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      DefaultClassId;                                            // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      FemaleCaptainClassId;                                      // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      MaleCaptainClassId;                                        // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      FemaleCrewClassId;                                         // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      MaleCrewClassId;                                           // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.NamedAIDataAsset");
		return ptr;
	}



};

// Class AthenaAI.AIBoobyTrapSpawner
// 0x00D0 (FullSize[0x06B8] - InheritedSize[0x05E8])
class UAIBoobyTrapSpawner : public UAIPerPlayerSpawner
{
public:
	int                                                NumberOfWavesToSpawn;                                      // 0x05E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5BN8[0x4];                                     // 0x05EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 NewWaveSpawnSfx;                                           // 0x05F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewWaveSpawnSfxTriggerRadius;                              // 0x05F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KJY0[0x4];                                     // 0x05FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              ShowNameplatesFor;                                         // 0x0600(0x0010) (Edit, ZeroConstructor, UObjectWrapper)
	class UNamedAIDataAsset*                           NamedAIDataAsset;                                          // 0x0610(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ActorToTrack;                                              // 0x0618(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M0H0[0x98];                                    // 0x0620(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIBoobyTrapSpawner");
		return ptr;
	}



};

// Class AthenaAI.AIProgressiveWavesSpawner
// 0x0030 (FullSize[0x0430] - InheritedSize[0x0400])
class UAIProgressiveWavesSpawner : public UAISpawner
{
public:
	TArray<struct FAIPersistentSpawnerWave>            Waves;                                                     // 0x0400(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData_BV85[0x18];                                    // 0x0410(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TriggerActor;                                              // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIProgressiveWavesSpawner");
		return ptr;
	}



};

// Class AthenaAI.AISpawnerSpawnInteractableAssignmentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAISpawnerSpawnInteractableAssignmentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnerSpawnInteractableAssignmentInterface");
		return ptr;
	}



};

// Class AthenaAI.AIWaveSpawner
// 0x0138 (FullSize[0x0538] - InheritedSize[0x0400])
class UAIWaveSpawner : public UAISpawner
{
public:
	unsigned char                                      UnknownData_BPVI[0x8];                                     // 0x0400(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAISpawnerWave                              SpawnedWave;                                               // 0x0408(0x0100) (Edit)
	float                                              MinRespawnTime;                                            // 0x0508(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxRespawnTime;                                            // 0x050C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QZB8[0x28];                                    // 0x0510(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIWaveSpawner");
		return ptr;
	}



};

// Class AthenaAI.AISpawnerList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAISpawnerList : public UDataAsset
{
public:
	TArray<class UAISpawner*>                          Spawners;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnerList");
		return ptr;
	}



};

// Class AthenaAI.AISpawnOverrideCondition
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UAISpawnOverrideCondition : public UObject
{
public:
	bool                                               InvertResult;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FBPD[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnOverrideCondition");
		return ptr;
	}



};

// Class AthenaAI.AISpawnCampaignCondition
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UAISpawnCampaignCondition : public UAISpawnOverrideCondition
{
public:
	struct FName                                       CampaignName;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_34XM[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnCampaignCondition");
		return ptr;
	}



};

// Class AthenaAI.AISpawnComplexCondition
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UAISpawnComplexCondition : public UAISpawnOverrideCondition
{
public:
	TArray<class UAISpawnOverrideCondition*>           Conditions;                                                // 0x0030(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnComplexCondition");
		return ptr;
	}



};

// Class AthenaAI.AISpawnAndCondition
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UAISpawnAndCondition : public UAISpawnComplexCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnAndCondition");
		return ptr;
	}



};

// Class AthenaAI.AISpawnOrCondition
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UAISpawnOrCondition : public UAISpawnComplexCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnOrCondition");
		return ptr;
	}



};

// Class AthenaAI.AISpawnMatchesAllContextsCondition
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UAISpawnMatchesAllContextsCondition : public UAISpawnOverrideCondition
{
public:
	TArray<class UClass*>                              Contexts;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnMatchesAllContextsCondition");
		return ptr;
	}



};

// Class AthenaAI.AISpawnMatchesAnyContextCondition
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UAISpawnMatchesAnyContextCondition : public UAISpawnOverrideCondition
{
public:
	TArray<class UClass*>                              Contexts;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnMatchesAnyContextCondition");
		return ptr;
	}



};

// Class AthenaAI.StaticAISpawnCondition
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UStaticAISpawnCondition : public UAISpawnOverrideCondition
{
public:
	bool                                               ShouldApplyOverride;                                       // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0MFF[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.StaticAISpawnCondition");
		return ptr;
	}



};

// Class AthenaAI.AISpawnPointSeedComponent
// 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
class UAISpawnPointSeedComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnPointSeedComponent");
		return ptr;
	}



};

// Class AthenaAI.AISpawnRegionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAISpawnRegionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AISpawnRegionInterface");
		return ptr;
	}



};

// Class AthenaAI.AITargetServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAITargetServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AITargetServiceInterface");
		return ptr;
	}



};

// Class AthenaAI.AITargetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAITargetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AITargetInterface");
		return ptr;
	}



};

// Class AthenaAI.AITargetActor
// 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
class AAITargetActor : public AActor
{
public:
	unsigned char                                      UnknownData_D53O[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             Root;                                                      // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EAthenaAITeam>                  Team;                                                      // 0x03E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_284V[0x7];                                     // 0x03E1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AITargetActor");
		return ptr;
	}



};

// Class AthenaAI.AITargetService
// 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
class AAITargetService : public AActor
{
public:
	unsigned char                                      UnknownData_D47S[0x18];                                    // 0x03D0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AITargetService");
		return ptr;
	}



};

// Class AthenaAI.AITargetWeaponInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAITargetWeaponInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AITargetWeaponInterface");
		return ptr;
	}



	bool FindAimConfigToHitTarget(const struct FVector& Target, bool CheckYaw, struct FRotator* OutAimConfig);
};

// Class AthenaAI.AIWithFormInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIWithFormInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIWithFormInterface");
		return ptr;
	}



};

// Class AthenaAI.AmbientWaterSpawnerManager
// 0x0250 (FullSize[0x0620] - InheritedSize[0x03D0])
class AAmbientWaterSpawnerManager : public AActor
{
public:
	unsigned char                                      UnknownData_3GPJ[0x10];                                    // 0x03D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             Root;                                                      // 0x03E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaAISettings*                           AthenaAISettings;                                          // 0x03E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               AISpawnBlockingContextNames;                               // 0x03F0(0x0010) (Edit, ZeroConstructor)
	class UAIPerPlayerSpawner*                         SharkPerPlayerSpawnerTemplate;                             // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIPerPlayerSpawner*                         SirenPerPlayerSpawnerTemplate;                             // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SirenEncounterRegionRadius;                                // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SirenEncounterShutdownTime;                                // 0x0414(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedProbabilityRangeOfRanges           InitialSirenSpawningWeightedTimeRange;                     // 0x0418(0x0030) (Edit, Config)
	struct FWeightedProbabilityRangeOfRanges           UnsuccessfulSirenSpawningWeightedTimeRange;                // 0x0448(0x0030) (Edit, Config)
	struct FWeightedProbabilityRangeOfRanges           SuccessfulSirenSpawningWeightedTimeRange;                  // 0x0478(0x0030) (Edit, Config)
	struct FChanceForSharksToBlockSirenEncounterData   SharkEncounterSpawnBlockingData;                           // 0x04A8(0x000C) (Edit)
	unsigned char                                      UnknownData_ROFW[0x4];                                     // 0x04B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPerDepthSpawnChance>                PerDepthSpawnChances;                                      // 0x04B8(0x0010) (Edit, ZeroConstructor)
	class UAIPerPlayerSpawner*                         SharkPerPlayerSpawner;                                     // 0x04C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CTQ9[0x130];                                   // 0x04D0(0x0130) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlayerInWaterData>                  PlayersInWater;                                            // 0x0600(0x0010) (ZeroConstructor, Transient)
	TArray<struct FSirenEncounterData>                 SirenEncounters;                                           // 0x0610(0x0010) (ZeroConstructor, Transient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AmbientWaterSpawnerManager");
		return ptr;
	}



	void OnPlayerDeath(class AActor* InActorDying);
};

// Class AthenaAI.AmmunitionItemClassProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAmmunitionItemClassProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AmmunitionItemClassProviderInterface");
		return ptr;
	}



};

// Class AthenaAI.AppliedStatusToMultipleAIWithFormsStatCondition
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UAppliedStatusToMultipleAIWithFormsStatCondition : public UStatCondition
{
public:
	TArray<class UClass*>                              Status;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	int                                                AICountMinimum;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllowAllForms;                                             // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OKS1[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TAssetPtr<class UClass>>                    AllowedAIForms;                                            // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AppliedStatusToMultipleAIWithFormsStatCondition");
		return ptr;
	}



};

// Class AthenaAI.AquaticAITargetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAquaticAITargetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AquaticAITargetInterface");
		return ptr;
	}



};

// Class AthenaAI.BurrowAIAbility
// 0x00C8 (FullSize[0x0140] - InheritedSize[0x0078])
class UBurrowAIAbility : public UAthenaAIAbility
{
public:
	TArray<struct FVector>                             LocationsToSpawnCrack;                                     // 0x0078(0x0010) (ZeroConstructor)
	struct FTimerHandle                                TimerHandleStartNextSpawnWave;                             // 0x0088(0x0004)
	unsigned char                                      UnknownData_UIJN[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      CachedTarget;                                              // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QHWB[0x8C];                                    // 0x0098(0x008C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bExecuting;                                                // 0x0124(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bProcessingSpawnLocations;                                 // 0x0125(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3AHF[0x1A];                                    // 0x0126(0x001A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowAIAbility");
		return ptr;
	}



};

// Class AthenaAI.BurrowCrack
// 0x0040 (FullSize[0x0410] - InheritedSize[0x03D0])
class ABurrowCrack : public AActor
{
public:
	class USceneComponent*                             DefaultSceneComponent;                                     // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                             DecalComponent;                                            // 0x03D8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeOutTimeSeconds;                                        // 0x03E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasFadeStarted;                                            // 0x03E4(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_IBOX[0x2B];                                    // 0x03E5(0x002B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowCrack");
		return ptr;
	}



	void OnRep_StartFadeAndLifeSpan();
	void OnLifeSpanPercentLeft(float PercentLeft);
};

// Class AthenaAI.BurrowAIAbilityParams
// 0x0078 (FullSize[0x0140] - InheritedSize[0x00C8])
class UBurrowAIAbilityParams : public UAthenaAIAbilityParams
{
public:
	TArray<TEnumAsByte<Engine_EPhysicalSurface>>       ValidBurrowSurfaceTypes;                                   // 0x00C8(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      BurrowCrackToSpawn;                                        // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      BurrowEruptArea;                                           // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UEnvQuery*                                   EnvQueryLinesToTarget;                                     // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnvQuery*                                   EnvQueryAroundTarget;                                      // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     OffsetPositionForStartTrace;                               // 0x00F8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SurfaceDetectRaycastLength;                                // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BurrowAroundTargetRange;                                   // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSurfaceAngleForBurrow;                                  // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEruptFromClosestSpawn;                                    // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_09FE[0x3];                                     // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMinMaxBurrowAbility                        EruptionDelayRndBetweenMinMaxSeconds;                      // 0x0114(0x0008) (Edit)
	struct FMinMaxBurrowAbility                        NumberOfCrackWavesMinMax;                                  // 0x011C(0x0008) (Edit)
	struct FMinMaxBurrowAbility                        RndSecondsBetweenCrackWaves;                               // 0x0124(0x0008) (Edit)
	struct FMinMaxBurrowAbility                        NumberOfCracksPerWaveMinMax;                               // 0x012C(0x0008) (Edit)
	struct FMinMaxBurrowAbility                        RndSecondsBetweenEachCrackSpawn;                           // 0x0134(0x0008) (Edit)
	unsigned char                                      UnknownData_RXTT[0x4];                                     // 0x013C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowAIAbilityParams");
		return ptr;
	}



};

// Class AthenaAI.BurrowHealAIAbilityParams
// 0x0030 (FullSize[0x0170] - InheritedSize[0x0140])
class UBurrowHealAIAbilityParams : public UBurrowAIAbilityParams
{
public:
	class UClass*                                      AllyTypeToHeal;                                            // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              HealDuration;                                              // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RadiusForValidTargets;                                     // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfTargetsToHeal;                                     // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KZSL[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStatus                                     StatusToApplyOnHeal;                                       // 0x0158(0x0018) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowHealAIAbilityParams");
		return ptr;
	}



};

// Class AthenaAI.BurrowHealAIAbility
// 0x0010 (FullSize[0x0150] - InheritedSize[0x0140])
class UBurrowHealAIAbility : public UBurrowAIAbility
{
public:
	unsigned char                                      UnknownData_CIK8[0x10];                                    // 0x0140(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowHealAIAbility");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIBuffAbilityInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAIBuffAbilityInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIBuffAbilityInterface");
		return ptr;
	}



};

// Class AthenaAI.CoralShieldAbility
// 0x00B0 (FullSize[0x0128] - InheritedSize[0x0078])
class UCoralShieldAbility : public UAthenaAIAbility
{
public:
	TArray<TWeakObjectPtr<class APawn>>                PotentialTargets;                                          // 0x0078(0x0010) (ZeroConstructor, UObjectWrapper)
	unsigned char                                      CachedAIManager[0x10];                                     // 0x0088(0x0010) UNKNOWN PROPERTY: InterfaceProperty AthenaAI.CoralShieldAbility.CachedAIManager
	unsigned char                                      CachedBuffReceiver[0x10];                                  // 0x0098(0x0010) UNKNOWN PROPERTY: InterfaceProperty AthenaAI.CoralShieldAbility.CachedBuffReceiver
	TArray<struct FBuffedTargetData>                   BuffedTargets;                                             // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_2SWL[0x70];                                    // 0x00B8(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.CoralShieldAbility");
		return ptr;
	}



};

// Class AthenaAI.ElectricShieldAbility
// 0x0098 (FullSize[0x0110] - InheritedSize[0x0078])
class UElectricShieldAbility : public UAthenaAIAbility
{
public:
	unsigned char                                      UnknownData_EFPT[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      SelectedTargets[0x10];                                     // 0x0078(0x0010) UNKNOWN PROPERTY: ArrayProperty AthenaAI.ElectricShieldAbility.SelectedTargets
	unsigned char                                      CachedAIManager[0x10];                                     // 0x0090(0x0010) UNKNOWN PROPERTY: InterfaceProperty AthenaAI.ElectricShieldAbility.CachedAIManager
	unsigned char                                      OwnerChainLightningSourceInterface[0x10];                  // 0x00A0(0x0010) UNKNOWN PROPERTY: InterfaceProperty AthenaAI.ElectricShieldAbility.OwnerChainLightningSourceInterface
	unsigned char                                      UnknownData_YU2I[0x60];                                    // 0x00B0(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.ElectricShieldAbility");
		return ptr;
	}



};

// Class AthenaAI.SporeBreathAIAbility
// 0x0038 (FullSize[0x00B0] - InheritedSize[0x0078])
class USporeBreathAIAbility : public UAthenaAIAbility
{
public:
	class AStatusEffectOverlapZone*                    BreathActor;                                               // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVFXSpawnerComponent*                        BreathVFX;                                                 // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_00XR[0x28];                                    // 0x0088(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SporeBreathAIAbility");
		return ptr;
	}



};

// Class AthenaAI.TeleportAIAbility
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UTeleportAIAbility : public UAthenaAIAbility
{
public:
	unsigned char                                      UnknownData_4UAM[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.TeleportAIAbility");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIAbilityHandlerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAIAbilityHandlerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityHandlerInterface");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIAbilityComponent
// 0x0100 (FullSize[0x01C8] - InheritedSize[0x00C8])
class UAthenaAIAbilityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_SRRK[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAthenaAIAbility*>                    AIAbilities;                                               // 0x00D0(0x0010) (ZeroConstructor, Transient)
	TArray<class UAthenaAIAbility*>                    ActivatableAbilitiesInCurrentStage;                        // 0x00E0(0x0010) (ZeroConstructor, Transient)
	class UAthenaAIAbility*                            CurrentAIAbility;                                          // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      QueuedAbilityType;                                         // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      DebugAlwaysOnAbility;                                      // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FAthenaAIAbilityDamageStage>         AbilityDamageStages;                                       // 0x0108(0x0010) (ZeroConstructor, Transient, ContainsInstancedReference)
	unsigned char                                      UnknownData_MYBI[0xB0];                                    // 0x0118(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityComponent");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIAbilityHandlerComponent
// 0x0118 (FullSize[0x01E0] - InheritedSize[0x00C8])
class UAthenaAIAbilityHandlerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_L4Z8[0xB0];                                    // 0x00C8(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAthenaAIAbilityDamageStage>         AbilityStages;                                             // 0x0178(0x0010) (ZeroConstructor, ContainsInstancedReference, Protected)
	TArray<class UAthenaAIAbility*>                    AIAbilities;                                               // 0x0188(0x0010) (ZeroConstructor)
	TArray<class UClass*>                              ReadyAbilitiesPool;                                        // 0x0198(0x0010) (ZeroConstructor, UObjectWrapper)
	unsigned char                                      UnknownData_FIZQ[0x20];                                    // 0x01A8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DebugAlwaysOnAbility;                                      // 0x01C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      RequiresActivation;                                        // 0x01D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VM8N[0x8];                                     // 0x01D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityHandlerComponent");
		return ptr;
	}



};

// Class AthenaAI.CoralShieldAbilityParams
// 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
class UCoralShieldAbilityParams : public UAthenaAIAbilityParams
{
public:
	float                                              ShieldEffectRadius;                                        // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageNeededToBreakShield;                                 // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShieldLifeTime;                                            // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D0VS[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStatus                                     CoralShieldStatusEffect;                                   // 0x00D8(0x0018) (Edit)
	class UDamageableVulnerabilityLayer*               VulnerabilityToApplyToSelf;                                // 0x00F0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              DelayBeforeSFXPlays;                                       // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3SAI[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.CoralShieldAbilityParams");
		return ptr;
	}



};

// Class AthenaAI.ElectricShieldAbilityParams
// 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
class UElectricShieldAbilityParams : public UAthenaAIAbilityParams
{
public:
	float                                              ChargeUpTime;                                              // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J2P5[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStatus                                     BuffInterruptedStatusEffect;                               // 0x00D0(0x0018) (Edit)
	struct FStatus                                     ElectricShieldStatusEffect;                                // 0x00E8(0x0018) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.ElectricShieldAbilityParams");
		return ptr;
	}



};

// Class AthenaAI.SporeBreathAIAbilityParams
// 0x0080 (FullSize[0x0148] - InheritedSize[0x00C8])
class USporeBreathAIAbilityParams : public UAthenaAIAbilityParams
{
public:
	struct FAthenaAIAbilityPlayerBasedRanges           BreathMaxDuration;                                         // 0x00C8(0x0010) (Edit)
	float                                              BreathContinueThresholdDistance;                           // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OX2O[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BreathActor;                                               // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVFXHandlerComponentParams                  BreathVFXParams;                                           // 0x00E8(0x0040) (Edit)
	struct FVector                                     BreathCollisionVolumeSize;                                 // 0x0128(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BreathCollisionForwardOffset;                              // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BreathStartDelay;                                          // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_023E[0x4];                                     // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      VfxSpawner;                                                // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SporeBreathAIAbilityParams");
		return ptr;
	}



};

// Class AthenaAI.BurrowAIAbilityType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBurrowAIAbilityType : public UAthenaAIAbilityType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowAIAbilityType");
		return ptr;
	}



};

// Class AthenaAI.BurrowHealAIAbilityType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBurrowHealAIAbilityType : public UAthenaAIAbilityType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowHealAIAbilityType");
		return ptr;
	}



};

// Class AthenaAI.CoralShieldAbilityType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCoralShieldAbilityType : public UAthenaAIAbilityType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.CoralShieldAbilityType");
		return ptr;
	}



};

// Class AthenaAI.ElectricShieldAbilityType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UElectricShieldAbilityType : public UAthenaAIAbilityType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.ElectricShieldAbilityType");
		return ptr;
	}



};

// Class AthenaAI.SporeBreathAIAbilityType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USporeBreathAIAbilityType : public UAthenaAIAbilityType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SporeBreathAIAbilityType");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIRangeBasedAmmoDataAsset
// 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
class UAthenaAIRangeBasedAmmoDataAsset : public UAthenaAIAmmoDataAsset
{
public:
	TArray<struct FWeightedAmmoTypeRange>              AmmoTypeRanges;                                            // 0x00D0(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIRangeBasedAmmoDataAsset");
		return ptr;
	}



};

// Class AthenaAI.AthenaAICharacterPathFollowingComponent
// 0x0038 (FullSize[0x02F0] - InheritedSize[0x02B8])
class UAthenaAICharacterPathFollowingComponent : public UPathFollowingComponent
{
public:
	float                                              ProportionOfTurnToMove;                                    // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinAngleToTurnOnSpot;                                      // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReachedGoalMaxSpeedToSlowDistanceFactor;                   // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AbortMoveMaxSpeedToSlowDistanceFactor;                     // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9K60[0x4];                                     // 0x02C8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinSlowDownSpeed;                                          // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N2EY[0x20];                                    // 0x02D0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterPathFollowingComponent");
		return ptr;
	}



};

// Class AthenaAI.AthenaAICharacterStatsInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAICharacterStatsInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterStatsInterface");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIControllerBase
// 0x0158 (FullSize[0x0618] - InheritedSize[0x04C0])
class AAthenaAIControllerBase : public AAIController
{
public:
	unsigned char                                      UnknownData_TE9N[0x158];                                   // 0x04C0(0x0158) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerBase");
		return ptr;
	}



	void SetNamedControllerParam(const struct FName& ParamName, float Value);
	struct FWeightedProbabilityRangeOfRanges FindNamedWeightedRangesControllerParam(const struct FName& ParamName);
	float FindNamedControllerParam(const struct FName& ParamName);
	void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn);
};

// Class AthenaAI.AthenaAIController
// 0x02D8 (FullSize[0x08F0] - InheritedSize[0x0618])
class AAthenaAIController : public AAthenaAIControllerBase
{
public:
	unsigned char                                      UnknownData_5P4N[0x24];                                    // 0x0618(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentTargetPerceivedNotVisibleAge;                       // 0x063C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PI4R[0x40];                                    // 0x0640(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAISenseConfig_Sight*                        SightConfig;                                               // 0x0680(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UAISenseConfig_Hearing*                      HearingConfig;                                             // 0x0688(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UAISenseConfig_Damage*                       DamageSenseConfig;                                         // 0x0690(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5STD[0x48];                                    // 0x0698(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAthenaAIControllerSenseSettingOverride> AIStrategySenseSettingOverrides;                           // 0x06E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_8GEA[0x1D8];                                   // 0x06F0(0x01D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      CurrentNotSeenPerceivedActor;                              // 0x08C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      PendingSpawnTriggerActor;                                  // 0x08D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MVHT[0x18];                                    // 0x08D8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIController");
		return ptr;
	}



	void StopBehaviourLogic();
	void SetPerceptionExpirationAgeForActor(class AActor* Actor, float ExpirationAge, class UClass* Sense);
	void RegisterSpawnTriggerActorAsStimulus(class AActor* TriggerActor);
	void OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors);
	void OnNewlySpawned();
	void OnFinishDespawn();
	bool IsActorPerceived(class AActor* TargetActor);
	class AActor* GetTargetActor();
	class UAthenaAIPerceptionComponent* GetAthenaAIPerceptionComponent();
	void GetAllSeenActors(TArray<class AActor*>* SeenActors);
	void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn);
};

// Class AthenaAI.SpawnItemDescProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USpawnItemDescProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SpawnItemDescProviderInterface");
		return ptr;
	}



};

// Class AthenaAI.AthenaAICharacterController
// 0x0220 (FullSize[0x0B10] - InheritedSize[0x08F0])
class AAthenaAICharacterController : public AAthenaAIController
{
public:
	unsigned char                                      UnknownData_M4UL[0x8];                                     // 0x08F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAthenaAIItemParamsDataAsset*                ItemParamsDataAsset;                                       // 0x08F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutAsset*                               FallbackLoadoutIfAllEngageItemsDropped;                    // 0x0900(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ControlRotationInterpSpeed;                                // 0x0908(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ControlRotationUseConstantInterp;                          // 0x090C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               FaceTargetDisabled;                                        // 0x090D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HTPQ[0x2];                                     // 0x090E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinTurnAngleToPlayTurnAnim;                                // 0x0910(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BH74[0x14];                                    // 0x0914(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAthenaAICharacterControllerParamsDataAsset* CharacterParamsDataAsset;                                  // 0x0928(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LS47[0x90];                                    // 0x0930(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAthenaAICharacterControllerSpawnItemDescForItemCategory> SpawnItemDescForItemCategories;                            // 0x09C0(0x0010) (ZeroConstructor)
	TArray<class UAthenaAIAbilityParams*>              AIAbilityParams;                                           // 0x09D0(0x0010) (ZeroConstructor)
	TArray<struct FAthenaAIEngageEnemyData>            NonItemEngageOptions;                                      // 0x09E0(0x0010) (ZeroConstructor)
	class UCurveFloat*                                 DistanceInMToCannonShotHitChanceCurve;                     // 0x09F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6NVT[0x118];                                   // 0x09F8(0x0118) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterController");
		return ptr;
	}



	void SetOverridePrioritiseInteractablesBeforeEnemies(bool InPrioritiseInteractablesBeforeEnemies);
	void SetItemSpecificNamedControllerParam(class UClass* InItemCategory, const struct FName& ParamName, float Value);
	void SetDisableTurningForTest(bool InDisableTurningForTest);
	void ClearOverridePrioritiseInteractablesBeforeEnemies();
};

// Class AthenaAI.AthenaAIControllerNavMeshTogglesInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAIControllerNavMeshTogglesInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerNavMeshTogglesInterface");
		return ptr;
	}



};

// Class AthenaAI.FaunaAIContollerParamsDataAsset
// 0x0088 (FullSize[0x0188] - InheritedSize[0x0100])
class UFaunaAIContollerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
{
public:
	struct FWeightedProbabilityRange                   Courage;                                                   // 0x0100(0x0020) (Edit)
	TArray<struct FCarriedItemThreatOverride>          CarriedItemThreatOverrides;                                // 0x0120(0x0010) (Edit, ZeroConstructor)
	bool                                               ThreatenedBySightOfCarrier;                                // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RKV7[0x7];                                     // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHearingThreat>                      KnownHearingDangers;                                       // 0x0138(0x0010) (Edit, ZeroConstructor)
	float                                              CarrierHearingThreatSpeedThreshold;                        // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageThreat;                                              // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 CharacterDistanceToDangerRatingCurve;                      // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 DangerRatingToAgitationDurationCurve;                      // 0x0158(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeToBecomeAgitatedMin;                                   // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeToBecomeAgitatedMax;                                   // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AgitationDurationVariance;                                 // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AlertThreshold;                                            // 0x016C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FleeThreshold;                                             // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeToBecomeCalm;                                          // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CalmCooldownTime;                                          // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDistanceFromLeaderForIdle;                              // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 DistanceToLeaderPatrolChanceCurve;                         // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.FaunaAIContollerParamsDataAsset");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIControllerParamsDataProvider
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAthenaAIControllerParamsDataProvider : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FloatValue;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IntValue;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BoolValue;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YQ5C[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerParamsDataProvider");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIControllerParamsTargetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAIControllerParamsTargetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerParamsTargetInterface");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIFormComponentContainerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAIFormComponentContainerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIFormComponentContainerInterface");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIPerceptionComponent
// 0x0000 (FullSize[0x01C8] - InheritedSize[0x01C8])
class UAthenaAIPerceptionComponent : public UAIPerceptionComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIPerceptionComponent");
		return ptr;
	}



	bool IsPerceptionSenseEnabled(class UClass* Sense);
	bool IsAnyPerceptionEnabled();
	void EnablePerceptionSense(class UClass* Sense, bool Enable);
	void EnableAllPerception(bool Enable);
};

// Class AthenaAI.AthenaAISightTargetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAISightTargetInterface : public UAISightTargetInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAISightTargetInterface");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIWeightedRangesDataProvider
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UAthenaAIWeightedRangesDataProvider : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedProbabilityRangeOfRanges           WeightedRangesValue;                                       // 0x0030(0x0030)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIWeightedRangesDataProvider");
		return ptr;
	}



};

// Class AthenaAI.BlackboardAIDataProvider
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UBlackboardAIDataProvider : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FloatValue;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IntValue;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BoolValue;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EM76[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BlackboardAIDataProvider");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_ActionState
// 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
class UBTDecorator_ActionState : public UBTDecorator
{
public:
	TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId;                                                   // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B7LX[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      StateId;                                                   // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_179R[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ActionState");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_ActorInWater
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UBTDecorator_ActorInWater : public UBTDecorator_BlackboardBase
{
public:
	bool                                               ReverseLogic;                                              // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FXAA[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ActorInWater");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_CurrentAIStrategy
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_CurrentAIStrategy : public UBTDecorator_BaseConditional
{
public:
	TArray<class UClass*>                              Strategies;                                                // 0x0068(0x0010) (Edit, ZeroConstructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CurrentAIStrategy");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_IsActorInExpectedActionState
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_IsActorInExpectedActionState : public UBTDecorator_BaseConditional
{
public:
	class UClass*                                      ExpectedActionState;                                       // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> ExpectedTrackId;                                           // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UNJC[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_IsActorInExpectedActionState");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_ItemReadyToUse
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UBTDecorator_ItemReadyToUse : public UBTDecorator_BaseConditional
{
public:
	class UClass*                                      NotificationId;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ItemReadyToUse");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_LeftOfAIPawn
// 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
class UBTDecorator_LeftOfAIPawn : public UBTDecorator_BaseConditional
{
public:
	struct FBlackboardKeySelector                      TargetKey;                                                 // 0x0068(0x0028) (Edit)
	bool                                               ReverseLogic;                                              // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XGI2[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_LeftOfAIPawn");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_LineOfSightToTarget
// 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
class UBTDecorator_LineOfSightToTarget : public UBTDecorator_BaseConditional
{
public:
	float                                              Interval;                                                  // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_89JI[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      TargetActorKey;                                            // 0x0070(0x0028) (Edit)
	bool                                               UseTargetPosition;                                         // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PSNN[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      TargetPositionKey;                                         // 0x00A0(0x0028) (Edit)
	struct FVector                                     OffsetToApplyToTargetPosition;                             // 0x00C8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1SQY[0x1C];                                    // 0x00D4(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_LineOfSightToTarget");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_CompareBlackboardClassValue
// 0x0028 (FullSize[0x00B8] - InheritedSize[0x0090])
class UBTDecorator_CompareBlackboardClassValue : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      Class;                                                     // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Invert;                                                    // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N1VB[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CachedDescription;                                         // 0x00A0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash)
	TEnumAsByte<AIModule_EBTBlackboardRestart>         NotifyObserver;                                            // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_95KE[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardClassValue");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_CompareBlackboardIntValue
// 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
class UBTDecorator_CompareBlackboardIntValue : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0068(0x0028) (Edit)
	int                                                Value;                                                     // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EBlackboardIntValueComparisonType> ComparisonType;                                            // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VRWI[0x3];                                     // 0x0095(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardIntValue");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_CompareBlackboardValues
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
class UBTDecorator_CompareBlackboardValues : public UBTDecorator
{
public:
	TArray<struct FBlackboardValueCondition>           FloatConditions;                                           // 0x0068(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<AthenaAI_EBlackboardValueCompositeType> FloatConditionComposite;                                   // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8X3H[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardValues");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_CompareFloatValueBase
// 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
class UBTDecorator_CompareFloatValueBase : public UBTDecorator_CompareBlackboardValues
{
public:
	TEnumAsByte<AthenaAI_EFloatValueComparisonType>    Comparison;                                                // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1LMH[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   Value;                                                     // 0x0088(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareFloatValueBase");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_CompareBlackboardActorSpeed
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UBTDecorator_CompareBlackboardActorSpeed : public UBTDecorator_CompareFloatValueBase
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x00B8(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardActorSpeed");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_CompareBlackboardFloatValue
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UBTDecorator_CompareBlackboardFloatValue : public UBTDecorator_CompareFloatValueBase
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x00B8(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardFloatValue");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_CompareCurrentHealth
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UBTDecorator_CompareCurrentHealth : public UBTDecorator_CompareFloatValueBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareCurrentHealth");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_TargetInRange
// 0x0088 (FullSize[0x0108] - InheritedSize[0x0080])
class UBTDecorator_TargetInRange : public UBTDecorator_CompareBlackboardValues
{
public:
	struct FAIDataProviderFloatValue                   EnterRange;                                                // 0x0080(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   ExitRange;                                                 // 0x00B0(0x0030) (Edit, ContainsInstancedReference)
	struct FBlackboardKeySelector                      TargetKey;                                                 // 0x00E0(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TargetInRange");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_TargetInRangeOfPoint
// 0x0028 (FullSize[0x0130] - InheritedSize[0x0108])
class UBTDecorator_TargetInRangeOfPoint : public UBTDecorator_TargetInRange
{
public:
	struct FBlackboardKeySelector                      ReferencePointKey;                                         // 0x0108(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TargetInRangeOfPoint");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_TestRange
// 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
class UBTDecorator_TestRange : public UBTDecorator_CompareBlackboardValues
{
public:
	struct FAIDataProviderFloatValue                   EnterRange;                                                // 0x0080(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   ExitRange;                                                 // 0x00B0(0x0030) (Edit, ContainsInstancedReference)
	bool                                               TestForOutsideRange;                                       // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HM8W[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TestRange");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_TestRangeOfSeenActors
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class UBTDecorator_TestRangeOfSeenActors : public UBTDecorator_TestRange
{
public:
	unsigned char                                      UnknownData_UDPV[0x10];                                    // 0x00E8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TestRangeOfSeenActors");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_ConeCheck3D
// 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
class UBTDecorator_ConeCheck3D : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N8GY[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      ConeOrigin;                                                // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                  // 0x0098(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ConeCheck3D");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_DockedToInteractable
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UBTDecorator_DockedToInteractable : public UBTDecorator_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_DockedToInteractable");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_FeatureToggle
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UBTDecorator_FeatureToggle : public UBTDecorator
{
public:
	struct FName                                       FeatureName;                                               // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_FeatureToggle");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_IsAbilityAvailable
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UBTDecorator_IsAbilityAvailable : public UBTDecorator
{
public:
	class UClass*                                      AIAbilityType;                                             // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_IsAbilityAvailable");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_IsLocationInWater
// 0x0058 (FullSize[0x00E8] - InheritedSize[0x0090])
class UBTDecorator_IsLocationInWater : public UBTDecorator_BlackboardBase
{
public:
	struct FBlackboardKeySelector                      WaterVolumeActor;                                          // 0x0090(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetLocation;                                            // 0x00B8(0x0028) (Edit)
	bool                                               OnlyConsidersSwimmableWater;                               // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XZQT[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_IsLocationInWater");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_MultipleRandomDiceRolls
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_MultipleRandomDiceRolls : public UBTDecorator
{
public:
	TArray<struct FChanceAndBlackboardKeyPair>         ChanceKeyPairs;                                            // 0x0068(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_MultipleRandomDiceRolls");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_RandomDiceRoll
// 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
class UBTDecorator_RandomDiceRoll : public UBTDecorator
{
public:
	struct FAIDataProviderFloatValue                   Chance;                                                    // 0x0068(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_RandomDiceRoll");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_RandomLoop
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_RandomLoop : public UBTDecorator
{
public:
	int                                                MinNumLoops;                                               // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxNumLoops;                                               // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 RandomNumLoopCurve;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_RandomLoop");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_RollAgainstPatrolChance
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UBTDecorator_RollAgainstPatrolChance : public UBTDecorator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_RollAgainstPatrolChance");
		return ptr;
	}



};

// Class AthenaAI.BTDecorator_TestAIInteractableType
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UBTDecorator_TestAIInteractableType : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      Type;                                                      // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TestAIInteractableType");
		return ptr;
	}



};

// Class AthenaAI.BTService_AimAIInteractable
// 0x0078 (FullSize[0x00E8] - InheritedSize[0x0070])
class UBTService_AimAIInteractable : public UBTService
{
public:
	struct FBlackboardKeySelector                      Interactable;                                              // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                     // 0x0098(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetRelativeAimVector;                                   // 0x00C0(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_AimAIInteractable");
		return ptr;
	}



};

// Class AthenaAI.BTService_DefaultFocusToPosAtRelativeAngleToObject
// 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
class UBTService_DefaultFocusToPosAtRelativeAngleToObject : public UBTService_DefaultFocus
{
public:
	float                                              RelativeYawAngleOffset;                                    // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RelativeDistance;                                          // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_DefaultFocusToPosAtRelativeAngleToObject");
		return ptr;
	}



};

// Class AthenaAI.BTService_DetermineAIAbility
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UBTService_DetermineAIAbility : public UBTService
{
public:
	struct FBlackboardKeySelector                      BlockChangeAIAbilitiesKey;                                 // 0x0070(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_DetermineAIAbility");
		return ptr;
	}



};

// Class AthenaAI.BTService_DisableCollisions
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UBTService_DisableCollisions : public UBTService
{
public:
	TArray<TEnumAsByte<Engine_ECollisionChannel>>      ChannelsToLeaveUnaffected;                                 // 0x0070(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_DisableCollisions");
		return ptr;
	}



};

// Class AthenaAI.BTService_DisableDamageResponses
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UBTService_DisableDamageResponses : public UBTService
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_DisableDamageResponses");
		return ptr;
	}



};

// Class AthenaAI.BTService_DisableStun
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UBTService_DisableStun : public UBTService
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_DisableStun");
		return ptr;
	}



};

// Class AthenaAI.BTService_EnableFaceFocusActor
// 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
class UBTService_EnableFaceFocusActor : public UBTService_BlackboardBase
{
public:
	bool                                               DisableUpdateMoveFocusForCurrentPathOnExit;                // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6FJT[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FConditionalBasedOnBlackboardKey            Conditional;                                               // 0x00A0(0x0038) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_EnableFaceFocusActor");
		return ptr;
	}



};

// Class AthenaAI.BTService_IncrementFloatValueWithTimeSpentInBranch
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UBTService_IncrementFloatValueWithTimeSpentInBranch : public UBTService_BlackboardBase
{
public:
	float                                              TimeMultiplier;                                            // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K66Z[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_IncrementFloatValueWithTimeSpentInBranch");
		return ptr;
	}



};

// Class AthenaAI.BTService_OverrideTurnSpeed
// 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
class UBTService_OverrideTurnSpeed : public UBTService
{
public:
	struct FAIDataProviderFloatValue                   TurnSpeed;                                                 // 0x0070(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_OverrideTurnSpeed");
		return ptr;
	}



};

// Class AthenaAI.BTService_PlayCustomMontageId
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTService_PlayCustomMontageId : public UBTService
{
public:
	struct FCustomAnimationMontageId                   CustomAnimationMontageId;                                  // 0x0070(0x0008) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_PlayCustomMontageId");
		return ptr;
	}



};

// Class AthenaAI.BTService_QueryPerceptionForTarget
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UBTService_QueryPerceptionForTarget : public UBTService
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_QueryPerceptionForTarget");
		return ptr;
	}



};

// Class AthenaAI.BTService_RunEQSQuery
// 0x0050 (FullSize[0x00E8] - InheritedSize[0x0098])
class UBTService_RunEQSQuery : public UBTService_BlackboardBase
{
public:
	bool                                               OverrideQueryTemplateWithBlackboardValue;                  // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_F2MH[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      OverrideEQSKey;                                            // 0x00A0(0x0028) (Edit, Protected)
	class UEnvQuery*                                   QueryTemplate;                                             // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FEnvNamedValue>                      QueryParams;                                               // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<AIModule_EEnvQueryRunMode>             RunMode;                                                   // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ThrottleQueryTimePerFrame;                                 // 0x00E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U0FK[0x2];                                     // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxSecondsToSpendOnQueryPerFrame;                          // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_RunEQSQuery");
		return ptr;
	}



};

// Class AthenaAI.BTService_DoesEQSQuerySucceed
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UBTService_DoesEQSQuerySucceed : public UBTService_RunEQSQuery
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_DoesEQSQuerySucceed");
		return ptr;
	}



};

// Class AthenaAI.BTService_RunEQSQueryOnActorMovement
// 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
class UBTService_RunEQSQueryOnActorMovement : public UBTService_RunEQSQuery
{
public:
	struct FBlackboardKeySelector                      MovingActorKey;                                            // 0x00E8(0x0028) (Edit, Protected)
	float                                              MinimumActorMovementToRunEQS;                              // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              MinimumActorVelocityChangeToRunEQS;                        // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               RunEQSForYawChanges;                                       // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_0T73[0x3];                                     // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumActorYawChangeToRunEQS;                             // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B3GG[0x8];                                     // 0x0120(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_RunEQSQueryOnActorMovement");
		return ptr;
	}



};

// Class AthenaAI.BTService_SetAIAnimationState
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UBTService_SetAIAnimationState : public UBTService_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_SetAIAnimationState");
		return ptr;
	}



};

// Class AthenaAI.BTService_SetAIStrategy
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTService_SetAIStrategy : public UBTService
{
public:
	class UClass*                                      NewStrategy;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_SetAIStrategy");
		return ptr;
	}



};

// Class AthenaAI.BTService_SetBoolBlackboardValueToTrueOnCeaseRelevant
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UBTService_SetBoolBlackboardValueToTrueOnCeaseRelevant : public UBTService
{
public:
	struct FBlackboardKeySelector                      BoolValueKey;                                              // 0x0070(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_SetBoolBlackboardValueToTrueOnCeaseRelevant");
		return ptr;
	}



};

// Class AthenaAI.BTService_SetBoolBlackboardValueTrueWhileRelevant
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UBTService_SetBoolBlackboardValueTrueWhileRelevant : public UBTService
{
public:
	struct FBlackboardKeySelector                      BoolValueKey;                                              // 0x0070(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_SetBoolBlackboardValueTrueWhileRelevant");
		return ptr;
	}



};

// Class AthenaAI.BTService_SetNameBlackboardValueWhileRelevant
// 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
class UBTService_SetNameBlackboardValueWhileRelevant : public UBTService
{
public:
	struct FBlackboardKeySelector                      NameValueKey;                                              // 0x0070(0x0028) (Edit)
	struct FName                                       Value;                                                     // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_SetNameBlackboardValueWhileRelevant");
		return ptr;
	}



};

// Class AthenaAI.BTService_TriggerNotifications
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UBTService_TriggerNotifications : public UBTService
{
public:
	class UClass*                                      EnterBranchNotificationId;                                 // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      LeaveBranchNotificationId;                                 // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S1AY[0x18];                                    // 0x0080(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_TriggerNotifications");
		return ptr;
	}



};

// Class AthenaAI.BTService_UpdateFocusOnBBChange
// 0x0040 (FullSize[0x00E0] - InheritedSize[0x00A0])
class UBTService_UpdateFocusOnBBChange : public UBTService_DefaultFocus
{
public:
	bool                                               DisableUpdateMoveFocusForCurrentPathOnExit;                // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MSO7[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FConditionalBasedOnBlackboardKey            Conditional;                                               // 0x00A8(0x0038) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_UpdateFocusOnBBChange");
		return ptr;
	}



};

// Class AthenaAI.BTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UBTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile : public UBTService_UpdateFocusOnBBChange
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile");
		return ptr;
	}



};

// Class AthenaAI.BTService_UpdateTargetForInteractable
// 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
class UBTService_UpdateTargetForInteractable : public UBTService
{
public:
	struct FBlackboardKeySelector                      Interactable;                                              // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                     // 0x0098(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_UpdateTargetForInteractable");
		return ptr;
	}



};

// Class AthenaAI.BTService_UpdateViewPitchForWieldedProjectileToHitTarget
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UBTService_UpdateViewPitchForWieldedProjectileToHitTarget : public UBTService_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_UpdateViewPitchForWieldedProjectileToHitTarget");
		return ptr;
	}



};

// Class AthenaAI.BTTask_ApplyStatusComposite
// 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
class UBTTask_ApplyStatusComposite : public UBTTaskNode
{
public:
	bool                                               bOneShot;                                                  // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_885G[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   ContinuousStatusDuration;                                  // 0x0068(0x0030) (Edit, ContainsInstancedReference)
	struct FStatus                                     StatusToApply;                                             // 0x0098(0x0018) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_ApplyStatusComposite");
		return ptr;
	}



};

// Class AthenaAI.BTTask_AthenaMoveTo
// 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])
class UBTTask_AthenaMoveTo : public UBTTask_MoveTo
{
public:
	bool                                               ShouldFailBeforeSlowDown;                                  // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8K0O[0x3];                                     // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExitBeforeSlowDownDistanceTolerance;                       // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldOverrideMaxSpeedToSlow;                              // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_86PA[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OverrideMaxSpeedToSlowDistanceFactor;                      // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MaintainFacingBeforeMove;                                  // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N836[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_AthenaMoveTo");
		return ptr;
	}



};

// Class AthenaAI.BTTask_MoveToFailOnDistanceChange
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UBTTask_MoveToFailOnDistanceChange : public UBTTask_AthenaMoveTo
{
public:
	bool                                               FailOnDistanceBeingLess;                                   // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_04K5[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FailDistance;                                              // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToFailOnDistanceChange");
		return ptr;
	}



};

// Class AthenaAI.BTTask_MoveToFailOnDistanceToSeenActors
// 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
class UBTTask_MoveToFailOnDistanceToSeenActors : public UBTTask_MoveToFailOnDistanceChange
{
public:
	unsigned char                                      UnknownData_BUPN[0x10];                                    // 0x00C0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToFailOnDistanceToSeenActors");
		return ptr;
	}



};

// Class AthenaAI.BTTask_MoveToFailOnDistanceToTargetChanged
// 0x0028 (FullSize[0x00E8] - InheritedSize[0x00C0])
class UBTTask_MoveToFailOnDistanceToTargetChanged : public UBTTask_MoveToFailOnDistanceChange
{
public:
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                       // 0x00C0(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToFailOnDistanceToTargetChanged");
		return ptr;
	}



};

// Class AthenaAI.BTTask_MoveToMovingLocation
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UBTTask_MoveToMovingLocation : public UBTTask_AthenaMoveTo
{
public:
	float                                              MinimumLocationMovementForRePath;                          // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinimumTimeBeforeRePath;                                   // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsContinuous;                                              // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LCH8[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToMovingLocation");
		return ptr;
	}



};

// Class AthenaAI.BTTask_AthenaWait
// 0x0098 (FullSize[0x00F8] - InheritedSize[0x0060])
class UBTTask_AthenaWait : public UBTTaskNode
{
public:
	bool                                               UseMinMax;                                                 // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VTFN[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   Min;                                                       // 0x0068(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   Max;                                                       // 0x0098(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   FixedWaitTime;                                             // 0x00C8(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_AthenaWait");
		return ptr;
	}



};

// Class AthenaAI.BTTask_AthenaWaitWithFloor
// 0x0030 (FullSize[0x0128] - InheritedSize[0x00F8])
class UBTTask_AthenaWaitWithFloor : public UBTTask_AthenaWait
{
public:
	struct FAIDataProviderFloatValue                   Floor;                                                     // 0x00F8(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_AthenaWaitWithFloor");
		return ptr;
	}



};

// Class AthenaAI.BTTask_BurrowAbilityTriggerEruptAreaFromBlackboard
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBTTask_BurrowAbilityTriggerEruptAreaFromBlackboard : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_BurrowAbilityTriggerEruptAreaFromBlackboard");
		return ptr;
	}



};

// Class AthenaAI.BTTask_BurrowIntoGround
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBTTask_BurrowIntoGround : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_BurrowIntoGround");
		return ptr;
	}



};

// Class AthenaAI.BTTask_ClearBlackboardValue
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UBTTask_ClearBlackboardValue : public UBTTask_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_ClearBlackboardValue");
		return ptr;
	}



};

// Class AthenaAI.BTTask_ClearPerceptualData
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBTTask_ClearPerceptualData : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_ClearPerceptualData");
		return ptr;
	}



};

// Class AthenaAI.BTTask_CopyAIInteractionPointAndFocusToBlackboard
// 0x0078 (FullSize[0x00D8] - InheritedSize[0x0060])
class UBTTask_CopyAIInteractionPointAndFocusToBlackboard : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SourceInteractable;                                        // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      InteractionPosition;                                       // 0x0088(0x0028) (Edit)
	struct FBlackboardKeySelector                      InteractionFocusPosition;                                  // 0x00B0(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_CopyAIInteractionPointAndFocusToBlackboard");
		return ptr;
	}



};

// Class AthenaAI.BTTask_CopyBlackboardActor
// 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
class UBTTask_CopyBlackboardActor : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SrcBlackboardKey;                                          // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                       // 0x0088(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_CopyBlackboardActor");
		return ptr;
	}



};

// Class AthenaAI.BTTask_CopyBlackboardVector
// 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
class UBTTask_CopyBlackboardVector : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SrcBlackboardKey;                                          // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                       // 0x0088(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_CopyBlackboardVector");
		return ptr;
	}



};

// Class AthenaAI.BTTask_DetermineFollowUpAIAbility
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_DetermineFollowUpAIAbility : public UBTTaskNode
{
public:
	class UClass*                                      AIAbilityTypeToFollowUp;                                   // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_DetermineFollowUpAIAbility");
		return ptr;
	}



};

// Class AthenaAI.BTTask_ExecuteAIAbility
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_ExecuteAIAbility : public UBTTaskNode
{
public:
	class UClass*                                      AIAbilityType;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_ExecuteAIAbility");
		return ptr;
	}



};

// Class AthenaAI.BTTask_GetCurrentHealth
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UBTTask_GetCurrentHealth : public UBTTask_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_GetCurrentHealth");
		return ptr;
	}



};

// Class AthenaAI.BTTask_IgnoreActorTemporarily
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTTask_IgnoreActorTemporarily : public UBTTask_BlackboardBase
{
public:
	float                                              TimeToForget;                                              // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SS8C[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_IgnoreActorTemporarily");
		return ptr;
	}



};

// Class AthenaAI.BTTask_IncrementBlackboardFloatValue
// 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
class UBTTask_IncrementBlackboardFloatValue : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue                   FloatValueDelta;                                           // 0x0088(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_IncrementBlackboardFloatValue");
		return ptr;
	}



};

// Class AthenaAI.BTTask_IncrementBlackboardIntValue
// 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
class UBTTask_IncrementBlackboardIntValue : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderIntValue                     IntegerValueDelta;                                         // 0x0088(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_IncrementBlackboardIntValue");
		return ptr;
	}



};

// Class AthenaAI.BTTask_InteractWith
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTTask_InteractWith : public UBTTask_BlackboardBase
{
public:
	class UClass*                                      NotificationId;                                            // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_InteractWith");
		return ptr;
	}



};

// Class AthenaAI.BTTask_MoveToTarget
// 0x0030 (FullSize[0x00D0] - InheritedSize[0x00A0])
class UBTTask_MoveToTarget : public UBTTask_MoveTo
{
public:
	float                                              MaxDistFromDestinationPosToTargetPos;                      // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OverrideMaxSpeedToSlowDistanceFactor;                      // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                       // 0x00A8(0x0028) (Edit, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToTarget");
		return ptr;
	}



};

// Class AthenaAI.BTTask_NetworkTriggerAnim
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UBTTask_NetworkTriggerAnim : public UBTTaskNode
{
public:
	class UAnimSequence*                               Anim;                                                      // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimLength;                                                // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimPlayRate;                                              // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_NetworkTriggerAnim");
		return ptr;
	}



};

// Class AthenaAI.BTTask_NOP
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_NOP : public UBTTaskNode
{
public:
	int                                                Id;                                                        // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CO2N[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_NOP");
		return ptr;
	}



};

// Class AthenaAI.BTTask_PlayCustomMontageId
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UBTTask_PlayCustomMontageId : public UBTTaskNode
{
public:
	struct FCustomAnimationMontageId                   CustomAnimationMontageId;                                  // 0x0060(0x0008) (Edit)
	float                                              TimeToWaitOnServer;                                        // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XRYI[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_PlayCustomMontageId");
		return ptr;
	}



};

// Class AthenaAI.BTTask_PlayMontage
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UBTTask_PlayMontage : public UBTTaskNode
{
public:
	class UObject*                                     MontageToPlay;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayAsDynamicMontage;                                      // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T9U2[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_PlayMontage");
		return ptr;
	}



};

// Class AthenaAI.BTTask_RequestDespawn
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBTTask_RequestDespawn : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_RequestDespawn");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SetAIStrategy
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_SetAIStrategy : public UBTTaskNode
{
public:
	class UClass*                                      NewStrategy;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetAIStrategy");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SetAIStrategyFromWeightedArray
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UBTTask_SetAIStrategyFromWeightedArray : public UBTTaskNode
{
public:
	TArray<struct FWeightedAIStrategyChance>           WeightedStrategies;                                        // 0x0060(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetAIStrategyFromWeightedArray");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SetBlackboardActor
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTTask_SetBlackboardActor : public UBTTask_BlackboardBase
{
public:
	class AActor*                                      Actor;                                                     // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardActor");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SetBlackboardBoolValue
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTTask_SetBlackboardBoolValue : public UBTTask_BlackboardBase
{
public:
	bool                                               NewValue;                                                  // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6Z3Y[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardBoolValue");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SetBlackboardClassValue
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTTask_SetBlackboardClassValue : public UBTTask_BlackboardBase
{
public:
	class UClass*                                      ClassValue;                                                // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardClassValue");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SetBlackboardEQSValue
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTTask_SetBlackboardEQSValue : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                                   EQS;                                                       // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardEQSValue");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SetBlackboardFloatValue
// 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
class UBTTask_SetBlackboardFloatValue : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue                   FloatValue;                                                // 0x0088(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardFloatValue");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SetBlackboardFloatValueFromMinMax
// 0x0060 (FullSize[0x00E8] - InheritedSize[0x0088])
class UBTTask_SetBlackboardFloatValueFromMinMax : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue                   MinValue;                                                  // 0x0088(0x0030) (Edit, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MaxValue;                                                  // 0x00B8(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardFloatValueFromMinMax");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SetBlackboardFloatValueFromWeightedArray
// 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
class UBTTask_SetBlackboardFloatValueFromWeightedArray : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderStructValue                  WeightedArrayFromParams;                                   // 0x0088(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardFloatValueFromWeightedArray");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SetBlackboardIntValue
// 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
class UBTTask_SetBlackboardIntValue : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderIntValue                     IntValue;                                                  // 0x0088(0x0030) (Edit, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardIntValue");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SetFollowUpAbility
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_SetFollowUpAbility : public UBTTaskNode
{
public:
	class UClass*                                      AIAbilityType;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetFollowUpAbility");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SetInHiddenActionState
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_SetInHiddenActionState : public UBTTaskNode
{
public:
	bool                                               EnableHiddenActionState;                                   // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UEPK[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetInHiddenActionState");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SetIsHeadingOffNavMeshCheck
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_SetIsHeadingOffNavMeshCheck : public UBTTaskNode
{
public:
	bool                                               DisableIsHeadingOffNavMeshCheck;                           // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z89V[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetIsHeadingOffNavMeshCheck");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SetupAITargetWeaponForNextShot
// 0x0078 (FullSize[0x00D8] - InheritedSize[0x0060])
class UBTTask_SetupAITargetWeaponForNextShot : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      Interactable;                                              // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                     // 0x0088(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetRelativeAimVector;                                   // 0x00B0(0x0028) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetupAITargetWeaponForNextShot");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SetVelocity
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UBTTask_SetVelocity : public UBTTask_BlackboardBase
{
public:
	bool                                               UseBlackboardKey;                                          // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1XR8[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     NewVelocity;                                               // 0x008C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetVelocity");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SpawnActorAndStore
// 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
class UBTTask_SpawnActorAndStore : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BlackBoardKeyNameToStoreActor;                             // 0x0060(0x0028) (Edit)
	class UClass*                                      ActorToSpawn;                                              // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                     SpawnOffset;                                               // 0x0090(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S6AS[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SpawnActorAndStore");
		return ptr;
	}



};

// Class AthenaAI.BTTask_StopMovementImmediately
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBTTask_StopMovementImmediately : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_StopMovementImmediately");
		return ptr;
	}



};

// Class AthenaAI.BTTask_StorePawnLocationInBlackboard
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UBTTask_StorePawnLocationInBlackboard : public UBTTask_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_StorePawnLocationInBlackboard");
		return ptr;
	}



};

// Class AthenaAI.BTTask_TeleportTo
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UBTTask_TeleportTo : public UBTTask_BlackboardBase
{
public:
	bool                                               UseNavMesh;                                                // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AYTB[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_TeleportTo");
		return ptr;
	}



};

// Class AthenaAI.BTTask_TriggerNotification
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UBTTask_TriggerNotification : public UBTTaskNode
{
public:
	class UClass*                                      NotificationId;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_C5MF[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_TriggerNotification");
		return ptr;
	}



};

// Class AthenaAI.BTTask_UnwieldCurrentWeapon
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_UnwieldCurrentWeapon : public UBTTaskNode
{
public:
	bool                                               WaitForSuccessfulUnwield;                                  // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShouldUnwieldFast;                                         // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N1EJ[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_UnwieldCurrentWeapon");
		return ptr;
	}



};

// Class AthenaAI.BurrowInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBurrowInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowInterface");
		return ptr;
	}



};

// Class AthenaAI.BurrowComponent
// 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
class UBurrowComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_JWKF[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BurrowCrackClass;                                          // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      BurrowEruptClass;                                          // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              BurrowFadeoutTime;                                         // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0J4L[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABurrowCrack*>                        BurrowCracks;                                              // 0x00E8(0x0010) (ZeroConstructor, Transient)
	class ABurrowEruptBase*                            BurrowErupt;                                               // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5VVM[0x8];                                     // 0x0100(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BurrowComponent");
		return ptr;
	}



};

// Class AthenaAI.CoralShieldVFXComponent
// 0x00E0 (FullSize[0x01A8] - InheritedSize[0x00C8])
class UCoralShieldVFXComponent : public UActorComponent
{
public:
	class UParticleSystem*                             VFXAsset;                                                  // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       VfxSocketName;                                             // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    SpawnedVFXSystem;                                          // 0x00D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_ECoralShieldVFXRole>          CurrentCoralShieldRole;                                    // 0x00E0(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D7KA[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 OffToOnCurve;                                              // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OffToOnDuration;                                           // 0x00F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P8D2[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 OnToOffCurve;                                              // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OnToOffDuration;                                           // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       OffToOnParamOverrideName;                                  // 0x0104(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       OnToOffParamOverrideName;                                  // 0x010C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ReceiverMeshComponentName;                                 // 0x0114(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CasterMeshComponentName;                                   // 0x011C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M4J5[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            OverriddenMaterialsForReceive;                             // 0x0128(0x0010) (ZeroConstructor, Transient)
	TArray<class UMaterialInstanceDynamic*>            OverriddenMaterialsForCast;                                // 0x0138(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData_LMVX[0x60];                                    // 0x0148(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.CoralShieldVFXComponent");
		return ptr;
	}



	void OnRep_CurrentCoralShieldRole();
};

// Class AthenaAI.CustomSkeletonAnimationDataList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UCustomSkeletonAnimationDataList : public UDataAsset
{
public:
	TArray<struct FStringAssetReference>               CustomAnimationAssets;                                     // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.CustomSkeletonAnimationDataList");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryContext_PositionFromBlackboard
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UEnvQueryContext_PositionFromBlackboard : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData_4HG5[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_PositionFromBlackboard");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryContext_ContextLocationFromBlackboard
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_ContextLocationFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_ContextLocationFromBlackboard");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryContext_HomePositionFromBlackboard
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_HomePositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_HomePositionFromBlackboard");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryContext_KnockbackPosFromBlackboard
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_KnockbackPosFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_KnockbackPosFromBlackboard");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryContext_ThrowableTargetPositionFromBlackboard
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_ThrowableTargetPositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_ThrowableTargetPositionFromBlackboard");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryContext_SeenActors
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UEnvQueryContext_SeenActors : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData_I3GT[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_SeenActors");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryContext_SeenActorsProjectedToGround
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UEnvQueryContext_SeenActorsProjectedToGround : public UEnvQueryContext
{
public:
	TArray<class AActor*>                              SeenActors;                                                // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_BYCQ[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_SeenActorsProjectedToGround");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryContext_SpawnedForActorFromBlackboard
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_SpawnedForActorFromBlackboard : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_SpawnedForActorFromBlackboard");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryContext_TargetActorFromBlackboard
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_TargetActorFromBlackboard : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_TargetActorFromBlackboard");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryContext_TargetActorFromBlackboardPredictedLocation
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_TargetActorFromBlackboardPredictedLocation : public UEnvQueryContext_TargetActorFromBlackboard
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_TargetActorFromBlackboardPredictedLocation");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryContext_TargetActorFromParams
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_TargetActorFromParams : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_TargetActorFromParams");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryGenerator_AIRegionLocations
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UEnvQueryGenerator_AIRegionLocations : public UEnvQueryGenerator
{
public:
	bool                                               UseOverrideSpawnType;                                      // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ETFI[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       OverrideSpawnType;                                         // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1HTS[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_AIRegionLocations");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryGenerator_FromContext
// 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
class UEnvQueryGenerator_FromContext : public UEnvQueryGenerator
{
public:
	class UClass*                                      Context;                                                   // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_FromContext");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryGenerator_Line
// 0x00A8 (FullSize[0x0138] - InheritedSize[0x0090])
class UEnvQueryGenerator_Line : public UEnvQueryGenerator_ProjectedPoints
{
public:
	class UClass*                                      FromContext;                                               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      ToContext;                                                 // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FAIDataProviderFloatValue                   PointSpacing;                                              // 0x00A0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderIntValue                     NumExtraPairsOfParallelLines;                              // 0x00D0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   ParallelLineSpacing;                                       // 0x0100(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	float                                              MaxValidLineLength;                                        // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForceIncludeEndPoint;                                      // 0x0134(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ProjectPointsToWaterSurface;                               // 0x0135(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7VTL[0x2];                                     // 0x0136(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_Line");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryGenerator_PointsAtContext
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UEnvQueryGenerator_PointsAtContext : public UEnvQueryGenerator_ProjectedPoints
{
public:
	class UClass*                                      Context;                                                   // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_PointsAtContext");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryGenerator_Sphere
// 0x00D0 (FullSize[0x0160] - InheritedSize[0x0090])
class UEnvQueryGenerator_Sphere : public UEnvQueryGenerator_ProjectedPoints
{
public:
	TArray<struct FAIDataProviderFloatValue>           Radiuses;                                                  // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderIntValue                     NumberOfVerticalCircles;                                   // 0x00A0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderIntValue                     NumberOfHorizontalCircles;                                 // 0x00D0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	unsigned char                                      DefineFirstPointDirection : 1;                             // 0x0100(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_T7FH[0x7];                                     // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEnvDirection                               FirstPointDirection;                                       // 0x0108(0x0020) (Edit, DisableEditOnInstance)
	class UClass*                                      Centre;                                                    // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FAIDataProviderFloatValue                   ZOffsetFromCentre;                                         // 0x0130(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_Sphere");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryGenerator_WaterArc
// 0x0180 (FullSize[0x0210] - InheritedSize[0x0090])
class UEnvQueryGenerator_WaterArc : public UEnvQueryGenerator_ProjectedPoints
{
public:
	class UClass*                                      Origin;                                                    // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FAIDataProviderIntValue                     NumberOfArcsToGenerate;                                    // 0x0098(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MinArcRadius;                                              // 0x00C8(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MaxArcRadius;                                              // 0x00F8(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MinArcTiltDegrees;                                         // 0x0128(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MaxArcTiltDegrees;                                         // 0x0158(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MinArcPercentage;                                          // 0x0188(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MaxArcPercentage;                                          // 0x01B8(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               IncludeDirectArcToTarget;                                  // 0x01E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MISN[0x7];                                     // 0x01E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DirectArcTarget;                                           // 0x01F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LZ9O[0x18];                                    // 0x01F8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_WaterArc");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryGenerator_WaterDonut
// 0x0160 (FullSize[0x01F0] - InheritedSize[0x0090])
class UEnvQueryGenerator_WaterDonut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                               // 0x0090(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   OuterRadius;                                               // 0x00C0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderIntValue                     NumberOfRings;                                             // 0x00F0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderIntValue                     PointsPerRing;                                             // 0x0120(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FEnvDirection                               ArcDirection;                                              // 0x0150(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                  // 0x0170(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   ZOffsetFromCentre;                                         // 0x01A0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	class UClass*                                      Center;                                                    // 0x01D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      bDefineArc : 1;                                            // 0x01D8(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      ProjectPointsToWaterSurface : 1;                           // 0x01D8(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_3JSL[0x7];                                     // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      WaterPlaneSourceContext;                                   // 0x01E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      ApplyZOffsetToProjectPoints : 1;                           // 0x01E8(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_SCE2[0x7];                                     // 0x01E9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_WaterDonut");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryGenerator_WaterMultiDeckerRing
// 0x0078 (FullSize[0x0108] - InheritedSize[0x0090])
class UEnvQueryGenerator_WaterMultiDeckerRing : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   Radius;                                                    // 0x0090(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FAIDataProviderFloatValue>           ZOffsetOfRingsFromContext;                                 // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderIntValue                     PointsPerRing;                                             // 0x00D0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	class UClass*                                      Center;                                                    // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_WaterMultiDeckerRing");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryTest_HasLineOfSight
// 0x0010 (FullSize[0x0180] - InheritedSize[0x0170])
class UEnvQueryTest_HasLineOfSight : public UEnvQueryTest
{
public:
	TEnumAsByte<AthenaAI_ETraceDirection>              TraceDirection;                                            // 0x0170(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0R01[0x7];                                     // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Context;                                                   // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryTest_HasLineOfSight");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryTest_InGameEventExclusionZone
// 0x0008 (FullSize[0x0178] - InheritedSize[0x0170])
class UEnvQueryTest_InGameEventExclusionZone : public UEnvQueryTest
{
public:
	float                                              Radius;                                                    // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N9TX[0x4];                                     // 0x0174(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryTest_InGameEventExclusionZone");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryTest_IsAngleInRange2D
// 0x00A0 (FullSize[0x0210] - InheritedSize[0x0170])
class UEnvQueryTest_IsAngleInRange2D : public UEnvQueryTest
{
public:
	struct FEnvDirection                               LineA;                                                     // 0x0170(0x0020) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               LineB;                                                     // 0x0190(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   MinAngleDegrees;                                           // 0x01B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FAIDataProviderFloatValue                   MaxAngleDegrees;                                           // 0x01E0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryTest_IsAngleInRange2D");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryTest_WaterHeight
// 0x0010 (FullSize[0x0180] - InheritedSize[0x0170])
class UEnvQueryTest_WaterHeight : public UEnvQueryTest
{
public:
	float                                              WaterHeightCheckOffset;                                    // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MMUZ[0x4];                                     // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ActorWithWaterPlaneContext;                                // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryTest_WaterHeight");
		return ptr;
	}



};

// Class AthenaAI.HealthGemComponent
// 0x0138 (FullSize[0x0200] - InheritedSize[0x00C8])
class UHealthGemComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_ZEEX[0x118];                                   // 0x00C8(0x0118) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            OverridenMaterials;                                        // 0x01E0(0x0010) (ZeroConstructor)
	struct FName                                       EmissiveMaterialParameterName;                             // 0x01F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BuildMaterialMapOnBeginPlay;                               // 0x01F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UP80[0x7];                                     // 0x01F9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.HealthGemComponent");
		return ptr;
	}



};

// Class AthenaAI.IsAIOfClassStatCondition
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UIsAIOfClassStatCondition : public UTargetedStatCondition
{
public:
	TArray<class UClass*>                              AIClasses;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.IsAIOfClassStatCondition");
		return ptr;
	}



};

// Class AthenaAI.IsAIOfSkillsetStatCondition
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UIsAIOfSkillsetStatCondition : public UTargetedStatCondition
{
public:
	TArray<class UAthenaAIControllerParamsDataAsset*>  AISkillsets;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.IsAIOfSkillsetStatCondition");
		return ptr;
	}



};

// Class AthenaAI.PeriodicAINoiseEventComponent
// 0x0048 (FullSize[0x0110] - InheritedSize[0x00C8])
class UPeriodicAINoiseEventComponent : public UActorComponent
{
public:
	struct FName                                       NoiseTag;                                                  // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NoiseRangeBasedOnMovementSpeed;                            // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_238P[0x3];                                     // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ConstantNoiseRange;                                        // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 MovementSpeedToNoiseRange;                                 // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OwnerActor;                                                // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O4CS[0x28];                                    // 0x00E8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PeriodicAINoiseEventComponent");
		return ptr;
	}



};

// Class AthenaAI.PlayerProximityObservedSpawnContextProvider
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UPlayerProximityObservedSpawnContextProvider : public UObject
{
public:
	unsigned char                                      UnknownData_4WTR[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PlayerProximityObservedSpawnContextProvider");
		return ptr;
	}



};

// Class AthenaAI.SimpleAIRegion
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class USimpleAIRegion : public UObject
{
public:
	unsigned char                                      UnknownData_2MRL[0x38];                                    // 0x0028(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SimpleAIRegion");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SetRoamingPetAnimationState
// 0x00A8 (FullSize[0x0130] - InheritedSize[0x0088])
class UBTTask_SetRoamingPetAnimationState : public UBTTask_BlackboardBase
{
public:
	struct FWeightedPetAnimationSelector               WeightedAnimationSelection;                                // 0x0088(0x00A0) (Edit)
	unsigned char                                      UnknownData_EI7D[0x8];                                     // 0x0128(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetRoamingPetAnimationState");
		return ptr;
	}



};

// Class AthenaAI.PetDitherComponent
// 0x0070 (FullSize[0x0230] - InheritedSize[0x01C0])
class UPetDitherComponent : public UDitherComponent
{
public:
	unsigned char                                      UnknownData_UKMU[0x70];                                    // 0x01C0(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PetDitherComponent");
		return ptr;
	}



};

// Class AthenaAI.PetNameplateComponent
// 0x0028 (FullSize[0x0470] - InheritedSize[0x0448])
class UPetNameplateComponent : public UAINameplateComponent
{
public:
	struct FString                                     DefaultPetName;                                            // 0x0448(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1M3V[0x18];                                    // 0x0458(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PetNameplateComponent");
		return ptr;
	}



};

// Class AthenaAI.PetPartCustomisationComponent
// 0x00B8 (FullSize[0x0180] - InheritedSize[0x00C8])
class UPetPartCustomisationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_FQK3[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AnimationDataStoreId;                                      // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPetPartSizeMappingsDataAsset*               SizeMappingsAsset;                                         // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPetLoadedMaterial>                  CurrentlyLoadedMaterials;                                  // 0x00E8(0x0010) (ZeroConstructor, Transient)
	struct FStringAssetReference                       DefaultMeshRef;                                            // 0x00F8(0x0010) (ZeroConstructor, Transient)
	struct FStringAssetReference                       HighResMeshRef;                                            // 0x0108(0x0010) (ZeroConstructor, Transient)
	class USkeletalMesh*                               CurrentlyLoadedMesh;                                       // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EPetSize>                     CurrentPetSize;                                            // 0x0120(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K6F3[0x7];                                     // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPetCustomisationOverrideDataAsset*          CurrentlyLoadedOverrideAsset;                              // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O3M2[0x50];                                    // 0x0130(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PetPartCustomisationComponent");
		return ptr;
	}



};

// Class AthenaAI.PetPartSizeMappingsDataAsset
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UPetPartSizeMappingsDataAsset : public UDataAsset
{
public:
	TArray<struct FPetPartSizeMapping>                 Mappings;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FFloatRange                                 ConcealedScaleBounds;                                      // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PetPartSizeMappingsDataAsset");
		return ptr;
	}



};

// Class AthenaAI.PetSicknessComponent
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UPetSicknessComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_8YVB[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PetSicknessComponent");
		return ptr;
	}



};

// Class AthenaAI.PetsPartsDesc
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UPetsPartsDesc : public UAIPartsDesc
{
public:
	struct FStringAssetReference                       Mesh;                                                      // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       HighResMesh;                                               // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPetMaterialEntry>                   PetMaterials;                                              // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<AthenaAI_EPetSize>                     PetSize;                                                   // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1KK2[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPetCustomisationOverrideDataAsset*          PetOverrideAsset;                                          // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PetsPartsDesc");
		return ptr;
	}



};

// Class AthenaAI.PetTelemetryComponent
// 0x0048 (FullSize[0x0110] - InheritedSize[0x00C8])
class UPetTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_F7ZD[0x48];                                    // 0x00C8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PetTelemetryComponent");
		return ptr;
	}



};

// Class AthenaAI.SpawnContextProviderZone
// 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
class ASpawnContextProviderZone : public AActor
{
public:
	TArray<struct FName>                               SpawnContextIDs;                                           // 0x03D0(0x0010) (Edit, ZeroConstructor)
	class UBoxComponent*                               BoundingBox;                                               // 0x03E0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SpawnContextProviderZone");
		return ptr;
	}



	void RemoveContextsFromTarget(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex);
	void AddContextsToTarget(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex, bool InFromSweep, const struct FHitResult& InSweepResult);
};

// Class AthenaAI.BaseSpawnBlockingBehaviourStrategy
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UBaseSpawnBlockingBehaviourStrategy : public USpawnerBehaviourStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BaseSpawnBlockingBehaviourStrategy");
		return ptr;
	}



};

// Class AthenaAI.SirenEncounterSpawnBlockingBehaviourStrategy
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class USirenEncounterSpawnBlockingBehaviourStrategy : public UBaseSpawnBlockingBehaviourStrategy
{
public:
	float                                              ChanceToSpawn;                                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E41D[0xC];                                     // 0x004C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SirenEncounterSpawnBlockingBehaviourStrategy");
		return ptr;
	}



};

// Class AthenaAI.StatusResponseSetBlackboardBoolKey
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UStatusResponseSetBlackboardBoolKey : public UStatusResponse
{
public:
	struct FName                                       BlackboardBoolKeyName;                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bValueWhenActive;                                          // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShouldClearKeyOnEnd;                                       // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EOA6[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.StatusResponseSetBlackboardBoolKey");
		return ptr;
	}



};

// Class AthenaAI.StatusResponseSetBlackboardClassKey
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UStatusResponseSetBlackboardClassKey : public UStatusResponse
{
public:
	struct FName                                       BlackboardClassKeyName;                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ValueWhenActive;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               SetValueOnDeactivate;                                      // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6A3Z[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ValueWhenDeactivated;                                      // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.StatusResponseSetBlackboardClassKey");
		return ptr;
	}



};

// Class AthenaAI.StatusResponseSetBlackboardFloatKey
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UStatusResponseSetBlackboardFloatKey : public UStatusResponse
{
public:
	struct FName                                       BlackboardFloatKeyName;                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ValueWhenActive;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldClearKeyOnEnd;                                       // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3D6M[0xB];                                     // 0x003D(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.StatusResponseSetBlackboardFloatKey");
		return ptr;
	}



};

// Class AthenaAI.VulnerabilityDuringAIStrategyComponent
// 0x0088 (FullSize[0x0150] - InheritedSize[0x00C8])
class UVulnerabilityDuringAIStrategyComponent : public UActorComponent
{
public:
	TArray<struct FAIStrategyVulnerabilityData>        StrategyVulnerabilities;                                   // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UHealthComponent*                            HealthComponent;                                           // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FNN9[0x70];                                    // 0x00E0(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.VulnerabilityDuringAIStrategyComponent");
		return ptr;
	}



};

// Class AthenaAI.WaterbasedAISupplier
// 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
class AWaterbasedAISupplier : public AActor
{
public:
	class UAISpawnerList*                              Spawners;                                                  // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.WaterbasedAISupplier");
		return ptr;
	}



};

// Class AthenaAI.AICreatureCharacterMovementComponent
// 0x00C8 (FullSize[0x0620] - InheritedSize[0x0558])
class UAICreatureCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	TArray<struct FAIStrategyMovementProperties>       AIStrategyMovementProperties;                              // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              BlendSpeed;                                                // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCreateDisturbance;                                        // 0x056C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4PMO[0x3];                                     // 0x056D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DisturbanceSize;                                           // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DisturbanceVelocityScale;                                  // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OrientationBlendSpeed;                                     // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OrientationMaxPitch;                                       // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UpdateOrientationFrequency;                                // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinStairAngle;                                             // 0x0584(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinStairVelocityDampen;                                    // 0x0588(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MU1I[0x4];                                     // 0x058C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              SubscribedStairClimbStrategies;                            // 0x0590(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	unsigned char                                      UnknownData_7GRY[0x80];                                    // 0x05A0(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AICreatureCharacterMovementComponent");
		return ptr;
	}



};

// Class AthenaAI.AICreatureCharacter
// 0x0228 (FullSize[0x0800] - InheritedSize[0x05D8])
class AAICreatureCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData_LRP0[0x8];                                     // 0x05D8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_0SNT[0x48];                                    // 0x05E0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DelayBeforeDestroying;                                     // 0x0628(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeBeforeFadingOut;                                       // 0x062C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PickupTime;                                                // 0x0630(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TooltipDisplayOffset;                                      // 0x0634(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UActionStateMachineComponent*                ActionStateMachineComponent;                               // 0x0640(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActionStatePriorityTableData*               ActionStatePriorityTableData;                              // 0x0648(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ActionStateCreatorDefinition;                              // 0x0650(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAthenaAIControllerParamsDataAsset*          AIControllerParams;                                        // 0x0658(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                      InteractableComponent;                                     // 0x0660(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWaterHeightProviderComponent*               WaterHeightProviderComponent;                              // 0x0668(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitterComponent;                           // 0x0670(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URewindComponent*                            RewindComponent;                                           // 0x0678(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActionRulesComponent*                       ActionRulesComponent;                                      // 0x0680(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NBFT[0x100];                                   // 0x0688(0x0100) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAICreatureCharacterMovementComponent*       AICreatureCharacterMovementComponent;                      // 0x0788(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UClass*                                      CurrentAIStrategy;                                         // 0x0790(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AIOS[0x68];                                    // 0x0798(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AICreatureCharacter");
		return ptr;
	}



	void SetAIStrategy(class UClass* InStrategy);
	void OnRep_CurrentAIStrategy(class UClass* OldAIStrategy);
	void Multicast_DespawnRPC();
	class UClass* GetAIStrategy();
};

// Class AthenaAI.AICreatureCharacterPathFollowingComponent
// 0x0030 (FullSize[0x0320] - InheritedSize[0x02F0])
class UAICreatureCharacterPathFollowingComponent : public UAthenaAICharacterPathFollowingComponent
{
public:
	float                                              LandingAngle;                                              // 0x02F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HopDistanceScale;                                          // 0x02F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaximumLandTime;                                           // 0x02F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinStairAngle;                                             // 0x02FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinStairVelocityDampen;                                    // 0x0300(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_X35O[0x4];                                     // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              SubscribedStairClimbStrategies;                            // 0x0308(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	unsigned char                                      UnknownData_0S9C[0x8];                                     // 0x0318(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AICreatureCharacterPathFollowingComponent");
		return ptr;
	}



};

// Class AthenaAI.AICreatureMovementModifierInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAICreatureMovementModifierInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AICreatureMovementModifierInterface");
		return ptr;
	}



};

// Class AthenaAI.AICreatureMovementModifierParamsDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAICreatureMovementModifierParamsDataAsset : public UDataAsset
{
public:
	float                                              TurnRateMultiplier;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FlyingTurnRateMultiplier;                                  // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseTighterTurningCircle;                                   // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseHighResNavMesh;                                         // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5I12[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AICreatureMovementModifierParamsDataAsset");
		return ptr;
	}



};

// Class AthenaAI.BehaviourTreeInterruptionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBehaviourTreeInterruptionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BehaviourTreeInterruptionInterface");
		return ptr;
	}



};

// Class AthenaAI.ForcedIdleBehaviourInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UForcedIdleBehaviourInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.ForcedIdleBehaviourInterface");
		return ptr;
	}



};

// Class AthenaAI.AIDialogueStateProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIDialogueStateProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDialogueStateProviderInterface");
		return ptr;
	}



};

// Class AthenaAI.SimpleDialogueStateProvider
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class USimpleDialogueStateProvider : public UObject
{
public:
	unsigned char                                      UnknownData_PIHZ[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SimpleDialogueStateProvider");
		return ptr;
	}



};

// Class AthenaAI.BountySpawnerAudioZonesInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBountySpawnerAudioZonesInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BountySpawnerAudioZonesInterface");
		return ptr;
	}



};

// Class AthenaAI.AIBountySpawner
// 0x0188 (FullSize[0x0588] - InheritedSize[0x0400])
class UAIBountySpawner : public UAISpawner
{
public:
	float                                              MaximumDistanceToPerceiveOnSpawnsAfterFirstGroup;          // 0x0400(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MQHS[0x4];                                     // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAIBountySpawnerWaveGroup>           WaveGroups;                                                // 0x0408(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	struct FStringAssetReference                       TeamColor;                                                 // 0x0418(0x0010) (Edit, ZeroConstructor)
	struct FWeightedProbabilityRange                   WavesPerRelocate;                                          // 0x0428(0x0020) (Edit)
	struct FWeightedProbabilityRange                   WaveSplitChance;                                           // 0x0448(0x0020) (Edit)
	TArray<float>                                      WaveSuicideTime;                                           // 0x0468(0x0010) (Edit, ZeroConstructor)
	float                                              WaveSuicideMinDist;                                        // 0x0478(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ImmediatelyPerceiveTargets;                                // 0x047C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EK0N[0x3];                                     // 0x047D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAICombatDialogue*                           ActiveCombatDialogue;                                      // 0x0480(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZT6T[0x28];                                    // 0x0488(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              CrewMembers;                                               // 0x04B0(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              NonCrewMembersInRegion;                                    // 0x04C0(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              AllParticipatingPlayers;                                   // 0x04D0(0x0010) (ZeroConstructor)
	class UOverlapTriggerComponent*                    AudioZoneTriggerComponent;                                 // 0x04E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G51H[0xA0];                                    // 0x04E8(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIBountySpawner");
		return ptr;
	}



};

// Class AthenaAI.PostBountyAIPawnSpawnedAction
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPostBountyAIPawnSpawnedAction : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PostBountyAIPawnSpawnedAction");
		return ptr;
	}



};

// Class AthenaAI.ApplyNameplateToBountyWaveSpawnedAction
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UApplyNameplateToBountyWaveSpawnedAction : public UPostBountyAIPawnSpawnedAction
{
public:
	struct FText                                       AIName;                                                    // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_METS[0x20];                                    // 0x0028(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.ApplyNameplateToBountyWaveSpawnedAction");
		return ptr;
	}



};

// Class AthenaAI.AthenaAIDebugFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAIDebugFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaAIDebugFunctionLibrary");
		return ptr;
	}



	void STATIC_SpawnAIWithSettings(TAssetPtr<class UClass> AIType, TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset, TAssetPtr<class ULoadoutAsset> Loadout, TAssetPtr<class UAthenaAIFormDataAsset> Form, TAssetPtr<class UClass> AIItemSpawnComponent, class UClass* ClassId, TAssetPtr<class UAthenaAIAmmoDataAsset> Ammo, const struct FVector& Pos, const struct FRotator& Rot, const struct FName& Region, class AActor* TriggerActor, const struct FName& NavMeshOverride, float Delay);
	struct FAIEncounterSpecification STATIC_SpawnAI(class UAIEncounterSettings* EncounterSettings, const struct FVector& Pos, const struct FRotator& Rot, float Delay, bool MakeAIPermanentlyNetRelevant, class AActor* InstancedNavMesh);
	void STATIC_SetEnvQueryManagerMaxAllowedSeconds(float InMaxAllowedSeconds, class UObject* QueryOwner);
	void STATIC_KillAllDebugAISpawners();
	int STATIC_GetEnvQueryManagerNumRunningQueries(class UObject* QueryOwner);
	void STATIC_EnableMaximumSightSettings(class AAthenaAIController* AIController);
	void STATIC_EnableBehaviorTreeLogging(class UObject* WorldContext);
	void STATIC_DespawnAIPawn(class APawn* Pawn);
	void STATIC_CreateAISpawnerAtPosition(class UObject* WorldContext, class UAISpawner* SpawnerAsset, const struct FVector& Pos);
	void STATIC_CreateAISpawnerAtActor(class UObject* WorldContext, class UAISpawner* SpawnerAsset, class AActor* SpawnLocationActor);
	struct FVector STATIC_CanProjectPointToNavigation(class UObject* WorldContext, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
};

// Class AthenaAI.DebugAISpawnerCreator
// 0x0058 (FullSize[0x0428] - InheritedSize[0x03D0])
class ADebugAISpawnerCreator : public AActor
{
public:
	class UAISpawner*                                  SpawnerTemplate;                                           // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TriggerRadius;                                             // 0x03D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L5DT[0x4];                                     // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAISpawner*                                  Spawner;                                                   // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UAIProximityPlayerTracker*                   ProximityPlayerTracker;                                    // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class USimpleAIRegion*                             Region;                                                    // 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V5MT[0x30];                                    // 0x03F8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.DebugAISpawnerCreator");
		return ptr;
	}



};

// Class AthenaAI.AIDioramaLocationSourceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIDioramaLocationSourceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDioramaLocationSourceInterface");
		return ptr;
	}



};

// Class AthenaAI.AIDiorama
// 0x0228 (FullSize[0x05F8] - InheritedSize[0x03D0])
class AAIDiorama : public AActor
{
public:
	unsigned char                                      UnknownData_H3KS[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             SceneComponent;                                            // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASceneDialogueCoordinator*                   SpawnedDialogueCoordinator;                                // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneDialogueData*                          DialogueData;                                              // 0x03E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAIDioramaPawn>                      LinkedActors;                                              // 0x03F0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData_1TAV[0x1F8];                                   // 0x0400(0x01F8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDiorama");
		return ptr;
	}



};

// Class AthenaAI.AIDioramaCategory
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIDioramaCategory : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDioramaCategory");
		return ptr;
	}



};

// Class AthenaAI.AIDioramaController
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UAIDioramaController : public UObject
{
public:
	unsigned char                                      UnknownData_52C0[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIDioramaDesc*                              AIDioramaDesc;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneDialogueData*                          DialogueData;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAIDioramaPawn>                      SpawnedDioramaPawns;                                       // 0x0040(0x0010) (ZeroConstructor)
	class AAIDiorama*                                  AIDiorama;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISpawner*                                  Spawner;                                                   // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M9AU[0x48];                                    // 0x0060(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDioramaController");
		return ptr;
	}



};

// Class AthenaAI.AIDioramaDesc
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIDioramaDesc : public UDataAsset
{
public:
	TArray<struct FAIDioramaRoleDesc>                  RoleList;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	class USceneDialogueData*                          DialogueData;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDioramaDesc");
		return ptr;
	}



};

// Class AthenaAI.AIDioramaLocationSourceComponent
// 0x0080 (FullSize[0x0330] - InheritedSize[0x02B0])
class UAIDioramaLocationSourceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_X4HB[0x10];                                    // 0x02B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAIDioramaLocationSourceComponentData> DioramaRelativeLocations;                                  // 0x02C0(0x0010) (Edit, ZeroConstructor)
	float                                              DialogueTriggerRadius;                                     // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DialogueSubtitleBuffer;                                    // 0x02D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AISenseRadiusForDebugDisplay;                              // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_209P[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              Categories;                                                // 0x02E0(0x0010) (Edit, ZeroConstructor, UObjectWrapper)
	struct FColor                                      DebugTriggerRadiusColor;                                   // 0x02F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FColor                                      DebugSubtitleRadiusColor;                                  // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FColor                                      AISenseRadiusColor;                                        // 0x02F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_86QZ[0x4];                                     // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USphereComponent*                            DialogueTriggerRadiusSphere;                               // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            DialogueSubtitleRadiusSphere;                              // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            AISenseRadiusSphere;                                       // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3OAL[0x18];                                    // 0x0318(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDioramaLocationSourceComponent");
		return ptr;
	}



};

// Class AthenaAI.AIDioramaServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIDioramaServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDioramaServiceInterface");
		return ptr;
	}



};

// Class AthenaAI.AIDioramaService
// 0x0068 (FullSize[0x0438] - InheritedSize[0x03D0])
class AAIDioramaService : public AActor
{
public:
	unsigned char                                      UnknownData_6RLJ[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, struct FDioramaCategoryEntries> AllDioramasLocationsByCategory;                            // 0x03D8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData_IW0K[0x10];                                    // 0x0428(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIDioramaService");
		return ptr;
	}



};

// Class AthenaAI.DebugDioramaCreator
// 0x0018 (FullSize[0x0440] - InheritedSize[0x0428])
class ADebugDioramaCreator : public ADebugAISpawnerCreator
{
public:
	class UAIDioramaDesc*                              AIDioramaDesc;                                             // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIDioramaLocationSourceComponent*           Location;                                                  // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIDioramaController*                        AIDioramaController;                                       // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.DebugDioramaCreator");
		return ptr;
	}



};

// Class AthenaAI.InDioramaAIStrategyId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInDioramaAIStrategyId : public UAIStrategyId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.InDioramaAIStrategyId");
		return ptr;
	}



};

// Class AthenaAI.AIFaunaSpawner
// 0x0148 (FullSize[0x0548] - InheritedSize[0x0400])
class UAIFaunaSpawner : public UAISpawner
{
public:
	struct FAIFaunaSpawnerWave                         FaunaWave;                                                 // 0x0400(0x0110) (Edit)
	unsigned char                                      UnknownData_KTBY[0x10];                                    // 0x0510(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      FaunaLeader;                                               // 0x0520(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3ATI[0x10];                                    // 0x0528(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              PlayersInSpawnArea;                                        // 0x0538(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AIFaunaSpawner");
		return ptr;
	}



	void SpawnFaunaGroup();
};

// Class AthenaAI.AthenaFaunaAIController
// 0x0198 (FullSize[0x0A88] - InheritedSize[0x08F0])
class AAthenaFaunaAIController : public AAthenaAIController
{
public:
	float                                              MaxTimeBetweenThreatDetermination;                         // 0x08F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultControlRotationInterpSpeed;                         // 0x08F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAIStategyControllerMovementMod>     StrategyControllerMovementMods;                            // 0x08F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MinAgentHalfHeightPctOverride;                             // 0x0908(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QE13[0x4];                                     // 0x090C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFaunaAIContollerParamsDataAsset*            FaunaDataAsset;                                            // 0x0910(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AActor*                                      CarrierActor;                                              // 0x0918(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RYZN[0xA8];                                    // 0x0920(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      HighestDangerActor;                                        // 0x09C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D04X[0x88];                                    // 0x09D0(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFaunaAIPlayerTracker*                       PlayerTracker;                                             // 0x0A58(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6GJO[0x28];                                    // 0x0A60(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaFaunaAIController");
		return ptr;
	}



	void SetDormancyCheckingEnabled(bool InDormancyCheckingEnabledInAutomation);
	void LeaderDestroyed(class AActor* Actor);
	class AActor* GetLeader();
	float GetCourage();
	class UAthenaAICharacterPathFollowingComponent* GetAthenaAICharPathFollowingComp();
};

// Class AthenaAI.CatchFaunaConditionalStatTrigger
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCatchFaunaConditionalStatTrigger : public UConditionalStatsTriggerType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.CatchFaunaConditionalStatTrigger");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryContext_LeaderFromBlackboard
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_LeaderFromBlackboard : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_LeaderFromBlackboard");
		return ptr;
	}



};

// Class AthenaAI.EnvQueryContext_Threat
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_Threat : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_Threat");
		return ptr;
	}



};

// Class AthenaAI.Fauna
// 0x0340 (FullSize[0x0B40] - InheritedSize[0x0800])
class AFauna : public AAICreatureCharacter
{
public:
	unsigned char                                      UnknownData_H262[0x8];                                     // 0x0800(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0808(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_D487[0x20];                                    // 0x0800(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UClass*                                      FaunaSpecies;                                              // 0x0840(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      FaunaBreed;                                                // 0x0848(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                     HeadOffset;                                                // 0x0850(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     MountedScale;                                              // 0x085C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              NearToSurfaceDistance;                                     // 0x0868(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartDrowningTimePercentage;                               // 0x086C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DrowningDeathTimeMin;                                      // 0x0870(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DrowningDeathTimeMax;                                      // 0x0874(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PercentageStarvedToChangeAnimation;                        // 0x0878(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeOutTime;                                               // 0x087C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     HitImpactParticleSystem;                                   // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     DeathParticleSystem;                                       // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     PutInCrateParticleSystem;                                  // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PutInCrateSoundCue;                                        // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 TookDamageSoundCue;                                        // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 AgitationStartedSoundCue;                                  // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 AgitationStoppedSoundCue;                                  // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 CalmStartedSoundCue;                                       // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 CalmStoppedSoundCue;                                       // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     BreathBubblesParticleSystem;                               // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BreathBubblesSocketName;                                   // 0x08D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       UnderwaterRTPCName;                                        // 0x08D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                        OnFeedingForceFeedbackEffect;                              // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMountableComponent*                         MountableComponent;                                        // 0x08E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHealthComponent*                            HealthComponent;                                           // 0x08F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageableComponent*                        DamageableComponent;                                       // 0x08F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         AttackHitVolume;                                           // 0x0900(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFaunaAnimationData*                         Animations;                                                // 0x0908(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDitherComponent*                            DitherComponent;                                           // 0x0910(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVenomableComponent*                         VenomableComponent;                                        // 0x0918(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULightWeightStatusEffectManagerComponent*    StatusEffectManagerComponent;                              // 0x0920(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaAIControllerParamsDataAsset*          AIControllerParamsWhenInCrate;                             // 0x0928(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPeriodicAINoiseEventComponent*              PeriodicAINoiseEventComponent;                             // 0x0930(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    FaunaAgitationResponseDelegate;                            // 0x0938(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FaunaDirectedAgitationResponseDelegate;                    // 0x0948(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                AgitationResponseChance;                                   // 0x0958(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AgitationResponseTestFrequencyMin;                         // 0x095C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AgitationResponseTestFrequencyMax;                         // 0x0960(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxNumFailedAgitationResponseTests;                        // 0x0964(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AgitationResponseVFXDelay;                                 // 0x0968(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AgitationResponseRange;                                    // 0x096C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     AgitationResponseParticleSystem;                           // 0x0970(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AgitationResponseRangeParticleSystemAngle;                 // 0x0978(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionChannel>              AgitationCollisionChannel;                                 // 0x097C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StopMovementWhenAgitated;                                  // 0x097D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EEAY[0x2];                                     // 0x097E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ApproximateSpitTravelTime;                                 // 0x0980(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StopMovementWhenCalm;                                      // 0x0984(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C5Z9[0x3];                                     // 0x0985(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TurningSpringAcceleration;                                 // 0x0988(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurningSpringMaxVelocity;                                  // 0x098C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurnResetDelay;                                            // 0x0990(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     PivotPointOffset;                                          // 0x0994(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShouldTurn;                                                // 0x09A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N8F6[0x7];                                     // 0x09A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFeedingComponent*                           FeedingComponent;                                          // 0x09A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UFaunaMovementComponent*                     FaunaMovementComponent;                                    // 0x09B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeUntilDrowned;                                          // 0x09B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RandomAnimationSeed;                                       // 0x09BC(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KOEW[0xC];                                     // 0x09C0(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               Drowned;                                                   // 0x09CC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YS5E[0x2];                                     // 0x09CD(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AthenaAI_EFaunaCratedState>            CratedState;                                               // 0x09CF(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EFaunaInWaterState>           InWaterState;                                              // 0x09D0(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2GPA[0x7];                                     // 0x09D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Crate;                                                     // 0x09D8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    BreathBubblesParticleSystemComponent;                      // 0x09E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DrowningDeathTime;                                         // 0x09E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPlayingStarvingAnim;                                     // 0x09EC(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               IsAgitated;                                                // 0x09ED(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               IsCalm;                                                    // 0x09EE(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_63Z3[0x1];                                     // 0x09EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TargetTurnAngle;                                           // 0x09F0(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FQBR[0x124];                                   // 0x09F4(0x0124) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVenomComponent*                             VenomComponent;                                            // 0x0B18(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V30F[0x20];                                    // 0x0B20(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.Fauna");
		return ptr;
	}



	void TestingSetWaterState(TEnumAsByte<AthenaAI_EFaunaInWaterState> NewInState);
	void OnRep_TargetTurnAngle();
	void OnRep_IsPlayingStarvingAnim();
	void OnRep_IsCalm();
	void OnRep_IsAgitated();
	void OnRep_InWaterState();
	void OnRep_CratedState(TEnumAsByte<AthenaAI_EFaunaCratedState> PreviousCratedState);
	void Multicast_PlayPutInCrateEffectsRPC(class AActor* Crate);
	void Multicast_JustBeenFedRPC(class AActor* FedBy);
	void Multicast_HightlightLeader(bool bIsLeader);
	void GenerateNewRandomAnimationSeed();
	void ActivateResponseRPC(float InTargetTurnAngle);
};

// Class AthenaAI.FaunaAIPlayerTracker
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UFaunaAIPlayerTracker : public UAIPlayerTracker
{
public:
	unsigned char                                      UnknownData_ZXR5[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.FaunaAIPlayerTracker");
		return ptr;
	}



};

// Class AthenaAI.FaunaMovementComponent
// 0x0000 (FullSize[0x0620] - InheritedSize[0x0620])
class UFaunaMovementComponent : public UAICreatureCharacterMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.FaunaMovementComponent");
		return ptr;
	}



};

// Class AthenaAI.AthenaSwimmingAIController
// 0x00E0 (FullSize[0x09D0] - InheritedSize[0x08F0])
class AAthenaSwimmingAIController : public AAthenaAIController
{
public:
	class USwimmingPathFollowingComponent*             SwimmingPathFollowingComponent;                            // 0x08F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreTargetsOutOfWater;                                   // 0x08F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0LJM[0x7];                                     // 0x08F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 DistOfAttackerVsChanceToPursue;                            // 0x0900(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               TimersToZeroIfStartingRevengeAttack;                       // 0x0908(0x0010) (Edit, ZeroConstructor)
	struct FName                                       DespawnRequiredBlackboardKey;                              // 0x0918(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       DespawnRequiredReasonBlackboardKey;                        // 0x0920(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PathingFailedWeight;                                       // 0x0928(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PathingFailedThresholdToDespawn;                           // 0x092C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FJK8[0xA0];                                    // 0x0930(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.AthenaSwimmingAIController");
		return ptr;
	}



	void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* InControllerParametersAsset, class APawn* InPawn);
};

// Class AthenaAI.BTDecorator_NearSurfaceOfWater
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UBTDecorator_NearSurfaceOfWater : public UBTDecorator
{
public:
	float                                              DistanceFromSurface;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReverseLogic;                                              // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YA1J[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTDecorator_NearSurfaceOfWater");
		return ptr;
	}



};

// Class AthenaAI.BTService_SetFloatToTheSurfaceWhileInBranch
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTService_SetFloatToTheSurfaceWhileInBranch : public UBTService
{
public:
	bool                                               FloatToTheSurfaceWhileInBranch;                            // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G636[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTService_SetFloatToTheSurfaceWhileInBranch");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SetFloatToTheSurface
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_SetFloatToTheSurface : public UBTTaskNode
{
public:
	bool                                               ShouldFloatToTheSurface;                                   // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7XLR[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SetFloatToTheSurface");
		return ptr;
	}



};

// Class AthenaAI.SwimmingCreatureMovementAnimationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USwimmingCreatureMovementAnimationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SwimmingCreatureMovementAnimationInterface");
		return ptr;
	}



};

// Class AthenaAI.SwimmingPathFollowingComponent
// 0x0128 (FullSize[0x01F0] - InheritedSize[0x00C8])
class USwimmingPathFollowingComponent : public UActorComponent
{
public:
	float                                              DirectSwimmingDotToTarget;                                 // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ArcToTargetDotToTarget;                                    // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTargetPitchFactor;                                      // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinPosDeltaSqToRepathToMovingTarget;                       // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinPosDeltaSqToInvalidateFixedLocation;                    // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PitchBezierControlPointsLengthFactor;                      // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeMovingAwayFromTargetPosToFlagFailure;                  // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LineOfSightCollisionProfile;                               // 0x00E4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LineOfSightSphereCastRadius;                               // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LineOfSightCheckInterval;                                  // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FirstLoSTriggerTimeInNewPath;                              // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FirstLoSTriggerTimeInRePath;                               // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DrawDebugOnServer;                                         // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HZML[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<Engine_ECollisionChannel>>      CollisionTypesToDoPathUpdate;                              // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USwimmingCreatureMovementComponent*          MovementComponent;                                         // 0x0110(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AAthenaSwimmingAIController*                 SwimmingAIController;                                      // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EArcFollowingMode>            ArcFollowingMode;                                          // 0x0120(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T2RY[0x57];                                    // 0x0121(0x0057) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TargetActor;                                               // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5IZA[0x70];                                    // 0x0180(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.SwimmingPathFollowingComponent");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SwimTo
// 0x0078 (FullSize[0x0100] - InheritedSize[0x0088])
class UBTTask_SwimTo : public UBTTask_BlackboardBase
{
public:
	bool                                               WantsToReportPathFailure;                                  // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_39ZI[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      PathFailureCounter;                                        // 0x0090(0x0028) (Edit)
	float                                              AcceptableRadius;                                          // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_ESwimmingGoalCheckMode>       GoalCheckMode;                                             // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_ESwimmingArcMode>             ArcMode;                                                   // 0x00BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EArcToTargetDirection>        ArcToTargetDirection;                                      // 0x00BE(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_ETaskReaction>                Swim3DCrestingReaction;                                    // 0x00BF(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpatialOffset                              OffsetFromTargetActor;                                     // 0x00C0(0x0008) (Edit)
	TEnumAsByte<AthenaAI_ESwimmingSyncMode>            SwimSyncMode;                                              // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TrackTargetActor;                                          // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NHKP[0x6];                                     // 0x00CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      TrackedTargetActorKey;                                     // 0x00D0(0x0028) (Edit)
	float                                              TimeToSlowDownAndStop;                                     // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_ESwimmingLineOfSightTest>     LineOfSightTestMode;                                       // 0x00FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TAB9[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimTo");
		return ptr;
	}



};

// Class AthenaAI.BTTask_SwimTurnOnTheSpot
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UBTTask_SwimTurnOnTheSpot : public UBTTask_BlackboardBase
{
public:
	float                                              MaxTurnSpringAccel;                                        // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeUntilMaxTurnSpringAccel;                               // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AngleDeltaToAcceptFinalRotation;                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeout;                                                   // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimTurnOnTheSpot");
		return ptr;
	}



};

// Class AthenaAI.TinySharkTelemetryComponent
// 0x00C0 (FullSize[0x0188] - InheritedSize[0x00C8])
class UTinySharkTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_ZETJ[0xC0];                                    // 0x00C8(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.TinySharkTelemetryComponent");
		return ptr;
	}



};

// Class AthenaAI.TinySharkExperience
// 0x03A0 (FullSize[0x0770] - InheritedSize[0x03D0])
class ATinySharkExperience : public AActor
{
public:
	unsigned char                                      UnknownData_YWV1[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RelevancyDistance;                                         // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TrackingMovementCheckInterval;                             // 0x03DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnvQuery*                                   TrackingMovementValidQuery;                                // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JIO2[0xA0];                                    // 0x03E8(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIOnDemandSpawner*                          TinySharkSpawner;                                          // 0x0488(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class ASharkPawn*                                  TinySharkPawn;                                             // 0x0490(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash)
	struct FName                                       HealthRTPC;                                                // 0x0498(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F8HH[0x8];                                     // 0x04A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTinySharkParams                            Params;                                                    // 0x04A8(0x00B8) (Transient, Protected)
	class UTinySharkTelemetryComponent*                TinySharkTelemetryComponent;                               // 0x0560(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AShip*                                       TrackedShip;                                               // 0x0568(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1009[0x80];                                    // 0x0570(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEncounterParams                            SightingEncounterParams;                                   // 0x05F0(0x000C) (Edit, DisableEditOnInstance, Protected)
	struct FEncounterParams                            CloseEncounterParams;                                      // 0x05FC(0x000C) (Edit, DisableEditOnInstance, Protected)
	unsigned char                                      UnknownData_2QGM[0x140];                                   // 0x0608(0x0140) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> CachedControllerParamsAsset;                               // 0x0748(0x001C) ELEMENT_SIZE_MISMATCH (UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VQZX[0x4];                                     // 0x0608(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_BLTU[0x8];                                     // 0x0768(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.TinySharkExperience");
		return ptr;
	}



	void TinySharkPawnDestroyed(class AActor* InDestroyedActor);
	void OnRep_TinySharkPawn(class ASharkPawn* LastTinySharkPawn);
	class AShip* GetTrackedShip();
	TEnumAsByte<AthenaAI_ETinySharkState> GetCurrentState();
	TEnumAsByte<AthenaAI_ETinySharkActiveState> GetActiveState();
};

// Class AthenaAI.TinySharkParamsDataAsset
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UTinySharkParamsDataAsset : public UDataAsset
{
public:
	struct FTinySharkParams                            Params;                                                    // 0x0028(0x00B8) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.TinySharkParamsDataAsset");
		return ptr;
	}



};

// Class AthenaAI.TinySharkServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTinySharkServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.TinySharkServiceInterface");
		return ptr;
	}



};

// Class AthenaAI.TinySharkService
// 0x01B8 (FullSize[0x0588] - InheritedSize[0x03D0])
class ATinySharkService : public AActor
{
public:
	unsigned char                                      UnknownData_XM69[0x10];                                    // 0x03D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTinySharkServiceParamsDataAsset*            TinySharkServiceParams;                                    // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IRTF[0x170];                                   // 0x03E8(0x0170) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ATinySharkExperience*>                TinySharkExperiences;                                      // 0x0558(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData_KJGU[0x20];                                    // 0x0568(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.TinySharkService");
		return ptr;
	}



	bool RequestTinySharkWithShip(class AShip* InTrackedShip, int OverrideControllerParamIndex, int PartIndex);
	bool RequestTinySharkWithLocation(const struct FVector& SpawnLocation, int PartIndex);
	void DismissAllTinySharks();
	bool CanSpawnTinySharkExperience();
};

// Class AthenaAI.TinySharkServiceParamsDataAsset
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UTinySharkServiceParamsDataAsset : public UDataAsset
{
public:
	struct FTinySharkServiceParams                     Params;                                                    // 0x0028(0x0028) (Edit, DisableEditOnInstance)
	int                                                MaxNumTinySharkExperiences;                                // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HUYT[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.TinySharkServiceParamsDataAsset");
		return ptr;
	}



};

// Class AthenaAI.Pet
// 0x0430 (FullSize[0x0C30] - InheritedSize[0x0800])
class APet : public AAICreatureCharacter
{
public:
	unsigned char                                      UnknownData_PE2J[0x90];                                    // 0x0800(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPetWieldableReactMappingsDataAsset*         WieldableReactMappingsAsset;                               // 0x0890(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxVelocityForLocomotionAnimation;                         // 0x0898(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanFly;                                                    // 0x089C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8I5E[0x3];                                     // 0x089D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPetFlyingStrategyProperties>        FlyingStrategyProperties;                                  // 0x08A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              FlyingLandTime;                                            // 0x08B0(0x0004) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YXZ2[0x4];                                     // 0x08B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 FlyingLandCurve;                                           // 0x08B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FlyingTakeOffTime;                                         // 0x08C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3NU1[0x4];                                     // 0x08C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 FlyingTakeOffCurve;                                        // 0x08C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                                 MidFlightAdjustmentTimerRange;                             // 0x08D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UCurveFloat*                                 MidFlightAdjustmentCurve;                                  // 0x08E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 MidFlightTimeToDistanceAdjustmentCurve;                    // 0x08E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FiredFromActorCollision;                                   // 0x08F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 FiredFromActorSFX;                                         // 0x08F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPetDitherComponent*                         DitherComponent;                                           // 0x0900(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinimumDamageForHealthReact;                               // 0x0908(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDistForWaterBucketToClean;                              // 0x090C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinimumDurationUntilPetCanDespawnConcealed;                // 0x0910(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultNamePlateHeight;                                    // 0x0914(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AlternateNamePlateHeight;                                  // 0x0918(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GCJU[0x4];                                     // 0x091C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<Athena_EAthenaAnimationPetRoamingState>> StatesToUseAlternateNamePlatePos;                          // 0x0920(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FFloatRange                                 PetTimeSpentSad;                                           // 0x0930(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<AthenaAI_EDebugPetStateDescriptor>     DebugStateDescriptor;                                      // 0x0940(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G5CN[0x7];                                     // 0x0941(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAINameplateComponent*                       AINameplateComponent;                                      // 0x0948(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UFeedingComponent*                           FeedingComponent;                                          // 0x0950(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UStarvingComponent*                          StarvingComponent;                                         // 0x0958(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UCleanlinessComponent*                       CleanlinessComponent;                                      // 0x0960(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UCannonSquashComponent*                      CannonSquashComponent;                                     // 0x0968(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FPetMovementRequest                         ReplicatedMovementRequest;                                 // 0x0970(0x000C) (Net, RepNotify, Protected)
	float                                              TargetMeshRoll;                                            // 0x097C(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0NXH[0x10];                                    // 0x0980(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DefaultShipTurnRateModifier;                               // 0x0990(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_24P9[0x4];                                     // 0x0994(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPetTurnRateModifier>                TurnRateModifierList;                                      // 0x0998(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected)
	TArray<TEnumAsByte<Athena_EAthenaAnimationPetRoamingState>> LocomotingMovementStates;                                  // 0x09A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected)
	TArray<TEnumAsByte<Athena_EAthenaAnimationPetRoamingState>> RequestIdleOrMovementValidMovementStates;                  // 0x09B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected)
	float                                              MaxRollAngle;                                              // 0x09C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              DelayForDisablingMovementOnIdle;                           // 0x09CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              IslandDustRatePerSecond;                                   // 0x09D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FGuid                                       CrewId;                                                    // 0x09D4(0x0010) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected)
	bool                                               InHangout;                                                 // 0x09E4(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected)
	bool                                               PerchedInHangout;                                          // 0x09E5(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected)
	bool                                               ResetRollAndZOffset;                                       // 0x09E6(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected)
	bool                                               ShouldIgnoreTooltipDisplayOffset;                          // 0x09E7(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_VAQL[0x8];                                     // 0x09E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPetTurnToFaceData                          PetTurnToFaceData;                                         // 0x09F0(0x0020) (Net, RepNotify, Protected)
	unsigned char                                      UnknownData_FMXF[0x18];                                    // 0x0A10(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIPartsRetrievalComponent*                  AIPartsRetrievalComponent;                                 // 0x0A28(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPetPartCustomisationComponent*              PetPartCustomisationComponent;                             // 0x0A30(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULightWeightStatusEffectManagerComponent*    LightWeightStatusEffectManagerComponent;                   // 0x0A38(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPetTelemetryComponent*                      TelemetryComponent;                                        // 0x0A40(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPetSicknessComponent*                       SicknessComponent;                                         // 0x0A48(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWaterExposureComponent*                     WaterExposureComponent;                                    // 0x0A50(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimationDataStoreComponent*                AnimationDataStoreComponent;                               // 0x0A58(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      SpawnedForShip;                                            // 0x0A60(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      PetOwner;                                                  // 0x0A68(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class AItemInfo*                                   PetInfo;                                                   // 0x0A70(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I8BP[0x8];                                     // 0x0A78(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDocker                                     Docker;                                                    // 0x0A80(0x0050) (Edit, DisableEditOnInstance)
	struct FStartPickupObjectActionRuleParams          StartPickupObjectActionRuleParams;                         // 0x0AD0(0x0010) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_0N8M[0x10];                                    // 0x0AE0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    CurrentlyPlayingParticleSystem;                            // 0x0AF0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      LandingStrategy;                                           // 0x0AF8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      PursuitStrategy;                                           // 0x0B00(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              DefaultRollLerpTime;                                       // 0x0B08(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LandingRollLerpTime;                                       // 0x0B0C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBeingDismissed;                                          // 0x0B10(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H2ZB[0xEB];                                    // 0x0B11(0x00EB) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               IsInDisabledPetPerchHangout;                               // 0x0BFC(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PetIsSad;                                                  // 0x0BFD(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_QL9F[0x32];                                    // 0x0BFE(0x0032) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.Pet");
		return ptr;
	}



	void SetExitTakeOffFlag(bool InExitTakeOffFlag);
	void OnShipDestroyed(class AActor* InShip);
	void OnRep_RollRequest();
	void OnRep_ResetRollAndZOffset();
	void OnRep_PetTurnToFaceData();
	void OnRep_PetOwner();
	void OnRep_PetIsSad();
	void OnRep_PerchedInHangout();
	void OnRep_MovementRequest();
	void OnRep_InHangout();
	void OnOwnerDestroyed(class AActor* InOwner);
	void Multicast_DitherOut();
	void Multicast_DitherIn();
	float GetFloorMeshOffsetZ();
};

// Class AthenaAI.PetWieldableReactMappingsDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UPetWieldableReactMappingsDataAsset : public UDataAsset
{
public:
	TArray<struct FPetWieldableReactMapping>           WieldableReactMappings;                                    // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PetWieldableReactMappingsDataAsset");
		return ptr;
	}



};

// Class AthenaAI.PreviewPet
// 0x00E8 (FullSize[0x04B8] - InheritedSize[0x03D0])
class APreviewPet : public AActor
{
public:
	unsigned char                                      UnknownData_ZKCG[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Athena_EAthenaAnimationPetRoamingState> InitialAnimState;                                          // 0x03D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4LBI[0x3];                                     // 0x03D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIPartId                                   InitialPartIdToLoad;                                       // 0x03DC(0x0008) (Edit, Protected)
	unsigned char                                      UnknownData_CTQA[0x4];                                     // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIPartsCategory*                            PreviewPetPartsCategory;                                   // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      PreviewPetMesh;                                            // 0x03F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FPetAnimationDataPreview                    PreviewPetAnimationData;                                   // 0x03F8(0x0010) (Edit, DisableEditOnInstance, Protected)
	class UAIPartsRetrievalComponent*                  AIPartsRetrievalComponent;                                 // 0x0408(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPetPartCustomisationComponent*              PetPartCustomisationComponent;                             // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9RIE[0xA0];                                    // 0x0418(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaAI.PreviewPet");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
