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

// Class Watercrafts.ControllableOarsInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UControllableOarsInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.ControllableOarsInterface");
		return ptr;
	}



};

// Class Watercrafts.WatercraftTrackerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWatercraftTrackerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.WatercraftTrackerInterface");
		return ptr;
	}



};

// Class Watercrafts.ItemProxyWatercraftTrackerComponent
// 0x0088 (FullSize[0x0150] - InheritedSize[0x00C8])
class UItemProxyWatercraftTrackerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_96TQ[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UItemProxyWatercraftTrackerComponentDataAsset* WatercraftTrackingData;                                    // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AActor*                                      CurrentWatercraft;                                         // 0x00D8(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NN74[0x70];                                    // 0x00E0(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.ItemProxyWatercraftTrackerComponent");
		return ptr;
	}



	void OnRep_CurrentWatercraft(class AActor* PreviousWatercraft);
	void OnCurrentWatercraftDestroyed(class AActor* DestroyedWatercraft);
};

// Class Watercrafts.ItemProxyWatercraftTrackerComponentDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UItemProxyWatercraftTrackerComponentDataAsset : public UDataAsset
{
public:
	TArray<class UClass*>                              WatercraftTypes;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.ItemProxyWatercraftTrackerComponentDataAsset");
		return ptr;
	}



};

// Class Watercrafts.RowboatAudioComponent
// 0x01B0 (FullSize[0x0460] - InheritedSize[0x02B0])
class URowboatAudioComponent : public USceneComponent
{
public:
	class URowboatAudioComponentParams*                Params;                                                    // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARowboat*                                    ParentRowboat;                                             // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MUQM[0x1A0];                                   // 0x02C0(0x01A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.RowboatAudioComponent");
		return ptr;
	}



};

// Class Watercrafts.RowboatAudioComponentParams
// 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
class URowboatAudioComponentParams : public UDataAsset
{
public:
	class UWwiseObjectPoolWrapper*                     RowboatObjectPool;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RowboatWakeStart;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RowboatWakeStop;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RowboatSpeedRtpcName;                                      // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RowboatMaxSpeedRtpc;                                       // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_10D4[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 RowboatLaunch;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RowboatImpactAndScrapeStart;                               // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RowboatImpactAndScrapeStop;                                // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RowboatStrainStart;                                        // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RowboatStrainStop;                                         // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RowboatStrainRtpcName;                                     // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RowboatMaxStrainRtpc;                                      // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MLA3[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 RowboatTakenDamage;                                        // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageAmountRequiredForNoiseToPlay;                        // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MK3D[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 RowboatAttach;                                             // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RowboatDetach;                                             // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseObjectPoolWrapper*                     WwiseOarEmitterPool;                                       // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayOarInOarLayer;                                         // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayOarInWaterLayer;                                       // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayOarOutOarLayer;                                        // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayOarOutWaterLayer;                                      // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayOarBrakingLoop;                                        // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopOarBrakingLoop;                                        // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PlayOarPullFinished;                                       // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.RowboatAudioComponentParams");
		return ptr;
	}



};

// Class Watercrafts.RowboatDescDataAsset
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class URowboatDescDataAsset : public UDataAsset
{
public:
	struct FPartDesc                                   PartDesc;                                                  // 0x0028(0x0020) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.RowboatDescDataAsset");
		return ptr;
	}



};

// Class Watercrafts.RowboatOarsLeftForwardNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class URowboatOarsLeftForwardNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.RowboatOarsLeftForwardNotificationInputId");
		return ptr;
	}



};

// Class Watercrafts.RowboatOarsLeftForwardDeactivatedNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class URowboatOarsLeftForwardDeactivatedNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.RowboatOarsLeftForwardDeactivatedNotificationInputId");
		return ptr;
	}



};

// Class Watercrafts.RowboatOarsRightForwardNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class URowboatOarsRightForwardNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.RowboatOarsRightForwardNotificationInputId");
		return ptr;
	}



};

// Class Watercrafts.RowboatOarsRightForwardDeactivatedNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class URowboatOarsRightForwardDeactivatedNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.RowboatOarsRightForwardDeactivatedNotificationInputId");
		return ptr;
	}



};

// Class Watercrafts.RowboatOarsLeftBrakingActivatedNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class URowboatOarsLeftBrakingActivatedNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.RowboatOarsLeftBrakingActivatedNotificationInputId");
		return ptr;
	}



};

// Class Watercrafts.RowboatOarsLeftBrakingDeactivatedNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class URowboatOarsLeftBrakingDeactivatedNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.RowboatOarsLeftBrakingDeactivatedNotificationInputId");
		return ptr;
	}



};

// Class Watercrafts.RowboatOarsRightBrakingActivatedNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class URowboatOarsRightBrakingActivatedNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.RowboatOarsRightBrakingActivatedNotificationInputId");
		return ptr;
	}



};

// Class Watercrafts.RowboatOarsRightBrakingDeactivatedNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class URowboatOarsRightBrakingDeactivatedNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.RowboatOarsRightBrakingDeactivatedNotificationInputId");
		return ptr;
	}



};

// Class Watercrafts.ScrapeableDamageDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UScrapeableDamageDataAsset : public UDataAsset
{
public:
	TArray<struct FScrapeableDamageSpeedEntry>         DamageSpeedParams;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.ScrapeableDamageDataAsset");
		return ptr;
	}



};

// Class Watercrafts.ScrapeableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UScrapeableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.ScrapeableInterface");
		return ptr;
	}



};

// Class Watercrafts.ScrapeableComponent
// 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
class UScrapeableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_7XZ7[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinIntervalBetweenScrapeDamage;                            // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9E2P[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScrapeableDamageDataAsset*                  ScrapeDamageSettings;                                      // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SafeZoneCenterDirection;                                   // 0x00E0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              SafeZoneMaximumAngle;                                      // 0x00EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ScrapeDamagerType;                                         // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.ScrapeableComponent");
		return ptr;
	}



};

// Class Watercrafts.Watercraft
// 0x0378 (FullSize[0x07A0] - InheritedSize[0x0428])
class AWatercraft : public AActor
{
public:
	unsigned char                                      UnknownData_I6JC[0x28];                                    // 0x0428(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBuoyancyComponent*                          BuoyancyComponent;                                         // 0x0450(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FWatercraftRolloverCorrector                RolloverCorrector;                                         // 0x0458(0x000C) (Edit, DisableEditOnInstance, Protected)
	unsigned char                                      UnknownData_4JF6[0x4];                                     // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UShipNosediveBrake*                          NosediveBrake;                                             // 0x0468(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UBowSplashContainer*                         BowSplashContainer;                                        // 0x0470(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UStaticMeshComponent*                        CollisionMesh;                                             // 0x0478(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UStaticMeshComponent*                        CraftMesh;                                                 // 0x0480(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UBoxComponent*                               OverlapHits;                                               // 0x0488(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        WaterOcclusionVolume;                                      // 0x0490(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWaterInteractionComponent*                  WaterInteractionComponent;                                 // 0x0498(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ClientConvexHullCollisionProfile;                          // 0x04A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNetTimeStampCalculator                     MovementTimeStamp;                                         // 0x04A8(0x0070) (Net)
	struct FRigidBodyErrorCorrection                   PhysicsErrorCorrection;                                    // 0x0518(0x001C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_N8NW[0x34];                                    // 0x0534(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBuoyancySampleMovement                     BuoyancySampleMovement;                                    // 0x0568(0x0068) (Edit, DisableEditOnInstance)
	class UCurveFloat*                                 SpeedToChoppinessScalarCurve;                              // 0x05D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeepWaterSubmersionThreshold;                              // 0x05D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BuoyancyChoppinessWhileSinking;                            // 0x05DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RigidBodyAwake;                                            // 0x05E0(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InContactWithLand;                                         // 0x05E1(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InDeepWater;                                               // 0x05E2(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZIOL[0x5];                                     // 0x05E3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TScriptInterface<class UScrapeableInterface>       Scrapeable;                                                // 0x05E8(0x0010) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper)
	unsigned char                                      UnknownData_VMX9[0x1A8];                                   // 0x05F8(0x01A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.Watercraft");
		return ptr;
	}



	void OnRigidBodyWake(const struct FName& InBoneName);
	void OnRigidBodySleep(const struct FName& InBoneName);
};

// Class Watercrafts.Rowboat
// 0x0278 (FullSize[0x0A18] - InheritedSize[0x07A0])
class ARowboat : public AWatercraft
{
public:
	unsigned char                                      UnknownData_50TQ[0x30];                                    // 0x07A0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChildActorComponent*                        LeftSideClamberSpot;                                       // 0x07D0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        RightSideClamberSpot;                                      // 0x07D8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        ForceSpot;                                                 // 0x07E0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        Lantern;                                                   // 0x07E8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        RowingSeat;                                                // 0x07F0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShipLiveryComponent*                        LiveryComponent;                                           // 0x07F8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReplicatedShipPartCustomizationComponent*   CustomizationComponent;                                    // 0x0800(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     WaterExclusionOffset;                                      // 0x0808(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_QRM0[0x4];                                     // 0x0814(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTetherCustomisationComponent*               TetherCustomisationComponent;                              // 0x0818(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHealthComponent*                            HealthComponent;                                           // 0x0820(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorDamageableComponent*                   ActorDamageableComponent;                                  // 0x0828(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStorageContainerComponent*                  StorageContainerComponent;                                 // 0x0830(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableStorageContainer*               InteractableStorageContainerComponent;                     // 0x0838(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URammableComponent*                          RammableComponent;                                         // 0x0840(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScrapeableComponent*                        ScrapeableComponent;                                       // 0x0848(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URowboatAudioComponent*                      RowboatAudio;                                              // 0x0850(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBaseHullDragDynamicsDesc*                   HullDragDynamicsDesc;                                      // 0x0858(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBowSplashContainer*                         OarSplashContainer;                                        // 0x0860(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMountableComponent*                         MountableComponent;                                        // 0x0868(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 LinearDampingOverTimeWhileBeachedScalarCurve;              // 0x0870(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 AngularDampingOverTimeWhileBeachedScalarCurve;             // 0x0878(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRowboatDamageEffectData                    DamageEffectData;                                          // 0x0880(0x0018) (Edit, DisableEditOnInstance)
	struct FRowboatStrainDamageData                    StrainDamageData;                                          // 0x0898(0x0020) (Edit, DisableEditOnInstance)
	TArray<class UChildActorComponent*>                AlwaysEnabledInteractables;                                // 0x08B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)
	class UShroudBreakerTrackerComponent*              ShroudBreakerTrackerComponent;                             // 0x08C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBeingLaunched;                                           // 0x08D0(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsSinking;                                                 // 0x08D1(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_BKGD[0x2];                                     // 0x08D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxPushingAngle;                                           // 0x08D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentStrainAmount;                                       // 0x08D8(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDocked;                                                  // 0x08DC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IWFS[0x1];                                     // 0x08DD(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ECollisionChannel>              CoverCollisionChannel;                                     // 0x08DE(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2RNG[0x1];                                     // 0x08DF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UnderCoverCheckInterval;                                   // 0x08E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UnderCoverHeight;                                          // 0x08E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                             RelativeUnderCoverProbeRoots;                              // 0x08E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData_Q296[0x120];                                   // 0x08F8(0x0120) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.Rowboat");
		return ptr;
	}



	void SetAlwaysEnabledInteractables(TArray<class UChildActorComponent*> InAlwaysEnabledInteractables);
	void OnRep_IsSinking();
};

// Class Watercrafts.RowboatPartInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URowboatPartInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.RowboatPartInterface");
		return ptr;
	}



};

// Class Watercrafts.RowboatSpawnParamsDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class URowboatSpawnParamsDataAsset : public UDataAsset
{
public:
	TArray<class UClass*>                              RowboatTypes;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.RowboatSpawnParamsDataAsset");
		return ptr;
	}



};

// Class Watercrafts.RowingActionStateId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URowingActionStateId : public UActionStateId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.RowingActionStateId");
		return ptr;
	}



};

// Class Watercrafts.RowingCompositeInputHandler
// 0x0088 (FullSize[0x0260] - InheritedSize[0x01D8])
class URowingCompositeInputHandler : public ULookAtOffsetCompositeInputHandler
{
public:
	unsigned char                                      UnknownData_SLTB[0x80];                                    // 0x01D8(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ARowingSeat*                                 TargetOars;                                                // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.RowingCompositeInputHandler");
		return ptr;
	}



	TEnumAsByte<AthenaInput_EInputHandlerResult> OnUseRightOar();
	TEnumAsByte<AthenaInput_EInputHandlerResult> OnUseLeftOar();
	TEnumAsByte<AthenaInput_EInputHandlerResult> OnStopUseRightOar();
	TEnumAsByte<AthenaInput_EInputHandlerResult> OnStopUseLeftOar();
	TEnumAsByte<AthenaInput_EInputHandlerResult> OnBrakeRightOar();
	TEnumAsByte<AthenaInput_EInputHandlerResult> OnBrakeLeftOar();
};

// Class Watercrafts.WatercraftBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWatercraftBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.WatercraftBlueprintFunctionLibrary");
		return ptr;
	}



	class AWatercraft* STATIC_SpawnWatercraft(class UObject* WorldContextObject, class UClass* WatercraftClass, const struct FVector& Location, const struct FRotator& Rotation);
};

// Class Watercrafts.WatercraftServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWatercraftServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.WatercraftServiceInterface");
		return ptr;
	}



};

// Class Watercrafts.WatercraftService
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class AWatercraftService : public AActor
{
public:
	unsigned char                                      UnknownData_UIN9[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.WatercraftService");
		return ptr;
	}



};

// Class Watercrafts.WatercraftSpawnData
// 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
class UWatercraftSpawnData : public UItemSpawnData
{
public:
	TAssetPtr<class UClass>                            WatercraftClass;                                           // 0x0058(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VWFJ[0x4];                                     // 0x0058(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              MinDistanceToNearestWatercraftInMetres;                    // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W787[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.WatercraftSpawnData");
		return ptr;
	}



};

// Class Watercrafts.WatercraftTrackerComponent
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
class UWatercraftTrackerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_527F[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              CurrentWatercrafts;                                        // 0x00D0(0x0010) (Net, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Watercrafts.WatercraftTrackerComponent");
		return ptr;
	}



	void OnWatercraftDestroyed(class AActor* WatercraftActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
