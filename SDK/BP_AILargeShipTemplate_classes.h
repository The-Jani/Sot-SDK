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

// BlueprintGeneratedClass BP_AILargeShipTemplate.BP_AILargeShipTemplate_C
// 0x0154 (FullSize[0x1554] - InheritedSize[0x1400])
class ABP_AILargeShipTemplate_C : public AShip
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAIShipItemSpawnComponent*                   StorageCrateRewards;                                       // 0x1408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   GemRewards;                                                // 0x1410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   ChanceRewards_Campaign020;                                 // 0x1418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   HoldRewards_Campaign020;                                   // 0x1420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   ExplosiveBarrelSpawner;                                    // 0x1428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   HoldRewardsEmergent;                                       // 0x1430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UWwiseEmitterComponent*                      audio_skeletonship_emerge_submerge;                        // 0x1438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   ChestRewards;                                              // 0x1440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   HoldRewardsSkull;                                          // 0x1448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   HoldRewardsChest;                                          // 0x1450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   MessageInABottleSpawner;                                   // 0x1458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   SkullRewards;                                              // 0x1460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipItemSpawnComponent*                   MerchantRewards;                                           // 0x1468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIShipTelemetryComponent*                   AIShipTelemetry;                                           // 0x1470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        Wheel;                                                     // 0x1478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        ShipStorageBarrel_Wood;                                    // 0x1480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAIRegionComponent*                          AIRegion;                                                  // 0x1488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        BP_Bell;                                                   // 0x1490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UShipPointParticleComponent*                 VFX_Drips;                                                 // 0x1498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBoxComponent*                               RammingSpurZone;                                           // 0x14A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        shp_shark_hits_01_a;                                       // 0x14A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball3;                             // 0x14B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        ShipStorageBarrel_Food;                                    // 0x14B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball2;                             // 0x14C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball1;                             // 0x14C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        CannonRight4;                                              // 0x14D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        CannonRight3;                                              // 0x14D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        CannonRight2;                                              // 0x14E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        CannonRight1;                                              // 0x14E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        CannonLeft4;                                               // 0x14F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        CannonLeft3;                                               // 0x14F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        CannonLeft2;                                               // 0x1500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        CannonLeft1;                                               // 0x1508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        LadderStbd;                                                // 0x1510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        LadderPort;                                                // 0x1518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        Hull;                                                      // 0x1520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        AudioBoat;                                                 // 0x1528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	bool                                               IsAnchorLowered;                                           // 0x1530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BYT5[0x7];                                     // 0x1531(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_shp_skeleton_01_a_C*                     ShipSkeleton;                                              // 0x1538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<Athena_ECurseTag>                      NewVar_1;                                                  // 0x1540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WRDK[0x3];                                     // 0x1541(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIShipSailData                             SailData;                                                  // 0x1544(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AILargeShipTemplate.BP_AILargeShipTemplate_C");
		return ptr;
	}



	void SetShipSkeleton();
	void OnRep_SailData();
	void OnRep_NewVar_2();
	void UserConstructionScript();
	void OnShipSurface_Client();
	void OnShipSurface();
	void OnShipDive_Client();
	void OnShipDive();
	void ReceiveBeginPlay();
	void SetCursedCrewCustomisationProperties(const struct FAIShipSailData& SailData);
	void ExecuteUbergraph_BP_AILargeShipTemplate(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
