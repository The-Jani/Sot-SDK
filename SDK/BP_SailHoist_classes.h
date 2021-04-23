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

// BlueprintGeneratedClass BP_SailHoist.BP_SailHoist_C
// 0x0008 (FullSize[0x0848] - InheritedSize[0x0840])
class ABP_SailHoist_C : public ASailHoist
{
public:
	class UInteractableComponent*                      Interactable;                                              // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SailHoist.BP_SailHoist_C");
		return ptr;
	}



	struct FDockableInfo GetDockableInfo();
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
