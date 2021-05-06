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

// BlueprintGeneratedClass BP_AggressiveGhostShipPoolResource.BP_AggressiveGhostShipPoolResource_C
// 0x0008 (FullSize[0x04A0] - InheritedSize[0x0498])
class ABP_AggressiveGhostShipPoolResource_C : public AAggressiveGhostShipPoolResource
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AggressiveGhostShipPoolResource.BP_AggressiveGhostShipPoolResource_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
