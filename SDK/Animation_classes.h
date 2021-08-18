#pragma once

// Name: S, Version: 2.2.1


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

// Class Animation.CharacterAnimationInstance
// 0x0220 (FullSize[0x0660] - InheritedSize[0x0440])
class UCharacterAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_AFC4[0x10];                                    // 0x0440(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCharacterAnimationIKUpdateParams           IKLeftHandUpdateParams;                                    // 0x0450(0x0040) (BlueprintVisible, BlueprintReadOnly, Protected)
	struct FCharacterAnimationIKUpdateParams           IKRightHandUpdateParams;                                   // 0x0490(0x0040) (BlueprintVisible, BlueprintReadOnly, Protected)
	struct FName                                       RightHandIKSocketName;                                     // 0x04D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FName                                       LeftHandIKSocketName;                                      // 0x04D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FLimbIK                                     RightHandIK;                                               // 0x04E0(0x0060) (Protected)
	struct FLimbIK                                     LeftHandIK;                                                // 0x0540(0x0060) (Protected)
	struct FLimbIK                                     RightFootIK;                                               // 0x05A0(0x0060) (Protected)
	struct FLimbIK                                     LeftFootIK;                                                // 0x0600(0x0060) (Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.CharacterAnimationInstance");
		return ptr;
	}



};

// Class Animation.AnimationData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimationData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimationData");
		return ptr;
	}



};

// Class Animation.AnimationServerData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimationServerData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimationServerData");
		return ptr;
	}



};

// Class Animation.AIAnimationInstanceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIAnimationInstanceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AIAnimationInstanceInterface");
		return ptr;
	}



};

// Class Animation.AnimationDataConsumerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimationDataConsumerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimationDataConsumerInterface");
		return ptr;
	}



};

// Class Animation.AnimationDataFunctionLib
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimationDataFunctionLib : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimationDataFunctionLib");
		return ptr;
	}



	bool STATIC_UnwrapAnimDataEntryStruct(const struct FAnimDataEntryStructWrapper& Wrapper, class UScriptStruct* DestinationStruct, struct FGenericStruct* Value);
	class UAnimationData* STATIC_MakeAnimationData(class UClass* Class);
	struct FAnimDataEntryStructWrapper STATIC_GetAnimDataEntryStructAsStructWrapper(class UAnimationData* AnimationDataObject, class UScriptStruct* TheClass);
	void STATIC_CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs(class UClass* InClass);
};

// Class Animation.AnimationDataOverriderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimationDataOverriderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimationDataOverriderInterface");
		return ptr;
	}



};

// Class Animation.AnimationDataStoreId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimationDataStoreId : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimationDataStoreId");
		return ptr;
	}



};

// Class Animation.AnimationDataStoreOverrideId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimationDataStoreOverrideId : public UAnimationDataStoreId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimationDataStoreOverrideId");
		return ptr;
	}



};

// Class Animation.AnimationDataStore
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UAnimationDataStore : public UObject
{
public:
	unsigned char                                      UnknownData_5TBH[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAnimationDataStoreEntry>            Data;                                                      // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FAnimationDataStoreLoadingEntry>     LoadingData;                                               // 0x0050(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimationDataStore");
		return ptr;
	}



};

// Class Animation.AnimationDataStoreAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAnimationDataStoreAsset : public UDataAsset
{
public:
	TArray<struct FAnimationDataStoreAssetEntry>       AssetRefs;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimationDataStoreAsset");
		return ptr;
	}



	class UAnimationData* LookupAnimationData(class UClass* AnimDataId);
	class UClass* STATIC_GetAnimationDataClass(struct FAnimationDataStoreAssetEntry* Entry);
};

// Class Animation.AnimationDataStoreWeakReferenceAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAnimationDataStoreWeakReferenceAsset : public UDataAsset
{
public:
	TArray<struct FAnimationDataStoreAssetWeakReferenceEntry> AssetWeakRefs;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimationDataStoreWeakReferenceAsset");
		return ptr;
	}



};

// Class Animation.AnimationDataStoreLoaderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimationDataStoreLoaderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimationDataStoreLoaderInterface");
		return ptr;
	}



};

// Class Animation.AnimationDataStoreComponent
// 0x00C8 (FullSize[0x0190] - InheritedSize[0x00C8])
class UAnimationDataStoreComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_1OA1[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimationDataStoreWeakReferenceAsset*       AnimationDataStoreWeakReferences;                          // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y3ZC[0xB8];                                    // 0x00D8(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimationDataStoreComponent");
		return ptr;
	}



};

// Class Animation.AnimationDataStoreInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimationDataStoreInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimationDataStoreInterface");
		return ptr;
	}



	class UAnimationData* GetAnimationDataForId(class UClass* AnimDataId);
};

// Class Animation.AnimationEditorSettings
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UAnimationEditorSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       CustomAnimationMontageIdListings;                          // 0x0038(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimationEditorSettings");
		return ptr;
	}



};

// Class Animation.AnimationLookAtInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimationLookAtInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimationLookAtInterface");
		return ptr;
	}



};

// Class Animation.AnimationStateId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimationStateId : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimationStateId");
		return ptr;
	}



};

// Class Animation.AnimNotify_DestroyAllCosmeticItems
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAnimNotify_DestroyAllCosmeticItems : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimNotify_DestroyAllCosmeticItems");
		return ptr;
	}



};

// Class Animation.AnimNotify_DestroyCosmeticItem
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UAnimNotify_DestroyCosmeticItem : public UAnimNotify
{
public:
	TEnumAsByte<Athena_EWieldAnimationLocation>        DestroyLocation;                                           // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HOSR[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimNotify_DestroyCosmeticItem");
		return ptr;
	}



};

// Class Animation.AnimNotify_PlayAnimationForCosmetic
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UAnimNotify_PlayAnimationForCosmetic : public UAnimNotify
{
public:
	TEnumAsByte<Athena_EWieldAnimationLocation>        CosmeticLocation;                                          // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XYFX[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequenceBase*                           CosmeticItemAnimation;                                     // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Looping;                                                   // 0x0048(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QEKN[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimNotify_PlayAnimationForCosmetic");
		return ptr;
	}



};

// Class Animation.AnimNotify_PlayMontage
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UAnimNotify_PlayMontage : public UAnimNotify
{
public:
	class UAnimMontage*                                MontageToPlay;                                             // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimNotify_PlayMontage");
		return ptr;
	}



};

// Class Animation.AnimNotify_SetCosmeticItemVisibility
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UAnimNotify_SetCosmeticItemVisibility : public UAnimNotify
{
public:
	TEnumAsByte<Athena_EWieldAnimationLocation>        ItemLocation;                                              // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Visible;                                                   // 0x0039(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RenderShadow;                                              // 0x003A(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RenderShadowWhenHidden;                                    // 0x003B(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UpdateForRole;                                             // 0x003C(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ENetRole>                       UpdateRole;                                                // 0x003D(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OK3G[0x2];                                     // 0x003E(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimNotify_SetCosmeticItemVisibility");
		return ptr;
	}



};

// Class Animation.AnimNotify_SetLookAtEnabled
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UAnimNotify_SetLookAtEnabled : public UAnimNotify
{
public:
	bool                                               Enabled;                                                   // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FVFV[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimNotify_SetLookAtEnabled");
		return ptr;
	}



};

// Class Animation.AnimNotify_SpawnCosmeticItem
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UAnimNotify_SpawnCosmeticItem : public UAnimNotify
{
public:
	class UClass*                                      ItemSpawnClass;                                            // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Athena_EWieldAnimationLocation>        SpawnLocation;                                             // 0x0040(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LWVF[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCosmeticItemAnimationSetDataAsset*          CosmeticItemAnimationDataSet;                              // 0x0048(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SpawnHidden;                                               // 0x0050(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SpawnForRole;                                              // 0x0051(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ENetRole>                       SpawnRole;                                                 // 0x0052(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XODZ[0x5];                                     // 0x0053(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimNotify_SpawnCosmeticItem");
		return ptr;
	}



};

// Class Animation.AnimNotify_StateComplete
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UAnimNotify_StateComplete : public UAnimNotify
{
public:
	class UClass*                                      CompletedStateId;                                          // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimNotify_StateComplete");
		return ptr;
	}



};

// Class Animation.AnimNotify_SwitchCosmeticItemAttachment
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UAnimNotify_SwitchCosmeticItemAttachment : public UAnimNotify
{
public:
	TEnumAsByte<Athena_EWieldAnimationLocation>        PreviousLocation;                                          // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EWieldAnimationLocation>        NewLocation;                                               // 0x0039(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NXYG[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimNotify_SwitchCosmeticItemAttachment");
		return ptr;
	}



};

// Class Animation.AnimNotify_ToggleIK
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UAnimNotify_ToggleIK : public UAnimNotify
{
public:
	TArray<TEnumAsByte<Animation_ECharacterIKLimb>>    IKLimbsToAdjust;                                           // 0x0038(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	bool                                               Enabled;                                                   // 0x0048(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1XRV[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimNotify_ToggleIK");
		return ptr;
	}



};

// Class Animation.AnimNotifyCondition_FeatureConfigValidation
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAnimNotifyCondition_FeatureConfigValidation : public UAnimNotifyCondition
{
public:
	struct FName                                       Feature;                                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TriggerWhenDisabled;                                       // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J6FA[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimNotifyCondition_FeatureConfigValidation");
		return ptr;
	}



};

// Class Animation.AnimNotifyState_PropagateCurveValuesToMaterials
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UAnimNotifyState_PropagateCurveValuesToMaterials : public UAnimNotifyState
{
public:
	TArray<struct FCurveUpdateValues>                  CurveValues;                                               // 0x0028(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	bool                                               DoNotPropagteCurveValues;                                  // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A10J[0x17];                                    // 0x0039(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimNotifyState_PropagateCurveValuesToMaterials");
		return ptr;
	}



};

// Class Animation.AnimNotifyState_SetLookAtDisabledForDuration
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimNotifyState_SetLookAtDisabledForDuration : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimNotifyState_SetLookAtDisabledForDuration");
		return ptr;
	}



};

// Class Animation.AnimNotifyState_SetLookAtEnabledForDuration
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimNotifyState_SetLookAtEnabledForDuration : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimNotifyState_SetLookAtEnabledForDuration");
		return ptr;
	}



};

// Class Animation.AnimNotifyState_SetMeshInvisibleForDuration
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimNotifyState_SetMeshInvisibleForDuration : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimNotifyState_SetMeshInvisibleForDuration");
		return ptr;
	}



};

// Class Animation.AnimNotifyState_SpawnCosmeticItem
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UAnimNotifyState_SpawnCosmeticItem : public UAnimNotifyState
{
public:
	class UClass*                                      CosmeticItemToSpawn;                                       // 0x0028(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Athena_EWieldAnimationLocation>        SpawnLocation;                                             // 0x0030(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WH8J[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCosmeticItemAnimationSetDataAsset*          CosmeticItemAnimationDataSet;                              // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SpawnHidden;                                               // 0x0040(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DestroyOnEnd;                                              // 0x0041(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideDestroyLocation;                                   // 0x0042(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Athena_EWieldAnimationLocation>        DestroyLocation;                                           // 0x0043(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ID3A[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AnimNotifyState_SpawnCosmeticItem");
		return ptr;
	}



};

// Class Animation.AthenaAnimationControllableSocketsInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaAnimationControllableSocketsInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.AthenaAnimationControllableSocketsInterface");
		return ptr;
	}



};

// Class Animation.CharacterIKInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCharacterIKInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.CharacterIKInterface");
		return ptr;
	}



};

// Class Animation.PreviewCharacterAnimationInstance
// 0x0080 (FullSize[0x06E0] - InheritedSize[0x0660])
class UPreviewCharacterAnimationInstance : public UCharacterAnimationInstance
{
public:
	class UAnimMontage*                                ActiveMontage;                                             // 0x0660(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7H80[0x78];                                    // 0x0668(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.PreviewCharacterAnimationInstance");
		return ptr;
	}



};

// Class Animation.ClientSkeletalMeshComponent
// 0x0000 (FullSize[0x0990] - InheritedSize[0x0990])
class UClientSkeletalMeshComponent : public USkeletalMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.ClientSkeletalMeshComponent");
		return ptr;
	}



};

// Class Animation.CosmeticItemActor
// 0x00B0 (FullSize[0x0480] - InheritedSize[0x03D0])
class ACosmeticItemActor : public AActor
{
public:
	unsigned char                                      UnknownData_PRUQ[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMeshComponent*                      MeshComponent;                                             // 0x03D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KGK1[0xA0];                                    // 0x03E0(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.CosmeticItemActor");
		return ptr;
	}



};

// Class Animation.CosmeticItemAnimationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCosmeticItemAnimationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.CosmeticItemAnimationInterface");
		return ptr;
	}



};

// Class Animation.CosmeticItemAnimationComponent
// 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
class UCosmeticItemAnimationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_NU2M[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class USkeletalMeshComponent*, struct FCosmeticItems> CosmeticItems;                                             // 0x00D0(0x0050) (ZeroConstructor)
	class UCosmeticItemAnimationDataAsset*             DataAsset;                                                 // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.CosmeticItemAnimationComponent");
		return ptr;
	}



	bool SpawnCosmeticItem(class USkeletalMeshComponent* MeshComponent, class UClass* ObjectToSpawn, TEnumAsByte<Athena_EWieldAnimationLocation> SpawnLocation, class UCosmeticItemAnimationSetDataAsset* CosmeticData, bool SpawnHidden);
	void DestroyAllCosmeticItems();
};

// Class Animation.CosmeticItemAnimationDataAsset
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UCosmeticItemAnimationDataAsset : public UDataAsset
{
public:
	struct FName                                       WieldSockets[0x7];                                         // 0x0028(0x0038) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.CosmeticItemAnimationDataAsset");
		return ptr;
	}



};

// Class Animation.CosmeticItemAnimationDataConsumerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCosmeticItemAnimationDataConsumerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.CosmeticItemAnimationDataConsumerInterface");
		return ptr;
	}



};

// Class Animation.CosmeticItemAnimationInstance
// 0x00B0 (FullSize[0x04F0] - InheritedSize[0x0440])
class UCosmeticItemAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_K8BU[0x8];                                     // 0x0440(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCosmeticItemAnimationSetDataAsset*          AnimationDataSet;                                          // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                ActiveMontage;                                             // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_97QH[0x98];                                    // 0x0458(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.CosmeticItemAnimationInstance");
		return ptr;
	}



};

// Class Animation.CosmeticItemAnimationSetDataAsset
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UCosmeticItemAnimationSetDataAsset : public UDataAsset
{
public:
	struct FCosmeticItemAnimationSetLoopData           LoopData;                                                  // 0x0028(0x0020) (Edit, DisableEditOnInstance)
	TArray<class UAnimSequenceBase*>                   OneShotSequences;                                          // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.CosmeticItemAnimationSetDataAsset");
		return ptr;
	}



};

// Class Animation.CustomAnimationHandlerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCustomAnimationHandlerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.CustomAnimationHandlerInterface");
		return ptr;
	}



};

// Class Animation.CustomAnimationInstanceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCustomAnimationInstanceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.CustomAnimationInstanceInterface");
		return ptr;
	}



};

// Class Animation.CustomAnimationInstanceProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCustomAnimationInstanceProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.CustomAnimationInstanceProviderInterface");
		return ptr;
	}



};

// Class Animation.CustomAnimationMontageInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCustomAnimationMontageInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.CustomAnimationMontageInterface");
		return ptr;
	}



};

// Class Animation.CustomAnimationMontageComponent
// 0x0070 (FullSize[0x0138] - InheritedSize[0x00C8])
class UCustomAnimationMontageComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_FOL1[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomAnimationMontageComponentReplicatedData ReplicatedData;                                            // 0x00D0(0x000C) (Net, RepNotify)
	unsigned char                                      UnknownData_LVY7[0x5C];                                    // 0x00DC(0x005C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.CustomAnimationMontageComponent");
		return ptr;
	}



	void OnRep_ReplicatedData(const struct FCustomAnimationMontageComponentReplicatedData& PriorData);
};

// Class Animation.CustomAnimationMontageDefinitionDataAsset
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UCustomAnimationMontageDefinitionDataAsset : public UDataAsset
{
public:
	struct FName                                       MontageId;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Animation_ECustomAnimationMontageType> MontageType;                                               // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZZE2[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                MontageData;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCustomAnimationMontageStagedLoopingData    LoopingData;                                               // 0x0040(0x0028) (Edit, DisableEditOnInstance)
	bool                                               Interrupts;                                                // 0x0068(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2PK3[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.CustomAnimationMontageDefinitionDataAsset");
		return ptr;
	}



};

// Class Animation.CustomAnimationMontageDefinitionListingDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UCustomAnimationMontageDefinitionListingDataAsset : public UDataAsset
{
public:
	TArray<struct FCustomAnimationMontageDefinitionEntry> Entries;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.CustomAnimationMontageDefinitionListingDataAsset");
		return ptr;
	}



};

// Class Animation.CustomAnimationMontageIdListingDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UCustomAnimationMontageIdListingDataAsset : public UDataAsset
{
public:
	TArray<struct FName>                               MontageIds;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.CustomAnimationMontageIdListingDataAsset");
		return ptr;
	}



};

// Class Animation.DockableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDockableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.DockableInterface");
		return ptr;
	}



	void HandleDestroy();
	struct FDockableInfo GetDockableInfo();
};

// Class Animation.DockerBlueprintFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDockerBlueprintFunctions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.DockerBlueprintFunctions");
		return ptr;
	}



	void STATIC_UpdateDock(struct FDocker* Docker, float DeltaTime);
	void STATIC_StartDockingWithActor(struct FDocker* Docker, class AActor* Owner, class AActor* Target, float DockDuration, float DelayAfterDocking);
	bool STATIC_IsFullyDocked(struct FDocker* Docker);
	bool STATIC_IsDocking(struct FDocker* Docker);
	struct FVector STATIC_GetTargetLocalOffset(const struct FDocker& Docker);
	void STATIC_EndDock(struct FDocker* Docker);
};

// Class Animation.DockerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDockerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.DockerInterface");
		return ptr;
	}



};

// Class Animation.DockingAnimationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDockingAnimationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.DockingAnimationInterface");
		return ptr;
	}



};

// Class Animation.IndexedPlayableMontagesInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UIndexedPlayableMontagesInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.IndexedPlayableMontagesInterface");
		return ptr;
	}



};

// Class Animation.LimbIKFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULimbIKFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.LimbIKFunctionLibrary");
		return ptr;
	}



	void STATIC_SetTranslationStrength(struct FLimbIK* LimbIK, float InRotationStrength);
	void STATIC_SetTransform(struct FLimbIK* LimbIK, const struct FTransform& InTransform);
	void STATIC_SetRotationStrength(struct FLimbIK* LimbIK, float InRotationStrength);
	void STATIC_SetParentBone(struct FLimbIK* LimbIK, const struct FName& Bone);
	void STATIC_SetIKSpace(struct FLimbIK* LimbIK, TEnumAsByte<Animation_ELimbIKSpace> IKSpace);
	void STATIC_SetEnabled(struct FLimbIK* LimbIK, bool Enabled, TEnumAsByte<Animation_ELimbIKSpace> IKSpace, const struct FName& ParentBone);
	void STATIC_SetBlendOutSpeed(struct FLimbIK* LimbIK, float BlendOutSpeed);
	void STATIC_SetBlendInSpeed(struct FLimbIK* LimbIK, float BlendInSpeed);
	void STATIC_SetAnimationOverride(struct FLimbIK* LimbIK, bool AnimationOverride);
	void STATIC_SetAlphaTarget(struct FLimbIK* LimbIK, float AlphaTarget);
	bool STATIC_IsEnabled(struct FLimbIK* LimbIK);
	float STATIC_GetTranslationStrength(struct FLimbIK* LimbIK);
	struct FTransform STATIC_GetTransform(struct FLimbIK* LimbIK);
	float STATIC_GetRotationStrength(struct FLimbIK* LimbIK);
	struct FName STATIC_GetParentBone(struct FLimbIK* LimbIK);
	TEnumAsByte<Animation_ELimbIKSpace> STATIC_GetIKSpace(struct FLimbIK* LimbIK);
	float STATIC_GetCurrentAlpha(struct FLimbIK* LimbIK);
	bool STATIC_GetAnimationOverride(struct FLimbIK* LimbIK);
	float STATIC_GetAlphaTarget(struct FLimbIK* LimbIK);
	float STATIC_ConvertBoolToAlpha(bool InBool);
};

// Class Animation.LoadableAnimationsInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULoadableAnimationsInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.LoadableAnimationsInterface");
		return ptr;
	}



};

// Class Animation.LocomotionFunctionLib
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULocomotionFunctionLib : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.LocomotionFunctionLib");
		return ptr;
	}



	float STATIC_UpdateControllerSpineRotation(const struct FRotator& CharacterRotation, float AngleSpeedMax, float AngleSpeedMin);
	struct FActorVelocityData STATIC_UpdateCharacterSpeed(const struct FVector& Velocity, float CurrentMaxWalkSpeed, float WantedMovementSpeed, float BaseMaxWalkSpeed, float SpeedBlendValue, bool IsSwimming, float DeadZone);
	float STATIC_UpdateCalculateRateAndCurrentYaw(const struct FRotator& CharacterRotation, float LargeRate, float* CurrentCharacterYaw, float DeltaSeconds);
};

// Class Animation.NetworkSyncedAnimationInstanceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNetworkSyncedAnimationInstanceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.NetworkSyncedAnimationInstanceInterface");
		return ptr;
	}



};

// Class Animation.NetworkSyncedAnimationComponent
// 0x0048 (FullSize[0x0110] - InheritedSize[0x00C8])
class UNetworkSyncedAnimationComponent : public UActorComponent
{
public:
	float                                              PlayRateAdjustMaxTimeDelta;                                // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRateAdjustMaxPercentageToSpeedUpPlayRate;              // 0x00CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRateAdjustMaxPercentageToSlowDownPlayRate;             // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReplicatedAnimationProgression;                            // 0x00D4(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int                                                ReplicatedPlayingAnimationIndex;                           // 0x00D8(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                              ReplicatedPlayRate;                                        // 0x00DC(0x0004) (Edit, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TNAX[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimInstance*                               AnimInstance;                                              // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BBMS[0x20];                                    // 0x00F0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.NetworkSyncedAnimationComponent");
		return ptr;
	}



	void OnRep_PlayingAnimationIndex();
	void OnRep_AnimationProgression();
};

// Class Animation.RemoteAnimPlayableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URemoteAnimPlayableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.RemoteAnimPlayableInterface");
		return ptr;
	}



};

// Class Animation.ServerAnimationDataStoreInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UServerAnimationDataStoreInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.ServerAnimationDataStoreInterface");
		return ptr;
	}



};

// Class Animation.SyncGroupAnimMetaData
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class USyncGroupAnimMetaData : public UAnimMetaData
{
public:
	struct FName                                       SyncGroup;                                                 // 0x0028(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.SyncGroupAnimMetaData");
		return ptr;
	}



};

// Class Animation.TransformBlendCurveComponent
// 0x0508 (FullSize[0x05D0] - InheritedSize[0x00C8])
class UTransformBlendCurveComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_9PRN[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransformBlendCurve                        Curve;                                                     // 0x00D0(0x0500) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.TransformBlendCurveComponent");
		return ptr;
	}



};

// Class Animation.TurningFunctionLib
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTurningFunctionLib : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.TurningFunctionLib");
		return ptr;
	}



	bool STATIC_TurningUpdate(float DeltaSeconds, bool CharacterMoving, bool* DeadZone, float TurnRate, float* DelayedCounter, float CounterMax, bool* TurningLeft);
};

// Class Animation.WaitForAnimationStateEntryProxy
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UWaitForAnimationStateEntryProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnReachedState;                                            // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_WPJ1[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.WaitForAnimationStateEntryProxy");
		return ptr;
	}



	void OnEnteredState(const struct FName& path);
	void OnAnimationUpdated();
	class UWaitForAnimationStateEntryProxy* STATIC_CreateProxy(class UAnimInstance* AnimInstance, const struct FName& TargetPath);
};

// Class Animation.WaitForAnimationStateExitProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UWaitForAnimationStateExitProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnStateExit;                                               // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_XZMF[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.WaitForAnimationStateExitProxy");
		return ptr;
	}



	void OnExitState(const struct FName& path);
	void OnAnimationUpdated();
	class UWaitForAnimationStateExitProxy* STATIC_CreateProxy(class UAnimInstance* AnimInstance, const struct FName& TargetPath);
};

// Class Animation.WeightedAnimationLoadOnDemandDataAsset
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UWeightedAnimationLoadOnDemandDataAsset : public UDataAsset
{
public:
	TArray<struct FWeightedAnimationData>              WeightedAnimationList;                                     // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UAnimSequence*                               FallBackAnimation;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.WeightedAnimationLoadOnDemandDataAsset");
		return ptr;
	}



};

// Class Animation.WeightedAnimSequenceLoadOnDemand
// 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
class UWeightedAnimSequenceLoadOnDemand : public UObject
{
public:
	class UAnimSequence*                               FallBackAnimation;                                         // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FWeightedAnimationData>              WeightedAnimationList;                                     // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_M4WU[0xE0];                                    // 0x0040(0x00E0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Animation.WeightedAnimSequenceLoadOnDemand");
		return ptr;
	}



	void Initialise(class UWeightedAnimationLoadOnDemandDataAsset* InAnimationData);
	class UWeightedAnimSequenceLoadOnDemand* STATIC_CreateNewWeightedAnimSequenceLoadOnDemand();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
