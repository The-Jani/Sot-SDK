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

// Class LevelSequence.LevelSequence
// 0x00A8 (FullSize[0x0350] - InheritedSize[0x02A8])
class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                                // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLevelSequenceObjectReferenceMap            ObjectReferences;                                          // 0x02B0(0x0050)
	TMap<struct FString, struct FLevelSequenceObject>  PossessedObjects;                                          // 0x0300(0x0050) (ZeroConstructor, Deprecated)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}



};

// Class LevelSequence.LevelSequenceSubtitlesInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULevelSequenceSubtitlesInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceSubtitlesInterface");
		return ptr;
	}



};

// Class LevelSequence.LevelSequencePlayer
// 0x0040 (FullSize[0x06A0] - InheritedSize[0x0660])
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	class AActor*                                      SpawnablesParent;                                          // 0x0660(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GFER[0x38];                                    // 0x0668(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}



	class ULevelSequencePlayer* STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings);
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULevelSequenceBurnInInitSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return ptr;
	}



};

// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                               bUseBurnIn;                                                // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HXYI[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStringClassReference                       BurnInClass;                                               // 0x0030(0x0010) (Edit, ZeroConstructor)
	class ULevelSequenceBurnInInitSettings*            Settings;                                                  // 0x0040(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return ptr;
	}



};

// Class LevelSequence.LevelSequenceActor
// 0x0070 (FullSize[0x0498] - InheritedSize[0x0428])
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData_6613[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bAutoPlay;                                                 // 0x0430(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YTZO[0x7];                                     // 0x0431(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                          // 0x0438(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class ULevelSequencePlayer*                        SequencePlayer;                                            // 0x0460(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStringAssetReference                       LevelSequence;                                             // 0x0468(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                             // 0x0478(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash)
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                          // 0x0480(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                      SpawnablesParent;                                          // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequenceBurnIn*                        BurnInInstance;                                            // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}



	void SetSequence(class ULevelSequence* InSequence, bool LoadSequence);
	void SetBinding(const struct FMovieSceneObjectBindingPtr& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(const struct FMovieSceneObjectBindingPtr& Binding);
	void RemoveBinding(const struct FMovieSceneObjectBindingPtr& Binding, class AActor* Actor);
	class ULevelSequence* GetSequence(bool Load);
	void AddBinding(const struct FMovieSceneObjectBindingPtr& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};

// Class LevelSequence.LevelSequenceBurnIn
// 0x0098 (FullSize[0x02C8] - InheritedSize[0x0230])
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot                FrameInformation;                                          // 0x0230(0x0090) (BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected)
	class ALevelSequenceActor*                         LevelSequenceActor;                                        // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return ptr;
	}



	void SetSettings(class UObject* InSettings);
	class UClass* GetSettingsClass();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
