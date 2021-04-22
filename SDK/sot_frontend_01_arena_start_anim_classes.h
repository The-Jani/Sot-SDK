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

// BlueprintGeneratedClass sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C
// 0x0018 (FullSize[0x0448] - InheritedSize[0x0430])
class Asot_frontend_01_arena_start_anim_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Audio_Play_Wwise_Event_Function_C*       Arena_Audio_Comp_ExecuteUbergraph_sot_frontend_01_arena_start_anim_RefProperty; // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class AMatineeActor*                               ArenaTutorial_Matinee_ExecuteUbergraph_sot_frontend_01_arena_start_anim_RefProperty; // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C");
		return ptr;
	}



	void LeaveArenaTutorialAnimation();
	void GetFrontendCameraComponent(class UFrontendCameraComponent** Camera_Component);
	void K2Node_MatineeController_35_Finished();
	void ReceiveBeginPlay();
	void StartArenaTutorial();
	void EndArenaTutorial();
	void SkipArenaTutorial();
	void ExecuteUbergraph_sot_frontend_01_arena_start_anim(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
