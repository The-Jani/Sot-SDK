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
// Enums
//---------------------------------------------------------------------------

// Enum MovieScene.ESpawnOwnership
enum class MovieScene_ESpawnOwnership : uint8_t
{
	ESpawnOwnership__InnerSequence = 0,
	ESpawnOwnership__MasterSequence = 1,
	ESpawnOwnership__External      = 2,
	ESpawnOwnership__ESpawnOwnership_MAX = 3,

};

// Enum MovieScene.EMovieSceneKeyInterpolation
enum class MovieScene_EMovieSceneKeyInterpolation : uint8_t
{
	EMovieSceneKeyInterpolation__Auto = 0,
	EMovieSceneKeyInterpolation__User = 1,
	EMovieSceneKeyInterpolation__Break = 2,
	EMovieSceneKeyInterpolation__Linear = 3,
	EMovieSceneKeyInterpolation__Constant = 4,
	EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX = 5,

};

// Enum MovieScene.EMovieSceneCompletionMode
enum class MovieScene_EMovieSceneCompletionMode : uint8_t
{
	EMovieSceneCompletionMode__KeepState = 0,
	EMovieSceneCompletionMode__RestoreState = 1,
	EMovieSceneCompletionMode__EMovieSceneCompletionMode_MAX = 2,

};

// Enum MovieScene.EEvaluationMethod
enum class MovieScene_EEvaluationMethod : uint8_t
{
	EEvaluationMethod__Static      = 0,
	EEvaluationMethod__Swept       = 1,
	EEvaluationMethod__EEvaluationMethod_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieScene.MovieSceneObjectBindingPtr
// 0x0010
struct FMovieSceneObjectBindingPtr
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// 0x001C
struct FMovieSceneBindingOverrideData
{
	struct FMovieSceneObjectBindingPtr                 ObjectBindingId;                                           // 0x0000(0x0010) (Edit)
	TWeakObjectPtr<class UObject>                      Object;                                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                               bOverridesDefault;                                         // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_49EU[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// 0x0028
struct FMovieSceneSequencePlaybackSettings
{
	int                                                LoopCount;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bRandomStartTime;                                          // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O515[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartTime;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bRestoreState;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZNOO[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TScriptInterface<class UMovieSceneBindingOverridesInterface> BindingOverrides;                                          // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)

};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// 0x0002
struct FMovieSceneSectionEvalOptions
{
	bool                                               bCanEditCompletionMode;                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<MovieScene_EMovieSceneCompletionMode>  CompletionMode;                                            // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// 0x0004
struct FMovieSceneTrackIdentifier
{
	uint32_t                                           Value;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// 0x0010
struct FMovieSceneEvaluationGroupLUTIndex
{
	bool                                               bRequiresImmediateFlush;                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LK69[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LUTOffset;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumInitPtrs;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumEvalPtrs;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct MovieScene.MovieSceneSequenceID
// 0x0004
struct FMovieSceneSequenceID
{
	uint32_t                                           Value;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// 0x0008
struct FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSequenceID                       SequenceId;                                                // 0x0000(0x0004)
	struct FMovieSceneTrackIdentifier                  TrackIdentifier;                                           // 0x0004(0x0004)

};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// 0x0004 (0x000C - 0x0008)
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
	int                                                SegmentIndex;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// 0x0020
struct FMovieSceneEvaluationGroup
{
	TArray<struct FMovieSceneEvaluationGroupLUTIndex>  LUTIndices;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT;                                             // 0x0010(0x0010) (ZeroConstructor)

};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// 0x0010
struct FMovieSceneEvaluationMetaData
{
	TArray<struct FMovieSceneSequenceID>               ActiveSequences;                                           // 0x0000(0x0010) (ZeroConstructor)

};

// ScriptStruct MovieScene.MovieSceneEvaluationField
// 0x0030
struct FMovieSceneEvaluationField
{
	TArray<struct FFloatRange>                         Ranges;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneEvaluationGroup>          Groups;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneEvaluationMetaData>       MetaData;                                                  // 0x0020(0x0010) (ZeroConstructor)

};

// ScriptStruct MovieScene.MovieScenePossessable
// 0x0038
struct FMovieScenePossessable
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                      PossessedObjectClass;                                      // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       ParentGuid;                                                // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct MovieScene.MovieSceneSpawnable
// 0x0040
struct FMovieSceneSpawnable
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ObjectTemplate;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuid>                               ChildPossessables;                                         // 0x0028(0x0010) (ZeroConstructor)
	TEnumAsByte<MovieScene_ESpawnOwnership>            Ownership;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JSB2[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneTrackLabels
// 0x0010
struct FMovieSceneTrackLabels
{
	TArray<struct FString>                             Strings;                                                   // 0x0000(0x0010) (ZeroConstructor)

};

// ScriptStruct MovieScene.MovieSceneExpansionState
// 0x0001
struct FMovieSceneExpansionState
{
	bool                                               bExpanded;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct MovieScene.MovieSceneEditorData
// 0x0070
struct FMovieSceneEditorData
{
	TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates;                                           // 0x0000(0x0050) (ZeroConstructor)
	struct FFloatRange                                 WorkingRange;                                              // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFloatRange                                 ViewRange;                                                 // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// 0x0010
struct FMovieSceneEvalTemplateBase
{
	unsigned char                                      UnknownData_6QUG[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneEmptyStruct
// 0x0001
struct FMovieSceneEmptyStruct
{
	unsigned char                                      UnknownData_6YGH[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// 0x0038
struct FMovieSceneEvalTemplatePtr
{
	unsigned char                                      UnknownData_YMCS[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneSegment
// 0x0040
struct FMovieSceneSegment
{
	unsigned char                                      UnknownData_HX5Q[0x40];                                    // 0x0000(0x0040) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.SectionEvaluationData
// 0x0008
struct FSectionEvaluationData
{
	int                                                ImplIndex;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ForcedTime;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// 0x0038
struct FMovieSceneTrackImplementationPtr
{
	unsigned char                                      UnknownData_TDHB[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneTrackImplementation
// 0x0000 (0x0010 - 0x0010)
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// 0x0080
struct FMovieSceneEvaluationTrack
{
	struct FGuid                                       ObjectBindingId;                                           // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	uint16_t                                           EvaluationPriority;                                        // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<MovieScene_EEvaluationMethod>          EvaluationMethod;                                          // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZD7B[0x5];                                     // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMovieSceneSegment>                  Segments;                                                  // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneEvalTemplatePtr>          ChildTemplates;                                            // 0x0028(0x0010) (ZeroConstructor)
	struct FMovieSceneTrackImplementationPtr           TrackTemplate;                                             // 0x0038(0x0038)
	struct FName                                       EvaluationGroup;                                           // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bEvaluateInPreroll : 1;                                    // 0x0078(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bEvaluateInPostroll : 1;                                   // 0x0078(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_C1R6[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
// 0x0008
struct FMovieSceneSequenceTransform
{
	float                                              TimeScale;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Offset;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct MovieScene.MovieSceneSectionParameters
// 0x0010
struct FMovieSceneSectionParameters
{
	float                                              StartOffset;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeScale;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PrerollTime;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PostrollTime;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// 0x0018
struct FMovieSceneSequenceHierarchyNode
{
	struct FMovieSceneSequenceID                       ParentID;                                                  // 0x0000(0x0004)
	unsigned char                                      UnknownData_A9J5[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMovieSceneSequenceID>               Children;                                                  // 0x0008(0x0010) (ZeroConstructor)

};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
// 0x0028
struct FMovieSceneSubSequenceData
{
	class UMovieSceneSequence*                         Sequence;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMovieSceneSequenceTransform                RootToSequenceTransform;                                   // 0x0008(0x0008)
	struct FGuid                                       SourceSequenceSignature;                                   // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMovieSceneSequenceID                       DeterministicSequenceID;                                   // 0x0020(0x0004)
	unsigned char                                      UnknownData_M83C[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// 0x00A0
struct FMovieSceneSequenceHierarchy
{
	TMap<uint32_t, struct FMovieSceneSubSequenceData>  SubSequences;                                              // 0x0000(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FMovieSceneSequenceHierarchyNode> Hierarchy;                                                 // 0x0050(0x0050) (ZeroConstructor)

};

// ScriptStruct MovieScene.MovieSceneBinding
// 0x0030
struct FMovieSceneBinding
{
	struct FGuid                                       ObjectGuid;                                                // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     BindingName;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TArray<class UMovieSceneTrack*>                    Tracks;                                                    // 0x0020(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)

};

// ScriptStruct MovieScene.MovieSceneGenerationLedger
// 0x00A8
struct FMovieSceneGenerationLedger
{
	struct FMovieSceneTrackIdentifier                  LastTrackIdentifier;                                       // 0x0000(0x0004)
	unsigned char                                      UnknownData_ZVCU[0xA4];                                    // 0x0004(0x00A4) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// 0x0220
struct FMovieSceneEvaluationTemplate
{
	TMap<uint32_t, struct FMovieSceneEvaluationTrack>  Tracks;                                                    // 0x0000(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData_87I1[0x50];                                    // 0x0050(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneEvaluationField                  EvaluationField;                                           // 0x00A0(0x0030)
	struct FMovieSceneSequenceHierarchy                Hierarchy;                                                 // 0x00D0(0x00A0)
	struct FMovieSceneGenerationLedger                 Ledger;                                                    // 0x0170(0x00A8)
	unsigned char                                      bHasLegacyTrackInstances : 1;                              // 0x0218(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bKeepStaleTracks : 1;                                      // 0x0218(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_ATWP[0x7];                                     // 0x0219(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.CachedMovieSceneEvaluationTemplate
// 0x0000 (0x0220 - 0x0220)
struct FCachedMovieSceneEvaluationTemplate : public FMovieSceneEvaluationTemplate
{

};

// ScriptStruct MovieScene.MovieSceneSequenceCachedSignature
// 0x0018
struct FMovieSceneSequenceCachedSignature
{
	TWeakObjectPtr<class UMovieSceneSequence>          Sequence;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FGuid                                       CachedSignature;                                           // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
// 0x0008 (0x0018 - 0x0010)
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
	TEnumAsByte<MovieScene_EMovieSceneCompletionMode>  CompletionMode;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Q97M[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneLegacyTrackInstanceTemplate
// 0x0008 (0x0020 - 0x0018)
struct FMovieSceneLegacyTrackInstanceTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneTrack*                            Track;                                                     // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct MovieScene.MovieScenePropertySectionData
// 0x0020
struct FMovieScenePropertySectionData
{
	struct FName                                       PropertyName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PropertyPath;                                              // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FName                                       FunctionName;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct MovieScene.MovieSceneKeyStruct
// 0x0008
struct FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData_RN9B[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// 0x0004
struct FMovieSceneTrackEvalOptions
{
	unsigned char                                      bCanEvaluateNearestSection : 1;                            // 0x0000(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bEvaluateNearestSection : 1;                               // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bEvaluateInPreroll : 1;                                    // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bEvaluateInPostroll : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_W5AL[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneTrackCompilationParams
// 0x0001
struct FMovieSceneTrackCompilationParams
{
	bool                                               bForEditorPreview;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
