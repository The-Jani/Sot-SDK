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

// BlueprintGeneratedClass BP_ArmoryChestInteraction.BP_ArmoryChestInteraction_C
// 0x0008 (FullSize[0x04F8] - InheritedSize[0x04F0])
class ABP_ArmoryChestInteraction_C : public AArmoryChestInteraction
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ArmoryChestInteraction.BP_ArmoryChestInteraction_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
