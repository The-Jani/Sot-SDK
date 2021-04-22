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

// BlueprintGeneratedClass Entry.Entry_C
// 0x0008 (FullSize[0x0438] - InheritedSize[0x0430])
class AEntry_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Entry.Entry_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Entry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
