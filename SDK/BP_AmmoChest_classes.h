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

// BlueprintGeneratedClass BP_AmmoChest.BP_AmmoChest_C
// 0x0040 (FullSize[0x0500] - InheritedSize[0x04C0])
class ABP_AmmoChest_C : public AAmmoChest
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Hits;                                                      // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UInteractableComponent*                      Interactable;                                              // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FWwiseEmitter                               Emitter;                                                   // 0x04D8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                           // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmmoChest.BP_AmmoChest_C");
		return ptr;
	}



	struct FText GetObjectDisplayName();
	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Blueprint_OnInteract_Client(class AActor* InInteractor);
	void Blueprint_OnInteract_Server(class AActor* InInteractor);
	void ExecuteUbergraph_BP_AmmoChest(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
