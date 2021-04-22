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

// Class TaleNotes.TaleNote
// 0x0200 (FullSize[0x09D0] - InheritedSize[0x07D0])
class ATaleNote : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData_MOMJ[0x10];                                    // 0x07D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CanvasWidth;                                               // 0x07E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CanvasHeight;                                              // 0x07E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FontScale;                                                 // 0x07E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2S31[0x4];                                     // 0x07EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       Font;                                                      // 0x07F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTreasureMapWidgetStreamedTexture           Image;                                                     // 0x07F8(0x0030) (Edit, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      TitleWidgetText;                                           // 0x0828(0x0020) (Edit, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      BodyWidgetText;                                            // 0x0848(0x0020) (Edit, DisableEditOnInstance)
	float                                              NoteWidth;                                                 // 0x0868(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IQYA[0x4];                                     // 0x086C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Title;                                                     // 0x0870(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_17YX[0x20];                                    // 0x086C(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       Body;                                                      // 0x08A8(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_1WA0[0x20];                                    // 0x08A8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UMaybeCompressedCanvasRenderTarget2D*        RenderTarget;                                              // 0x08E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UNamedNotificationInputComponent*            NamedNotificationInputComponent;                           // 0x08E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UUsableWieldableComponent*                   UsableWieldableComponent;                                  // 0x08F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UInventoryItemComponent*                     InventoryItemComponent;                                    // 0x08F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7TEE[0xD0];                                    // 0x0900(0x00D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TaleNotes.TaleNote");
		return ptr;
	}



	void OnTextCanvasUpdate(class UCanvas* InCanvas, int InWidth, int InHeight);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
