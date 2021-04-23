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

// BlueprintGeneratedClass BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C
// 0x0018 (FullSize[0x0678] - InheritedSize[0x0660])
class ABP_LargeShip_StandardHull_InternalShipWater_C : public AShipInternalWater
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0660(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDynamicFlowComponent*                       DynamicFlow;                                               // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCurveFloat*                                 Foaminess;                                                 // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C");
		return ptr;
	}



	void GetLineIntersectionFromPlane(const struct FVector& LineStart, const struct FVector& LineEnd, bool* Intersect, struct FVector* IntersectionPoint);
	void GetWaterLevel(float* WaterLevel);
	void GetDistanceFromPlane(const struct FVector& Location, float* Distance);
	void UserConstructionScript();
	void AddWater(float Water_Amount);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LargeShip_StandardHull_InternalShipWater(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
