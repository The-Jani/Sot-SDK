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

// BlueprintGeneratedClass BP_Placement_HeightDrop.BP_Placement_HeightDrop_C
// 0x0040 (FullSize[0x0468] - InheritedSize[0x0428])
class ABP_Placement_HeightDrop_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	bool                                               Drop_Components_to_Floor;                                  // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MSM3[0x3];                                     // 0x0431(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Vertical_Displacement;                                     // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Match_Surface_Orientation;                                 // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MXAR[0x3];                                     // 0x0439(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Maximum_Deviation_Angle;                                   // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class USceneComponent*>                     ComponentsToDrop;                                          // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Check_For_Movable_Components;                              // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CreateParentBoundsVolume;                                  // 0x0451(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z7KZ[0x2];                                     // 0x0452(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ParentBoundsPadding;                                       // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UPhysicalMaterial*>                   Physical_Materials_To_Ignore;                              // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Placement_HeightDrop.BP_Placement_HeightDrop_C");
		return ptr;
	}



	void CreateComponentList();
	void CreateParentBounds();
	void CheckMobilityState();
	void Get_Valid_Collision(TArray<struct FHitResult>* Hit_Results, bool Hit_Success, class USceneComponent* Current_Component, bool* Return_Value, struct FVector* Impact_Position, struct FVector* Impact_Normal);
	void Drop_Components();
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
