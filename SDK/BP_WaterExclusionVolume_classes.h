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

// BlueprintGeneratedClass BP_WaterExclusionVolume.BP_WaterExclusionVolume_C
// 0x0008 (FullSize[0x0440] - InheritedSize[0x0438])
class ABP_WaterExclusionVolume_C : public AStaticMeshActor
{
public:
	class UWaterPlaneExclusionComponent*               WaterPlaneExclusion;                                       // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WaterExclusionVolume.BP_WaterExclusionVolume_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
