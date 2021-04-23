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

// BlueprintGeneratedClass BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C
// 0x0028 (FullSize[0x0638] - InheritedSize[0x0610])
class ABP_SmallShipLadderMainMast_C : public ALadder
{
public:
	class UInteractableComponent*                      Interactable;                                              // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	TArray<struct FVector>                             OnTopSplinePositions;                                      // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             OffTopSplinePositions;                                     // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C");
		return ptr;
	}



	struct FDockableInfo GetDockableInfo();
	void Setup_Spline(class USplineComponent* Spline, TArray<struct FVector>* Positions);
	bool CanInteract(class AActor* InInteractor);
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
