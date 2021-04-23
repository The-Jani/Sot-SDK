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

// BlueprintGeneratedClass BP_ClothingChestInteraction.BP_ClothingChestInteraction_C
// 0x0008 (FullSize[0x06E8] - InheritedSize[0x06E0])
class ABP_ClothingChestInteraction_C : public AClothingChestInteraction
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ClothingChestInteraction.BP_ClothingChestInteraction_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
