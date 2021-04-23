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

// BlueprintGeneratedClass BP_Figurehead.BP_Figurehead_C
// 0x0010 (FullSize[0x0440] - InheritedSize[0x0430])
class ABP_Figurehead_C : public AGenericPart
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Figurehead;                                                // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Figurehead.BP_Figurehead_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnPartMeshLoaded(class UStaticMesh* Mesh);
	void OnPartDescLoaded(class UGenericPartDescAsset* Desc);
	void ExecuteUbergraph_BP_Figurehead(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
