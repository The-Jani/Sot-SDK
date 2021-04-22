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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// 0x0050
struct FLevelSequenceObjectReferenceMap
{
	unsigned char                                      UnknownData_2XRB[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// 0x0008
struct FLevelSequenceSnapshotSettings
{
	unsigned char                                      ZeroPadAmount;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1HXY[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FrameRate;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct LevelSequence.LevelSequenceObject
// 0x0038
struct FLevelSequenceObject
{
	TLazyObjectPtr<class UObject>                      ObjectOrOwner;                                             // 0x0000(0x001C) (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P4EH[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ComponentName;                                             // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TWeakObjectPtr<class UObject>                      CachedComponent;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper)

};

// ScriptStruct LevelSequence.LevelSequenceObjectReference
// 0x0020
struct FLevelSequenceObjectReference
{
	unsigned char                                      UnknownData_UOJ7[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// 0x0090
struct FLevelSequencePlayerSnapshot
{
	struct FText                                       MasterName;                                                // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData_EA63[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              MasterTime;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OF5E[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CurrentShotName;                                           // 0x0040(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData_WPJM[0x20];                                    // 0x003C(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              CurrentShotLocalTime;                                      // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_76IE[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCameraComponent*                            CameraComponent;                                           // 0x0080(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLevelSequenceSnapshotSettings              Settings;                                                  // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)

};

// ScriptStruct LevelSequence.LevelSequencePlaybackSettings
// 0x0000 (0x0028 - 0x0028)
struct FLevelSequencePlaybackSettings : public FMovieSceneSequencePlaybackSettings
{

};

// ScriptStruct LevelSequence.BoundActorProxy
// 0x0001
struct FBoundActorProxy
{
	unsigned char                                      UnknownData_KPIK[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
