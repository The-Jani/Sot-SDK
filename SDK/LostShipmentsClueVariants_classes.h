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

// Class LostShipmentsClueVariants.AbandonedNoteClueDescriptor
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UAbandonedNoteClueDescriptor : public UClueDescriptor
{
public:
	class UClueDestinationDescriptor*                  DestinationDescriptor;                                     // 0x0028(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueDescriptor");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.AbandonedNoteClueDescriptorGenerator
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UAbandonedNoteClueDescriptorGenerator : public UClueDescriptorGenerator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueDescriptorGenerator");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.AbandonedNoteClueTextChoiceSource
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UAbandonedNoteClueTextChoiceSource : public UObject
{
public:
	unsigned char                                      UnknownData_8OQK[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClueDestinationDescriptor*, int16_t>   ExistingDestinations;                                      // 0x0040(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData_5R2D[0x50];                                    // 0x0090(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueTextChoiceSource");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.AbandonedNoteClueTextChoiceSourceConsumerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAbandonedNoteClueTextChoiceSourceConsumerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueTextChoiceSourceConsumerInterface");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.AbandonedNoteClueTextAsset
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAbandonedNoteClueTextAsset : public UDataAsset
{
public:
	TArray<struct FText>                               Descriptions;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      DestinationType;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueTextAsset");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAssetBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAbandonedNoteClueTextIndexAssetBase : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAssetBase");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAssetMap
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAbandonedNoteClueTextIndexAssetMap : public UDataAsset
{
public:
	TArray<struct FClueDestinationToTextIndex>         TextIndexMappings;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAssetMap");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.AbandonedNoteClueTextSourceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAbandonedNoteClueTextSourceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueTextSourceInterface");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.ClueTitleInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UClueTitleInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.ClueTitleInterface");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.ClueDestinationContainerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UClueDestinationContainerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.ClueDestinationContainerInterface");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent
// 0x0138 (FullSize[0x0200] - InheritedSize[0x00C8])
class UAbandonedNoteClueDestinationContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_P48B[0x20];                                    // 0x00C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FClueDestinationChoice                      CurrentClueDestination;                                    // 0x00E8(0x0010) (Net, Transient, RepNotify)
	class UAbandonedNoteClueTextIndexAssetMap*         ClueTextIndexAssetMap;                                     // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     CompositeFormatString;                                     // 0x0100(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FText                                       CurrentTitleText;                                          // 0x0110(0x0018) ELEMENT_SIZE_MISMATCH (Net, RepNotify)
	unsigned char                                      UnknownData_T7R0[0x20];                                    // 0x0110(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UAbandonedNoteClueTextChoiceSource*          ClueTextChoiceSource;                                      // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4153[0xB0];                                    // 0x0150(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent");
		return ptr;
	}



	void OnRep_CurrentTitleText();
	void OnRep_CurrentClueDestination();
};

// Class LostShipmentsClueVariants.NPCByNameClueDestinationDescriptor
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UNPCByNameClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	struct FGuid                                       NPCIdentifier;                                             // 0x0070(0x0010) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.NPCByNameClueDestinationDescriptor");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.AbandonedNoteClueGenderSpecificTextAsset
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAbandonedNoteClueGenderSpecificTextAsset : public UDataAsset
{
public:
	TArray<struct FGenderSpecificTextPairings>         Descriptions;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      DestinationType;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueGenderSpecificTextAsset");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.AbandonedNoteClueGenderSpecificTextIndexAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAbandonedNoteClueGenderSpecificTextIndexAsset : public UAbandonedNoteClueTextIndexAssetBase
{
public:
	TArray<class UAbandonedNoteClueGenderSpecificTextAsset*> ClueDestinationDescriptions;                               // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueGenderSpecificTextIndexAsset");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAbandonedNoteClueTextIndexAsset : public UAbandonedNoteClueTextIndexAssetBase
{
public:
	TArray<class UAbandonedNoteClueTextAsset*>         ClueDestinationDescriptions;                               // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAsset");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.AbandonedNoteWieldableRenderingComponent
// 0x00C0 (FullSize[0x0188] - InheritedSize[0x00C8])
class UAbandonedNoteWieldableRenderingComponent : public UActorComponent
{
public:
	int                                                CanvasWidth;                                               // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CanvasHeight;                                              // 0x00CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFont*                                       BodyTextFont;                                              // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFont*                                       TitleTextFont;                                             // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FontLineSpacing;                                           // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FontScale;                                                 // 0x00E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTreasureMapWidgetText                      BodyTextLayout;                                            // 0x00E8(0x0020) (Edit, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      TitleTextLayout;                                           // 0x0108(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FTextEntryWithLayout>                ExtraTextFields;                                           // 0x0128(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TScriptInterface<class UWieldableItemCanvasRenderingInterface> WieldableRenderingInterface;                               // 0x0138(0x0010) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper)
	unsigned char                                      UnknownData_4ZOT[0x40];                                    // 0x0148(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteWieldableRenderingComponent");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.AbandonedNoteWieldable
// 0x0040 (FullSize[0x0810] - InheritedSize[0x07D0])
class AAbandonedNoteWieldable : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData_I91U[0x10];                                    // 0x07D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWieldableItemCanvasRenderingComponent*      WieldableItemCanvasRenderingComponent;                     // 0x07E0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbandonedNoteWieldableRenderingComponent*   AbandonedNoteRenderingComponent;                           // 0x07E8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryItemComponent*                     InventoryItemComponent;                                    // 0x07F0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUsableWieldableComponent*                   UsableWieldableComponent;                                  // 0x07F8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EQuestMapIcon>                  QuestMapIcon;                                              // 0x0800(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KXBP[0xF];                                     // 0x0801(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.AbandonedNoteWieldable");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.BarrelsOfPlentyClueDestinationGenerator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UBarrelsOfPlentyClueDestinationGenerator : public UClueDestinationGenerator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.BarrelsOfPlentyClueDestinationGenerator");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.BarrelsOfPlentyClueSiteData
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UBarrelsOfPlentyClueSiteData : public UClueSiteData
{
public:
	struct FVector                                     SpawnLocation;                                             // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TGHQ[0x2C];                                    // 0x0044(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.BarrelsOfPlentyClueSiteData");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.BarrelsOfPlentyClueSiteType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBarrelsOfPlentyClueSiteType : public UClueSiteType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.BarrelsOfPlentyClueSiteType");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.BarrelsOfPlentySeaClueCreator
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UBarrelsOfPlentySeaClueCreator : public USeaClueCreator
{
public:
	int                                                LootItemSpawnXYDistanceFromClueIncrementMin;               // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMax;               // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.BarrelsOfPlentySeaClueCreator");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.CircleMapClueDescriptor
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UCircleMapClueDescriptor : public UClueDescriptor
{
public:
	class UClueDestinationDescriptor*                  DestinationDescriptor;                                     // 0x0028(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.CircleMapClueDescriptor");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.CircleMapClueDescriptorGenerator
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UCircleMapClueDescriptorGenerator : public UClueDescriptorGenerator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.CircleMapClueDescriptorGenerator");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.CircleMapClueRenderDataSourceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCircleMapClueRenderDataSourceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.CircleMapClueRenderDataSourceInterface");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.CircleMapClueDestinationContainerComponent
// 0x0098 (FullSize[0x0160] - InheritedSize[0x00C8])
class UCircleMapClueDestinationContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_PZ88[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      MapMarkId;                                                 // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              MapMarkArea;                                               // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MapMarkScaleMin;                                           // 0x00E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MapMarkScaleMax;                                           // 0x00E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MapMarkNoiseModifier;                                      // 0x00EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EBlendMode>                     MapMarkBlendMode;                                          // 0x00F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0CVP[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DebugCrossId;                                              // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               ShowCluePositionOnMap;                                     // 0x0100(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CKV1[0x7];                                     // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMapTextureRenderData>               ClueRenderData;                                            // 0x0108(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_WUKE[0x48];                                    // 0x0118(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.CircleMapClueDestinationContainerComponent");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.ClueSiteCircleMapWieldable
// 0x0040 (FullSize[0x08C0] - InheritedSize[0x0880])
class AClueSiteCircleMapWieldable : public ARenderToTextureMapBase
{
public:
	TAssetPtr<class UTexture2D>                        InventoryRadialBackgroundTexture;                          // 0x0880(0x001C) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_98QK[0x4];                                     // 0x0880(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FMapRadialIconData                          MapRadialIconData;                                         // 0x08A0(0x0018) (Net, RepNotify)
	unsigned char                                      UnknownData_BEVS[0x8];                                     // 0x08B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.ClueSiteCircleMapWieldable");
		return ptr;
	}



	void OnRep_MapRadialIconData();
};

// Class LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UClueVariantsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary");
		return ptr;
	}



	void STATIC_GiveClueDescriptorToItem(class AItemInfo* ItemInfo, class UClueDescriptor* Clue);
};

// Class LostShipmentsClueVariants.CompositeClueDestinationDescriptor
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UCompositeClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	class UClueDestinationDescriptor*                  PrimaryClueDestDescriptor;                                 // 0x0070(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UClueDestinationDescriptor*                  SecondaryClueDestDescriptor;                               // 0x0078(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.CompositeClueDestinationDescriptor");
		return ptr;
	}



	void OnRep_DestinationInfo();
};

// Class LostShipmentsClueVariants.EndOfGooseChaseClueDestinationDescriptor
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UEndOfGooseChaseClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.EndOfGooseChaseClueDestinationDescriptor");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.ExistingToPhasedNPCIndexAssetMap
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UExistingToPhasedNPCIndexAssetMap : public UDataAsset
{
public:
	TArray<struct FExistingNPCToPhasedNPC>             NPCIndexMappings;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.ExistingToPhasedNPCIndexAssetMap");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.FloatingMessageInABottleClueDestinationGenerator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UFloatingMessageInABottleClueDestinationGenerator : public UClueDestinationGenerator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.FloatingMessageInABottleClueDestinationGenerator");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.FloatingMessageInABottleClueSiteData
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UFloatingMessageInABottleClueSiteData : public UClueSiteData
{
public:
	struct FVector                                     SpawnLocation;                                             // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FB29[0x2C];                                    // 0x0044(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.FloatingMessageInABottleClueSiteData");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.FloatingMessageInABottleClueSiteType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFloatingMessageInABottleClueSiteType : public UClueSiteType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.FloatingMessageInABottleClueSiteType");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.FloatingMessageInABottleSeaClueCreator
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UFloatingMessageInABottleSeaClueCreator : public USeaClueCreator
{
public:
	int                                                LootItemSpawnXYDistanceFromClueIncrementMin;               // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMax;               // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.FloatingMessageInABottleSeaClueCreator");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGooseChaseClueBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary");
		return ptr;
	}



	class UClueDescriptor* STATIC_CreateEndOfGooseChaseClue();
};

// Class LostShipmentsClueVariants.InteractableGrammaticalGenderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInteractableGrammaticalGenderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.InteractableGrammaticalGenderInterface");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.InteractableGrammaticalGenderComponent
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UInteractableGrammaticalGenderComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_61CG[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<LostShipmentsClueVariants_EInteractableGrammaticalGender> GrammaticalGender;                                         // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_73T7[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.InteractableGrammaticalGenderComponent");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.IslandByCompassBearingClueDestinationDescriptor
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UIslandByCompassBearingClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	TEnumAsByte<Athena_ECompassDirections>             CompassDirection;                                          // 0x0070(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NBFC[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.IslandByCompassBearingClueDestinationDescriptor");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.IslandByNameClueDestinationDescriptor
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UIslandByNameClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	struct FName                                       IslandIdentifier;                                          // 0x0070(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.IslandByNameClueDestinationDescriptor");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.IslandNameForNPCContextDestinationDescriptor
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UIslandNameForNPCContextDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	struct FName                                       IslandIdentifier;                                          // 0x0070(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.IslandNameForNPCContextDestinationDescriptor");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.LocationOnIslandClueDestinationDescriptor
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class ULocationOnIslandClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	struct FName                                       IslandIdentifier;                                          // 0x0070(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     WorldPosition;                                             // 0x0078(0x000C) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_25A8[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.LocationOnIslandClueDestinationDescriptor");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.LostShipwreckClueDestinationDescriptor
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class ULostShipwreckClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.LostShipwreckClueDestinationDescriptor");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.MerchantCaptainSpawnInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMerchantCaptainSpawnInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.MerchantCaptainSpawnInterface");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.MerchantCaptainSpawnComponent
// 0x0010 (FullSize[0x0470] - InheritedSize[0x0460])
class UMerchantCaptainSpawnComponent : public UItemSpawnComponent
{
public:
	unsigned char                                      UnknownData_4XEH[0x10];                                    // 0x0460(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.MerchantCaptainSpawnComponent");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.NPCHintDialogueClueCreator
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UNPCHintDialogueClueCreator : public ULandClueCreator
{
public:
	class UExistingToPhasedNPCIndexAssetMap*           NPCMappingAsset;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMin;               // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMax;               // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LootItemSpawnZOffset;                                      // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K4BH[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.NPCHintDialogueClueCreator");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.NPCHintDialogueClueDestinationGenerator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UNPCHintDialogueClueDestinationGenerator : public UClueDestinationGenerator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.NPCHintDialogueClueDestinationGenerator");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.NPCHintDialogueClueSiteData
// 0x00E8 (FullSize[0x0120] - InheritedSize[0x0038])
class UNPCHintDialogueClueSiteData : public UClueSiteData
{
public:
	struct FNPCData                                    NPCData;                                                   // 0x0038(0x00B8)
	unsigned char                                      UnknownData_L0KE[0x30];                                    // 0x00F0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.NPCHintDialogueClueSiteData");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.NPCHintDialogueClueSiteType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNPCHintDialogueClueSiteType : public UClueSiteType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.NPCHintDialogueClueSiteType");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.ObtainClueOnWieldComponent
// 0x0018 (FullSize[0x0150] - InheritedSize[0x0138])
class UObtainClueOnWieldComponent : public UOnItemWieldedComponent
{
public:
	unsigned char                                      UnknownData_K1Y3[0x8];                                     // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClueDescriptor*                             ClueToObtain;                                              // 0x0140(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ClueSiteType;                                              // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.ObtainClueOnWieldComponent");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.ObtainClueFromContainerOnWieldComponent
// 0x0070 (FullSize[0x01C0] - InheritedSize[0x0150])
class UObtainClueFromContainerOnWieldComponent : public UObtainClueOnWieldComponent
{
public:
	unsigned char                                      UnknownData_4IM1[0x70];                                    // 0x0150(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.ObtainClueFromContainerOnWieldComponent");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.SeaLocationByGridSquareClueDestinationDescriptor
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class USeaLocationByGridSquareClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	struct FVector                                     SeaLocationIdentifier;                                     // 0x0070(0x000C) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_6VMJ[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.SeaLocationByGridSquareClueDestinationDescriptor");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UShipwreckClueBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary");
		return ptr;
	}



	class UClueDescriptor* STATIC_CreateCluePointingToShipwreck(class UClueConnectionConfig* ConnectionConfiguration, int Difficulty, TArray<class UClass*> AllowedClueTypes, class UTaleQuestSelectorService* SelectorService, const struct FVector& SourceLocation, class AShipwreck* Shipwreck);
};

// Class LostShipmentsClueVariants.ShipwreckClueDestinationDescriptor
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UShipwreckClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.ShipwreckClueDestinationDescriptor");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.ShipwreckClueDestinationGenerator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UShipwreckClueDestinationGenerator : public UClueDestinationGenerator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.ShipwreckClueDestinationGenerator");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.ShipwreckClueSiteType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UShipwreckClueSiteType : public UClueSiteType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.ShipwreckClueSiteType");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.TaleQuestClueInventoryService
// 0x0258 (FullSize[0x0298] - InheritedSize[0x0040])
class UTaleQuestClueInventoryService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData_045G[0x48];                                    // 0x0040(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClueDescriptor*>                     ObtainedClues;                                             // 0x0088(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData_SPWV[0x50];                                    // 0x0098(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClueDescriptor*, class AActor*>        DiscovererMap;                                             // 0x00E8(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData_MM11[0x120];                                   // 0x0138(0x0120) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       TitleText;                                                 // 0x0258(0x0018) ELEMENT_SIZE_MISMATCH (Transient)
	unsigned char                                      UnknownData_PMR8[0x20];                                    // 0x0138(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UAbandonedNoteClueTextChoiceSource*          ClueTextChoiceSource;                                      // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestClueInventoryService");
		return ptr;
	}



	void SetClueTitleText(const struct FText& InTitleText);
	int GetCollectedClueCount();
};

// Class LostShipmentsClueVariants.TaleQuestClueInventoryServiceDesc
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UTaleQuestClueInventoryServiceDesc : public UTaleQuestServiceDesc
{
public:
	TAssetPtr<class UClass>                            AbandonedNoteItem;                                         // 0x0028(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RJLZ[0x4];                                     // 0x0028(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TAssetPtr<class UClass>                            CircleMapItem;                                             // 0x0048(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W3FB[0x4];                                     // 0x0048(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestClueInventoryServiceDesc");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.TaleQuestGetNPCActorFromClueSiteStep
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UTaleQuestGetNPCActorFromClueSiteStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestGetNPCActorFromClueSiteStep");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.TaleQuestGetNPCActorFromClueSiteStepDesc
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UTaleQuestGetNPCActorFromClueSiteStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableClueSite                      ClueSite;                                                  // 0x0030(0x0010) (Edit)
	struct FQuestVariableActor                         NPCFromClueSite;                                           // 0x0040(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestGetNPCActorFromClueSiteStepDesc");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.TaleQuestGetPhasedVersionOfActorFromAssetMapStep
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UTaleQuestGetPhasedVersionOfActorFromAssetMapStep : public UTaleQuestStep
{
public:
	class UExistingToPhasedNPCIndexAssetMap*           NPCIndexAssetMap;                                          // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestGetPhasedVersionOfActorFromAssetMapStep");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.TaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UTaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         ExistingNPCActor;                                          // 0x0030(0x0010) (Edit)
	struct FQuestVariableActorAssetType                ObtainedPhasedNPCActorType;                                // 0x0040(0x0010) (Edit)
	struct FQuestVariableActor                         PhasingSourceActor;                                        // 0x0050(0x0010) (Edit)
	class UExistingToPhasedNPCIndexAssetMap*           IndexAssetMap;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStep
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UTaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStep");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UTaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableShipwreck                     ShipwreckSpawnedOn;                                        // 0x0030(0x0010) (Edit)
	struct FQuestVariableActor                         SpawnedMerchantCaptain;                                    // 0x0040(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpMessageInABottleClueStep
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UTaleQuestSpawnWashedUpMessageInABottleClueStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpMessageInABottleClueStep");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpMessageInABottleClueStepDesc
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UTaleQuestSpawnWashedUpMessageInABottleClueStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableClueSite                      ClueSite;                                                  // 0x0030(0x0010) (Edit)
	struct FQuestVariableClueDescriptor                ClueDescriptor;                                            // 0x0040(0x0010) (Edit)
	struct FQuestVariableActor                         MessageInABottle;                                          // 0x0050(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpMessageInABottleClueStepDesc");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpSkeletonClueStep
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UTaleQuestSpawnWashedUpSkeletonClueStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpSkeletonClueStep");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpSkeletonClueStepDesc
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UTaleQuestSpawnWashedUpSkeletonClueStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableClueSite                      ClueSite;                                                  // 0x0030(0x0010) (Edit)
	struct FQuestVariableClueDescriptor                ClueDescriptor;                                            // 0x0040(0x0010) (Edit)
	struct FQuestVariableActor                         SkeletonActor;                                             // 0x0050(0x0010) (Edit)
	struct FQuestVariableItemInfo                      ClueItem;                                                  // 0x0060(0x0010) (Edit)
	struct FName                                       SkeletonClueSocketName;                                    // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpSkeletonClueStepDesc");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.WaitForClueCollectedStep
// 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
class UWaitForClueCollectedStep : public UTaleQuestStep
{
public:
	class UClueDescriptor*                             ClueDesc;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ClueActor;                                                 // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XJ1C[0x38];                                    // 0x0078(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.WaitForClueCollectedStep");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.WaitForClueCollectedStepDesc
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UWaitForClueCollectedStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableClueDescriptor                Clue;                                                      // 0x0030(0x0010) (Edit)
	struct FQuestVariableActor                         ClueActor;                                                 // 0x0040(0x0010) (Edit)
	struct FQuestVariableActor                         Discoverer;                                                // 0x0050(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.WaitForClueCollectedStepDesc");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.WashedUpMessageInABottleClueCreator
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UWashedUpMessageInABottleClueCreator : public ULandClueCreator
{
public:
	TAssetPtr<class UClass>                            MessageInABottleItem;                                      // 0x0030(0x001C) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ICMC[0x4];                                     // 0x0030(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                LootItemSpawnXYDistanceFromClueIncrementMin;               // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMax;               // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LootItemSpawnZOffset;                                      // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LootItemSinkIntoSandZDistanceMin;                          // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LootItemSinkIntoSandZDistanceMax;                          // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LootItemSinkIntoSandRotationMin;                           // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LootItemSinkIntoSandRotationMax;                           // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OADP[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TAssetPtr<class UClass>>                    SinkIntoSandItems;                                         // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.WashedUpMessageInABottleClueCreator");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.WashedUpMessageInABottleClueDestinationGenerator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UWashedUpMessageInABottleClueDestinationGenerator : public UClueDestinationGenerator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.WashedUpMessageInABottleClueDestinationGenerator");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.WashedUpMessageInABottleClueSiteData
// 0x00A8 (FullSize[0x00E0] - InheritedSize[0x0038])
class UWashedUpMessageInABottleClueSiteData : public UClueSiteData
{
public:
	class UClass*                                      BottleItemType;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FName                                       IslandNameToSpawnOn;                                       // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       IslandSpawnLocationReservationId;                          // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JO6W[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  SpawnTransform;                                            // 0x0060(0x0030) (IsPlainOldData, NoDestructor)
	TArray<class UClass*>                              SinkIntoSandItems;                                         // 0x0090(0x0010) (ZeroConstructor, UObjectWrapper)
	unsigned char                                      UnknownData_AHSP[0x40];                                    // 0x00A0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.WashedUpMessageInABottleClueSiteData");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.WashedUpMessageInABottleClueSiteType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWashedUpMessageInABottleClueSiteType : public UClueSiteType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.WashedUpMessageInABottleClueSiteType");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.WashedUpSkeletonClueDestinationGenerator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UWashedUpSkeletonClueDestinationGenerator : public UClueDestinationGenerator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.WashedUpSkeletonClueDestinationGenerator");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.WashedUpSkeletonClueSiteData
// 0x0088 (FullSize[0x00C0] - InheritedSize[0x0038])
class UWashedUpSkeletonClueSiteData : public UClueSiteData
{
public:
	class UClass*                                      SkeletonPoseType;                                          // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      ClueItemType;                                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FName                                       IslandNameToSpawnOn;                                       // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       IslandSpawnLocationReservationId;                          // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  SpawnTransform;                                            // 0x0060(0x0030) (IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V0PU[0x30];                                    // 0x0090(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.WashedUpSkeletonClueSiteData");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.WashedUpSkeletonClueSiteType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWashedUpSkeletonClueSiteType : public UClueSiteType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.WashedUpSkeletonClueSiteType");
		return ptr;
	}



};

// Class LostShipmentsClueVariants.WashedUpSkeletonLandClueCreator
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UWashedUpSkeletonLandClueCreator : public ULandClueCreator
{
public:
	TArray<TAssetPtr<class UClass>>                    SkeletonPoses;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	TAssetPtr<class UClass>                            ClueItemDesc;                                              // 0x0040(0x001C) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4U4Y[0x4];                                     // 0x0040(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                LootItemSpawnXYDistanceFromClueIncrementMin;               // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMax;               // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LootItemSpawnZOffset;                                      // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NGWU[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueVariants.WashedUpSkeletonLandClueCreator");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
