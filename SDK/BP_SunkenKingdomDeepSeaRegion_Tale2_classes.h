#pragma once

// Name: S, Version: 2.2.1


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

// BlueprintGeneratedClass BP_SunkenKingdomDeepSeaRegion_Tale2.BP_SunkenKingdomDeepSeaRegion_Tale2_C
// 0x0008 (FullSize[0x0418] - InheritedSize[0x0410])
class ABP_SunkenKingdomDeepSeaRegion_Tale2_C : public ADeepSeaRegion
{
public:
	class UCapsuleComponent*                           Capsule;                                                   // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SunkenKingdomDeepSeaRegion_Tale2.BP_SunkenKingdomDeepSeaRegion_Tale2_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
