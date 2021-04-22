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

// BlueprintGeneratedClass sot_frontend_01_a_animation.sot_frontend_01_a_animation_C
// 0x0058 (FullSize[0x0488] - InheritedSize[0x0430])
class Asot_frontend_01_a_animation_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AStaticMeshActor*                            shipSelectUI_title_14_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty; // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class AStaticMeshActor*                            shipSelectUI_gallion_10_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty; // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class AStaticMeshActor*                            shipSelectUI_sloop_12_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty; // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASkeletalMeshActor*                          shipSelect_CharMarker2_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty; // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_PirateGenerator_LineUp_C*                BP_PirateGenerator_LineUp_C_4_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty; // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class AMatineeActor*                               MatineeActor_ShipSelect_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty; // 0x0460(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class AMatineeActor*                               MatineeActor_ShipSelect_UniqueObjectNameForCooking_1530807069_RefProperty; // 0x0468(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class ACameraActor*                                ShipSelectScreenCam_UniqueObjectNameForCooking_1530807069_RefProperty; // 0x0470(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class AMatineeActor*                               MatineeActor_ShipSelect_UniqueObjectNameForCooking_1530807072_RefProperty; // 0x0478(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_PirateGenerator_LineUp_C*                BP_PirateGenerator_LineUp_C_4_UniqueObjectNameForCooking_1530807072_RefProperty; // 0x0480(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass sot_frontend_01_a_animation.sot_frontend_01_a_animation_C");
		return ptr;
	}



	void OnReturnToPirateSelection();
	void GetPirateSelector(class UPirateSelector** PirateSelectorComponent);
	void GetFrontendCameraComponent(class UFrontendCameraComponent** Frontend_Camera_Component);
	void goToShipSelCam();
	void ReceiveBeginPlay();
	void ShipSelect();
	void GenerateShipSelectionPirate();
	void HideShipSelectionPirate();
	void ExecuteUbergraph_sot_frontend_01_a_animation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
