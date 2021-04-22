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

// BlueprintGeneratedClass sot_frontend_01_a_audio.sot_frontend_01_a_audio_C
// 0x0008 (FullSize[0x0438] - InheritedSize[0x0430])
class Asot_frontend_01_a_audio_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass sot_frontend_01_a_audio.sot_frontend_01_a_audio_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void SelectionConfirmed();
	void ExecuteUbergraph_sot_frontend_01_a_audio(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
