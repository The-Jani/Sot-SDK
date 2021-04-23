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

// Class Kraken.KrakenTentacle
// 0x0138 (FullSize[0x0560] - InheritedSize[0x0428])
class AKrakenTentacle : public AActor
{
public:
	unsigned char                                      UnknownData_6UIF[0x20];                                    // 0x0428(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UHealthComponent*                            HealthComponent;                                           // 0x0448(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorDamageableComponent*                   DamageableComponent;                                       // 0x0450(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVenomComponent*                             VenomComponent;                                            // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VenomChance;                                               // 0x0460(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QLRU[0xFC];                                    // 0x0464(0x00FC) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenTentacle");
		return ptr;
	}



	void OnDamageToTentacle(const struct FImpactDamageEvent& ImpactDamageEvent);
};

// Class Kraken.CoordinatedKrakenInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCoordinatedKrakenInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.CoordinatedKrakenInterface");
		return ptr;
	}



};

// Class Kraken.CoordinatedKrakenPhaseActionsDataAsset
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UCoordinatedKrakenPhaseActionsDataAsset : public UDataAsset
{
public:
	TArray<int>                                        TentaclesUsed;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)
	bool                                               KrakenHeadUsed;                                            // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CSEK[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCoordinatedKrakenAction>            Actions;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.CoordinatedKrakenPhaseActionsDataAsset");
		return ptr;
	}



};

// Class Kraken.EnvQueryContext_AllKrakenOccupiedLocations
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_AllKrakenOccupiedLocations : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.EnvQueryContext_AllKrakenOccupiedLocations");
		return ptr;
	}



};

// Class Kraken.EnvQueryContext_AllocatedShip
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_AllocatedShip : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.EnvQueryContext_AllocatedShip");
		return ptr;
	}



};

// Class Kraken.EnvQueryContext_AllShipsInWorld
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_AllShipsInWorld : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.EnvQueryContext_AllShipsInWorld");
		return ptr;
	}



};

// Class Kraken.EnvQueryContext_AllWatercraftsInWorld
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_AllWatercraftsInWorld : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.EnvQueryContext_AllWatercraftsInWorld");
		return ptr;
	}



};

// Class Kraken.EnvQueryContext_PreviousLocation
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_PreviousLocation : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.EnvQueryContext_PreviousLocation");
		return ptr;
	}



};

// Class Kraken.EnvQueryGenerator_KrakenSpawnLocations
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UEnvQueryGenerator_KrakenSpawnLocations : public UEnvQueryGenerator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.EnvQueryGenerator_KrakenSpawnLocations");
		return ptr;
	}



};

// Class Kraken.EnvQueryGenerator_KrakenTentacleSpawnLocations
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UEnvQueryGenerator_KrakenTentacleSpawnLocations : public UEnvQueryGenerator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.EnvQueryGenerator_KrakenTentacleSpawnLocations");
		return ptr;
	}



};

// Class Kraken.Murk
// 0x00A0 (FullSize[0x04C8] - InheritedSize[0x0428])
class AMurk : public AActor
{
public:
	class UMurkWaterModifierZoneComponent*             WaterModifierZone;                                         // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SceneRootComponent;                                        // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        InnerSheet;                                                // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        OuterSheet;                                                // 0x0440(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UnderwaterSheetHeightScale;                                // 0x0448(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PCJJ[0x4];                                     // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    InnerSheetMaterialInstance;                                // 0x0450(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    OuterSheetMaterialInstance;                                // 0x0458(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SU9U[0x68];                                    // 0x0460(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.Murk");
		return ptr;
	}



	void DeactivateMurkBP();
	void ActivateMurkBP();
};

// Class Kraken.KrakenShipWrappingTentacle
// 0x01F0 (FullSize[0x0750] - InheritedSize[0x0560])
class AKrakenShipWrappingTentacle : public AKrakenTentacle
{
public:
	class USceneComponent*                             SceneRoot;                                                 // 0x0560(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        TentacleCollisions;                                        // 0x0568(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        TentacleMesh;                                              // 0x0570(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               DamageZone;                                                // 0x0578(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             InteractableBlockingRegions;                               // 0x0580(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             KnockbackRegions;                                          // 0x0588(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               TentacleHeadCollisions;                                    // 0x0590(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             TentacleHeadKnockbackRegions;                              // 0x0598(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKrakenShipWrappingTentacleAIAudioComponent* AudioComponent;                                            // 0x05A0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 LowDetailTentacleMesh;                                     // 0x05A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStringAssetReference                       HighDetailTentacleMeshAsset;                               // 0x05B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleParams           Params;                                                    // 0x05C0(0x00F0) (Edit, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    TentacleDynamicMaterialInstance;                           // 0x06B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 HighDetailTentacleMesh;                                    // 0x06B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKrakenShipWrappingTentacleAnimationState   CurrentServerAnimationState;                               // 0x06C0(0x0010) (Net, Transient, RepNotify)
	struct FKrakenShipWrappingTentacleAnimationState   PendingServerAnimationState;                               // 0x06D0(0x0010) (Net, Transient)
	unsigned char                                      UnknownData_PO25[0x70];                                    // 0x06E0(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenShipWrappingTentacle");
		return ptr;
	}



	void OnRep_CurrentServerAnimationState();
};

// Class Kraken.KrakenTelemetryComponent
// 0x0108 (FullSize[0x01D0] - InheritedSize[0x00C8])
class UKrakenTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_JRJV[0x108];                                   // 0x00C8(0x0108) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenTelemetryComponent");
		return ptr;
	}



};

// Class Kraken.Kraken
// 0x0548 (FullSize[0x0970] - InheritedSize[0x0428])
class AKraken : public AActor
{
public:
	unsigned char                                      UnknownData_RMAN[0x18];                                    // 0x0428(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RelevancyDistance;                                         // 0x0440(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KN26[0x14];                                    // 0x0444(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InnerRadius;                                               // 0x0458(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OuterRadius;                                               // 0x045C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Kraken_EKrakenState>                   CurrentState;                                              // 0x0460(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GK1Q[0x1A7];                                   // 0x0461(0x01A7) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMurk*                                       MurkActor;                                                 // 0x0608(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GGS4[0xA8];                                    // 0x0610(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKrakenAICharacterAudioComponent*            KrakenAudioComponent;                                      // 0x06B8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UKrakenTelemetryComponent*                   KrakenTelemetryComponent;                                  // 0x06C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FEncounterParams                            SightingEncounterParams;                                   // 0x06C8(0x000C) (Edit, DisableEditOnInstance, Protected)
	struct FEncounterParams                            CloseEncounterParams;                                      // 0x06D4(0x000C) (Edit, DisableEditOnInstance, Protected)
	unsigned char                                      UnknownData_HNDG[0x10];                                    // 0x06E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKrakenParams                               Params;                                                    // 0x06F0(0x0160) (Transient)
	int                                                NumTentaclesRemaining;                                     // 0x0850(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8V1G[0x11C];                                   // 0x0854(0x011C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.Kraken");
		return ptr;
	}



	void Multicast_OnTentacleTakenDamage();
	void AddActorToKnownTargets(class AActor* Target);
};

// Class Kraken.KrakenAnimatedTentacleAnimationDataAsset
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UKrakenAnimatedTentacleAnimationDataAsset : public UDataAsset
{
public:
	class UKrakenAnimatedTentacleAnimationSpecDataAsset* AnimationSpec;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FrameTimeDelta;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimationLength;                                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumFrames;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllowLookAround;                                           // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RequiresWaterHeightQuery;                                  // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5IS6[0x2];                                     // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnimationPlayRateScale;                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WAD5[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKrakenAnimatedTentacleAnimationBoneTrack> Bones;                                                     // 0x0048(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenAnimatedTentacleAnimationDataAsset");
		return ptr;
	}



};

// Class Kraken.KrakenAnimatedTentacleAnimationMappingDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UKrakenAnimatedTentacleAnimationMappingDataAsset : public UDataAsset
{
public:
	TArray<struct FKrakenAnimatedTentacleMappedAnimation> Animations;                                                // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenAnimatedTentacleAnimationMappingDataAsset");
		return ptr;
	}



};

// Class Kraken.KrakenAnimatedTentacleAnimationSpecDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UKrakenAnimatedTentacleAnimationSpecDataAsset : public UDataAsset
{
public:
	TArray<struct FKrakenAnimatedTentacleAnimationSpecBone> Bones;                                                     // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenAnimatedTentacleAnimationSpecDataAsset");
		return ptr;
	}



};

// Class Kraken.KrakenAnimatedTentacleStateAnimationsDataAsset
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UKrakenAnimatedTentacleStateAnimationsDataAsset : public UDataAsset
{
public:
	TAssetPtr<class UKrakenAnimatedTentacleAnimationMappingDataAsset> MappingAssetReference;                                     // 0x0028(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GJC8[0x4];                                     // 0x0028(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FKrakenAnimatedTentacleStateAnimationMapping> States;                                                    // 0x0048(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenAnimatedTentacleStateAnimationsDataAsset");
		return ptr;
	}



};

// Class Kraken.KrakenHead
// 0x01C8 (FullSize[0x05F0] - InheritedSize[0x0428])
class AKrakenHead : public AActor
{
public:
	unsigned char                                      UnknownData_V4K8[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UHealthComponent*                            HealthComponent;                                           // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorDamageableComponent*                   ActorDamageableComponent;                                  // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UExplosionComponent*                         ExplosionComponent;                                        // 0x0440(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             BiteAttackVFX;                                             // 0x0448(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FStatus>                             BreathingInContinuousStatusesToApply;                      // 0x0450(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              BreatheInStatusDuration;                                   // 0x0460(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SQA7[0x4];                                     // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FStatus>                             RoarContinuousStatusesToApply;                             // 0x0468(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              RoarStatusDuration;                                        // 0x0478(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_243G[0x4];                                     // 0x047C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnvQuery*                                   RoarEQSQuery;                                              // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      RoarVenomSource;                                           // 0x0488(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              RoarVenomInitialDamage;                                    // 0x0490(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RoarVenomDamageOverTime;                                   // 0x0494(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RoarVenomDamageOverTimeDuration;                           // 0x0498(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CXX7[0x4];                                     // 0x049C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      KnockbackDamagerType;                                      // 0x04A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FKnockBackInfo                              RoarKnockbackInfo;                                         // 0x04A8(0x0050) (Edit)
	class UClass*                                      RequestedState;                                            // 0x04F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             Root;                                                      // 0x0500(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LEKH[0xC0];                                    // 0x0508(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       BiteAttackImpactNamedPointsGroupName;                      // 0x05C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W2H8[0x20];                                    // 0x05D0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenHead");
		return ptr;
	}



	void RequestState(class UClass* NewState);
	void OnCoordinatedKrakenSpecialEvent(TEnumAsByte<Kraken_ECoordinatedKrakenSpecialEventTypes> InEventType);
};

// Class Kraken.KrakenHeadBreathingInStatus
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UKrakenHeadBreathingInStatus : public UStatusBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenHeadBreathingInStatus");
		return ptr;
	}



};

// Class Kraken.KrakenHeadRoaringStatus
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UKrakenHeadRoaringStatus : public UStatusBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenHeadRoaringStatus");
		return ptr;
	}



};

// Class Kraken.KrakenIdleBehaviourParamsDataAsset
// 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
class UKrakenIdleBehaviourParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenIdleBehaviourParams                  Params;                                                    // 0x0028(0x00C0) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenIdleBehaviourParamsDataAsset");
		return ptr;
	}



};

// Class Kraken.KrakenParamsDataAsset
// 0x0160 (FullSize[0x0188] - InheritedSize[0x0028])
class UKrakenParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenParams                               Params;                                                    // 0x0028(0x0160) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenParamsDataAsset");
		return ptr;
	}



};

// Class Kraken.KrakenPlayerGrabbingBehaviourParamsDataAsset
// 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
class UKrakenPlayerGrabbingBehaviourParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenPlayerGrabbingBehaviourParams        Params;                                                    // 0x0028(0x00E8) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenPlayerGrabbingBehaviourParamsDataAsset");
		return ptr;
	}



};

// Class Kraken.KrakenServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKrakenServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenServiceInterface");
		return ptr;
	}



};

// Class Kraken.KrakenService
// 0x0228 (FullSize[0x0650] - InheritedSize[0x0428])
class AKrakenService : public AActor
{
public:
	unsigned char                                      UnknownData_9EQP[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKrakenServiceParams                        KrakenServiceParams;                                       // 0x0430(0x00A0) (Transient, Protected)
	unsigned char                                      UnknownData_0BGE[0xA0];                                    // 0x04D0(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKraken*                                     Kraken;                                                    // 0x0570(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KRN5[0xD8];                                    // 0x0578(0x00D8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenService");
		return ptr;
	}



	void RequestKrakenWithLocation(const struct FVector& SpawnLocation, class AActor* SpawnedForActor);
	bool IsServiceInitialized();
	bool IsKrakenActive();
	void DismissKraken();
};

// Class Kraken.KrakenServiceParamsDataAsset
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class UKrakenServiceParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenServiceParams                        Params;                                                    // 0x0028(0x00A0) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenServiceParamsDataAsset");
		return ptr;
	}



};

// Class Kraken.KrakenShipHittingBehaviourParamsDataAsset
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UKrakenShipHittingBehaviourParamsDataAsset : public UDataAsset
{
public:
	struct FKrakenShipHittingBehaviourParams           Params;                                                    // 0x0028(0x0060) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenShipHittingBehaviourParamsDataAsset");
		return ptr;
	}



};

// Class Kraken.KrakenShipWrappingBehaviourParamsDataAsset
// 0x0428 (FullSize[0x0450] - InheritedSize[0x0028])
class UKrakenShipWrappingBehaviourParamsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData_XF5W[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKrakenShipWrappingBehaviourParams          Params;                                                    // 0x0030(0x0420) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenShipWrappingBehaviourParamsDataAsset");
		return ptr;
	}



};

// Class Kraken.KrakenShipWrappingKnockbackRegionComponent
// 0x00A0 (FullSize[0x0350] - InheritedSize[0x02B0])
class UKrakenShipWrappingKnockbackRegionComponent : public USceneComponent
{
public:
	class UBoxComponent*                               KnockbackRegion;                                           // 0x02B0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     KnockbackDirection;                                        // 0x02B8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              KnockbackTime;                                             // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKnockBackInfo                              KnockbackParams;                                           // 0x02C8(0x0050) (Edit)
	unsigned char                                      UnknownData_NL8G[0x38];                                    // 0x0318(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Kraken.KrakenShipWrappingKnockbackRegionComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
