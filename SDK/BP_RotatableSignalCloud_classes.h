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

// BlueprintGeneratedClass BP_RotatableSignalCloud.BP_RotatableSignalCloud_C
// 0x0010 (FullSize[0x0520] - InheritedSize[0x0510])
class ABP_RotatableSignalCloud_C : public AGameplayEventSignal_StaticMesh
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URotateMeshToLocalPlayerComponent*           RotateMeshToLocalPlayer;                                   // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RotatableSignalCloud.BP_RotatableSignalCloud_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_RotatableSignalCloud(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
