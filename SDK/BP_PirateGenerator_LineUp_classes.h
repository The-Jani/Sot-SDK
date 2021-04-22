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

// BlueprintGeneratedClass BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C
// 0x0191 (FullSize[0x0669] - InheritedSize[0x04D8])
class ABP_PirateGenerator_LineUp_C : public APosablePirate
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           Capsule;                                                   // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    GhostParticlesOut;                                         // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    GhostParticlesIn;                                          // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                    // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      SkeletalProp;                                              // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        StaticPropSecondary;                                       // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      SkeletalPropSecondary;                                     // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        StaticProp;                                                // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FString                                     ForceShape;                                                // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_LineUp_Animation                        Animation;                                                 // 0x0530(0x00C8) (Edit, BlueprintVisible)
	class UBP_Anim_CharacterSelect_C*                  CharacterSelectAnimgraph;                                  // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ZoomTime;                                                  // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              GhostTransitionOutTime;                                    // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              GhostTransitionInTime;                                     // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               GhostTransitioning;                                        // 0x060C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GFKA[0x3];                                     // 0x060D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PoseIndex;                                                 // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R31T[0x4];                                     // 0x0614(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimationSwitchDataAsset*                   AnimationSwitch;                                           // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAnimationDataStoreAsset*                    AnimationAsset;                                            // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Initialized;                                               // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X2WV[0x7];                                     // 0x0629(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    LineUpPirateInitializedDispatcher;                         // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsHighlighted;                                             // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInShipSelect;                                            // 0x0641(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R01U[0x2];                                     // 0x0642(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ShipSelectVariantTimer;                                    // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ShipSelectVariantTimerMax;                                 // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                ShipSelectAnimCountMax;                                    // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                ShipSelectVariantAnimIndex;                                // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsPlayingShipSelectVariant;                                // 0x0654(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DXOZ[0x3];                                     // 0x0655(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               ShipSelectAnimToPlay;                                      // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAnimSequence*                               ShipSelectPropAnimToPlay;                                  // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShipSelectAnimStarted;                                     // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C");
		return ptr;
	}



	void GetPirateSelector(class UPirateSelector** PirateSelectorComponent);
	void Reset();
	void DelayBasedOnAngle();
	void FadeProps(float Duration);
	void ActivateGhostMaterial(class UMeshComponent* MeshComponent, bool FadeIn, float Duration);
	void ClearProps();
	void SetProp(const struct FBP_LineUp_Props& BP_LineUp_Props, bool Primary_);
	void UpdateAnimation();
	void RandomizePirate(int PoseIndex, const struct FPirateDescription& PirateDesc, TArray<class UClass*>* Outfit);
	void UserConstructionScript();
	void PlayMontage(class UAnimInstance* Character, class UAnimSequence* OutOf, class UAnimSequence* LoopAnim, class UAnimInstance* Prop, class UAnimSequence* OutOf2, class UAnimSequence* PropLoop);
	void Highlighted();
	void OutOfHighlight();
	void Selected();
	void OnEndGeneratingPirate();
	void OnBeginGeneratingPirate();
	void RandomizePirateEvent(const struct FPirateDescription& PirateDesc, TArray<class UClass*>* Outfit);
	void ShipSelect();
	void ReceiveTick(float DeltaSeconds);
	void OnSignalSpawnIn();
	void ExecuteUbergraph_BP_PirateGenerator_LineUp(int EntryPoint);
	void LineUpPirateInitializedDispatcher__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
