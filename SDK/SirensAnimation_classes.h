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

// Class SirensAnimation.SirenAnimationData
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class USirenAnimationData : public UAnimationData
{
public:
	struct FSirenAnimationDataStructure                SirenAnimationData;                                        // 0x0028(0x0048) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SirensAnimation.SirenAnimationData");
		return ptr;
	}



};

// Class SirensAnimation.SirenAnimationInstance
// 0x0260 (FullSize[0x06A0] - InheritedSize[0x0440])
class USirenAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_P3SR[0x10];                                    // 0x0440(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       PropAttachmentSocket;                                      // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSirenAnimationDataStructure                SirenAnimationData;                                        // 0x0458(0x0048) (BlueprintVisible, BlueprintReadOnly)
	struct FAthenaAnimationWeapon                      AttackAnimations;                                          // 0x04A0(0x00B8) (BlueprintVisible, BlueprintReadOnly)
	float                                              ForwardSpeed;                                              // 0x0558(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TiltDirectionAngleDegrees;                                 // 0x055C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TiltAngleAlpha;                                            // 0x0560(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpinAngleDegrees;                                          // 0x0564(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTiltAngleRepresentedByAdditiveBendAnimations;           // 0x0568(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UpperBodyOverlayActive;                                    // 0x056C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SwimmingLongways;                                          // 0x056D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JT4Z[0x6];                                     // 0x056E(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               AnimationsLoaded;                                          // 0x0574(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AP50[0x3];                                     // 0x0575(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomAnimationMontageStateMachine         FullBodyStateMachine;                                      // 0x0578(0x00D8)
	struct FHitReactionAnimationState                  HitReacts;                                                 // 0x0650(0x0028) (BlueprintVisible)
	unsigned char                                      UnknownData_BQ0W[0x28];                                    // 0x0678(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SirensAnimation.SirenAnimationInstance");
		return ptr;
	}



	void ClearActiveAttack();
	void BeginNewAttack();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
