#pragma once

// Name: SoT, Version: 2.1.0


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

// BlueprintGeneratedClass sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C
// 0x0010 (FullSize[0x0440] - InheritedSize[0x0430])
class Asot_frontend_01_a_lighting_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AMatineeActor*                               LightingController_UniqueObjectNameForCooking_441630218_RefProperty; // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C");
		return ptr;
	}



	void LightingTestEvent();
	void ExecuteUbergraph_sot_frontend_01_a_lighting(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
