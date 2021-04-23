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

// BlueprintGeneratedClass BP_GeyserHole.BP_GeyserHole_C
// 0x0030 (FullSize[0x04C8] - InheritedSize[0x0498])
class ABP_GeyserHole_C : public AShovelHole
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        CrackMesh;                                                 // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UDecalComponent*                             CrackDecal;                                                // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             SharedRoot;                                                // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UMaterialInstanceDynamic*                    MeshDynamicMaterial;                                       // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    DecalDynamicMaterial;                                      // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GeyserHole.BP_GeyserHole_C");
		return ptr;
	}



	void SetFadeOutParameters(float FadeTime);
	void SetFadeInParameters(float FadeTime);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnStateChanged(TEnumAsByte<Athena_EHoleState> InState);
	void ExecuteUbergraph_BP_GeyserHole(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
