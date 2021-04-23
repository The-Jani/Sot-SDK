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

// BlueprintGeneratedClass BP_OnlineAthenaGameMode.BP_OnlineAthenaGameMode_C
// 0x0008 (FullSize[0x0BA8] - InheritedSize[0x0BA0])
class ABP_OnlineAthenaGameMode_C : public AOnlineAthenaGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0BA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OnlineAthenaGameMode.BP_OnlineAthenaGameMode_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
