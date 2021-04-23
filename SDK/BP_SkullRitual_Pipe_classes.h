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

// BlueprintGeneratedClass BP_SkullRitual_Pipe.BP_SkullRitual_Pipe_C
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class ABP_SkullRitual_Pipe_C : public AActor
{
public:
	class UStaticMeshComponent*                        gmp_sm_pipe_oos_01_a;                                      // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkullRitual_Pipe.BP_SkullRitual_Pipe_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
