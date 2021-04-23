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

// BlueprintGeneratedClass BP_PortableAmmoCrate_ItemInfo.BP_PortableAmmoCrate_ItemInfo_C
// 0x0008 (FullSize[0x0790] - InheritedSize[0x0788])
class ABP_PortableAmmoCrate_ItemInfo_C : public ABootyItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PortableAmmoCrate_ItemInfo.BP_PortableAmmoCrate_ItemInfo_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
