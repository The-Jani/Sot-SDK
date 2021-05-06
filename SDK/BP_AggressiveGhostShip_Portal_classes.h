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

// BlueprintGeneratedClass BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C
// 0x0040 (FullSize[0x0518] - InheritedSize[0x04D8])
class ABP_AggressiveGhostShip_Portal_C : public AAggressiveGhostShipPortal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Portal_VFX;                                                // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UWwiseEmitterComponent*                      WwiseEmitter;                                              // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Portal;                                                    // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        shroud;                                                    // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             SharedRoot;                                                // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                          // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void StartOpening();
	void StartClosing();
	void End();
	void ExecuteUbergraph_BP_AggressiveGhostShip_Portal(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
