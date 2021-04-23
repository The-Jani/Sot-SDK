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
// Enums
//---------------------------------------------------------------------------

// Enum Pets.EPetDangerHearingResponseType
enum class Pets_EPetDangerHearingResponseType : uint8_t
{
	EPetDangerHearingResponseType__RunAway = 0,
	EPetDangerHearingResponseType__RunToHangoutSpot = 1,
	EPetDangerHearingResponseType__TurnToward = 2,
	EPetDangerHearingResponseType__RunToOwner = 3,
	EPetDangerHearingResponseType__MAX = 4,
	EPetDangerHearingResponseType__EPetDangerHearingResponseType_MAX = 5,

};

// Enum Pets.EPetDangerHearingTarget
enum class Pets_EPetDangerHearingTarget : uint8_t
{
	EPetDangerHearingTarget__None  = 0,
	EPetDangerHearingTarget__Owner = 1,
	EPetDangerHearingTarget__Crew  = 2,
	EPetDangerHearingTarget__Alliance = 3,
	EPetDangerHearingTarget__EPetDangerHearingTarget_MAX = 4,

};

// Enum Pets.EHangoutRotationMode
enum class Pets_EHangoutRotationMode : uint8_t
{
	EHangoutRotationMode__Match    = 0,
	EHangoutRotationMode__Randomise = 1,
	EHangoutRotationMode__EHangoutRotationMode_MAX = 2,

};

// Enum Pets.EWieldablePetDropRequestReason
enum class Pets_EWieldablePetDropRequestReason : uint8_t
{
	EWieldablePetDropRequestReason__None = 0,
	EWieldablePetDropRequestReason__Submerged = 1,
	EWieldablePetDropRequestReason__Escaped = 2,
	EWieldablePetDropRequestReason__EWieldablePetDropRequestReason_MAX = 3,

};

// Enum Pets.EPetFeedingReactionType
enum class Pets_EPetFeedingReactionType : uint8_t
{
	EPetFeedingReactionType__None  = 0,
	EPetFeedingReactionType__Sick  = 1,
	EPetFeedingReactionType__Happy = 2,
	EPetFeedingReactionType__EPetFeedingReactionType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Pets.PetCustomisation
// 0x0018
struct FPetCustomisation
{
	struct FString                                     PetName;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FAIPartId                                   PetPartId;                                                 // 0x0010(0x0008) (Edit, DisableEditOnInstance)

};

// ScriptStruct Pets.PetListingTypeEntry
// 0x0038
struct FPetListingTypeEntry
{
	struct FStringAssetReference                       PetPartsCategory;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringClassReference                       PetType;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       FeatureToggleName;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PetListingName;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

};

// ScriptStruct Pets.PetsServiceParams
// 0x0038
struct FPetsServiceParams
{
	uint32_t                                           MaximumDistanceFromOwner;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint32_t                                           ProximityRadius;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxPetsInProximity;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RespawnRequestTimeout;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpawnTimeDelay;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinPetProximityLifespan;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxPetProximityLifespan;                                   // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinPetProximityRespawnDelay;                               // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxPetProximityRespawnDelay;                               // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HeldPetDespawnDelay;                                       // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              IllegalShipsSizesForSpawn;                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)

};

// ScriptStruct Pets.PetTurnToFaceData
// 0x0020
struct FPetTurnToFaceData
{
	struct FQuat                                       EndRotation;                                               // 0x0000(0x0010) (IsPlainOldData, NoDestructor)
	float                                              RotationTime;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M3SJ[0xC];                                     // 0x0014(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.PetRelationship
// 0x0020
struct FPetRelationship
{
	class APetItemInfo*                                PetInfo;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_591V[0x18];                                    // 0x0008(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.ReactStateMapping
// 0x00D8
struct FReactStateMapping
{
	struct FName                                       AnimationID;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanTimeout;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M09S[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnimationTimeout;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedPetAnimationSelector               PetStateSelector;                                          // 0x0010(0x00A0) (Edit, DisableEditOnInstance)
	float                                              AnimationChance;                                           // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                                 AnimationDelay;                                            // 0x00B4(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SEFX[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              IgnoringStrategies;                                        // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)

};

// ScriptStruct Pets.EventWieldablePetPendingDrop
// 0x0001
struct FEventWieldablePetPendingDrop
{
	TEnumAsByte<Pets_EWieldablePetDropRequestReason>   DropRequestReason;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.WieldablePetDropTimeout
// 0x0008
struct FWieldablePetDropTimeout
{
	TEnumAsByte<Pets_EWieldablePetDropRequestReason>   RequestReason;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9TLM[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DropDelay;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.WieldablePetFoodSourceEntry
// 0x0010
struct FWieldablePetFoodSourceEntry
{
	class AActor*                                      FoodSourceActor;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeUntilConsumption;                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1DUA[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.WieldablePetHungerAnimationData
// 0x0008
struct FWieldablePetHungerAnimationData
{
	TEnumAsByte<Athena_EAthenaAnimationPetHeldReactionState> AnimState;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KQV4[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnimTimeout;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.EventNewPetThreatDetected
// 0x0001
struct FEventNewPetThreatDetected
{
	unsigned char                                      UnknownData_T12W[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.EventPetDismissed
// 0x0008
struct FEventPetDismissed
{
	class AActor*                                      DismissingActor;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.DismissPetNotificationEvent
// 0x0001
struct FDismissPetNotificationEvent
{
	unsigned char                                      UnknownData_X0OU[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.EventPetFoodBase
// 0x0010
struct FEventPetFoodBase
{
	struct FGuid                                       FeedingInteractionId;                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Pets.EventPetRefusedFood
// 0x0008 (0x0018 - 0x0010)
struct FEventPetRefusedFood : public FEventPetFoodBase
{
	class AActor*                                      FeedingActor;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.EventPetReactedToFood
// 0x0004 (0x0014 - 0x0010)
struct FEventPetReactedToFood : public FEventPetFoodBase
{
	TEnumAsByte<Pets_EPetFeedingReactionType>          ReactionType;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OMUE[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.EventPetNotFed
// 0x0008 (0x0018 - 0x0010)
struct FEventPetNotFed : public FEventPetFoodBase
{
	class AActor*                                      FeedingActor;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.EventPetFed
// 0x0010 (0x0020 - 0x0010)
struct FEventPetFed : public FEventPetFoodBase
{
	class AActor*                                      FedWithActor;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      FeedingActor;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.EventPetPerchSpotEnabledStateChanged
// 0x0001
struct FEventPetPerchSpotEnabledStateChanged
{
	unsigned char                                      UnknownData_GB9L[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.EventPetLeftHangout
// 0x0008
struct FEventPetLeftHangout
{
	class AActor*                                      Pet;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.EventPetEnteredHangout
// 0x0002
struct FEventPetEnteredHangout
{
	unsigned char                                      UnknownData_N3DU[0x2];                                     // 0x0000(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.PetCustomiationOverrideMappingEntry
// 0x0018
struct FPetCustomiationOverrideMappingEntry
{
	struct FString                                     Identifier;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UPetCustomisationOverrideDataAsset*          OverrideAsset;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.PetDangerHearingThreatResponse
// 0x0003
struct FPetDangerHearingThreatResponse
{
	TEnumAsByte<Pets_EPetDangerHearingResponseType>    Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Pets_EPetDangerHearingTarget>          IgnoredTarget;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InvertIgnoredTarget;                                       // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Pets.PetDangerHearingThreat
// 0x0020
struct FPetDangerHearingThreat
{
	struct FName                                       SoundTag;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeBeforeForgotten;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_X9YF[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPetDangerHearingThreatResponse>     Responses;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct Pets.PetFeedingAnimationData
// 0x0008
struct FPetFeedingAnimationData
{
	TEnumAsByte<Athena_EAthenaAnimationPetRoamingState> AnimationState;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HUD4[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnimationTimeout;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.PetFeedingParams
// 0x0038
struct FPetFeedingParams
{
	struct FPetFeedingAnimationData                    EatingAnimData;                                            // 0x0000(0x0008) (Edit)
	struct FPetFeedingAnimationData                    FedAnimData;                                               // 0x0008(0x0008) (Edit)
	struct FPetFeedingAnimationData                    NotFedAnimData;                                            // 0x0010(0x0008) (Edit)
	struct FPetFeedingAnimationData                    SickAnimData;                                              // 0x0018(0x0008) (Edit)
	struct FPetFeedingAnimationData                    RefusalAnimData;                                           // 0x0020(0x0008) (Edit)
	float                                              TimeToStartEating;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeUntilGivingUp;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistToleranceSquared;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RotationTolerance;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.HangoutSpotId
// 0x0008
struct FHangoutSpotId
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.HangoutSpotPosition
// 0x0080
struct FHangoutSpotPosition
{
	struct FHangoutSpotId                              Id;                                                        // 0x0000(0x0008) (Edit)
	unsigned char                                      UnknownData_U9L6[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor)
	TEnumAsByte<Pets_EHangoutRotationMode>             RotationMode;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EShipDeck>                      ShipDeck;                                                  // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BXBL[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APawn*                                       Occupier;                                                  // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G1I5[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               IsPerch;                                                   // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NeedOverrideInteractionPoint;                              // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GZDJ[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     OverrideInteractionPointPosition;                          // 0x0064(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BlockPetEmoteReactions;                                    // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IgnorePickupFromHangoutTooltipDisplayOffset;               // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SHRZ[0xE];                                     // 0x0072(0x000E) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.PetHangoutSpotParams
// 0x00B8
struct FPetHangoutSpotParams
{
	class UClass*                                      PetType;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FFloatRange                                 HangoutTime;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FWeightedPetAnimationSelector               AnimationSelector;                                         // 0x0018(0x00A0) (Edit, DisableEditOnInstance)

};

// ScriptStruct Pets.HangoutSpotParams
// 0x0028
struct FHangoutSpotParams
{
	struct FName                                       HangoutSpotName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weight;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BV90[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPetHangoutSpotParams>               PetParams;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       FeatureName;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.PetNotFedTelemetryEvent
// 0x0020
struct FPetNotFedTelemetryEvent
{
	struct FString                                     IgnoringPlayerId;                                          // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                       FeedingInteractionId;                                      // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Pets.PetFedTelemetryEvent
// 0x0030
struct FPetFedTelemetryEvent
{
	struct FString                                     FedWithItemId;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     FeedingPlayerId;                                           // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                       FeedingInteractionId;                                      // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Pets.PetReactedTelemetryEvent
// 0x0018
struct FPetReactedTelemetryEvent
{
	struct FString                                     ReactId;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EAthenaAnimationPetRoamingState> AnimationState;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OT5B[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.PetDroppedTelemetryEvent
// 0x0001
struct FPetDroppedTelemetryEvent
{
	unsigned char                                      UnknownData_IKRQ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.PetPickedUpTelemetryEvent
// 0x0001
struct FPetPickedUpTelemetryEvent
{
	bool                                               IsOnPerch;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Pets.PetControllerSetTickOrderEvent
// 0x0008
struct FPetControllerSetTickOrderEvent
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.EventPerchHangoutSpotSetEnabledState
// 0x000C
struct FEventPerchHangoutSpotSetEnabledState
{
	unsigned char                                      UnknownData_REK0[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.EventHangoutSpotMadeAvailable
// 0x0050
struct FEventHangoutSpotMadeAvailable
{
	unsigned char                                      UnknownData_02BC[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.EventHangoutSpotMadeUnavailable
// 0x0050
struct FEventHangoutSpotMadeUnavailable
{
	unsigned char                                      UnknownData_WUBF[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.PetDespawnActionStateParams
// 0x0040
struct FPetDespawnActionStateParams
{
	float                                              TakeOffHeight;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TakeOffTime;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TotalGhostShaderTime;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeToTriggerVFX;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     DespawnVFX;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                DespawnVFXColour;                                          // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UWwiseEvent*                                 DespawnSFX;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopDespawnSFX;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TotalDespawningTime;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YNQR[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.PetSpawnActionStateConstructionInfo
// 0x0000 (0x0030 - 0x0030)
struct FPetSpawnActionStateConstructionInfo : public FActorActionStateConstructionInfo
{

};

// ScriptStruct Pets.PetSpawnActionStateParams
// 0x0040
struct FPetSpawnActionStateParams
{
	float                                              LandingHeight;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LandingTime;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TotalGhostShaderTime;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeToTriggerVFX;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     SpawnVFX;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SpawnVFXColour;                                            // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UWwiseEvent*                                 SpawnSFX;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopSpawnSFX;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TotalSpawningTime;                                         // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UNV5[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.EventWieldablePetHungerStateUpdated
// 0x0001
struct FEventWieldablePetHungerStateUpdated
{
	TEnumAsByte<Athena_EAthenaAnimationPetHeldReactionState> NewState;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.EventPetSadnessEnd
// 0x0001
struct FEventPetSadnessEnd
{
	unsigned char                                      UnknownData_IHC4[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.EventPetSadnessBegin
// 0x0001
struct FEventPetSadnessBegin
{
	unsigned char                                      UnknownData_9JHT[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.EventPetOwnerAssigned
// 0x0008
struct FEventPetOwnerAssigned
{
	class AActor*                                      Owner;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.EventPetCustomisationComplete
// 0x0001
struct FEventPetCustomisationComplete
{
	unsigned char                                      UnknownData_ENSI[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.EventPetCustomisationReady
// 0x0010
struct FEventPetCustomisationReady
{
	unsigned char                                      UnknownData_FCGM[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.EventWieldablePetPutOnPerch
// 0x0020
struct FEventWieldablePetPutOnPerch
{
	class AActor*                                      Pet;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       HangoutSpotName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint32_t                                           HangoutSpotIndex;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TWeakObjectPtr<class AActor>                       WieldingActor;                                             // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	unsigned char                                      UnknownData_Y5CE[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.EventPetDropped
// 0x0001
struct FEventPetDropped
{
	unsigned char                                      UnknownData_VLWH[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.EventPetPickedUp
// 0x0001
struct FEventPetPickedUp
{
	bool                                               IsOnPerch;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Pets.EventPetReactBegun
// 0x000C
struct FEventPetReactBegun
{
	struct FName                                       ReactId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EAthenaAnimationPetRoamingState> ReactState;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GV32[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.EventPetReactCancellation
// 0x0010
struct FEventPetReactCancellation
{
	class AActor*                                      ReactSource;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ReactId;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.EventPetReactRequest
// 0x0010
struct FEventPetReactRequest
{
	class AActor*                                      ReactSource;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ReactId;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.RespawnPetEvent
// 0x0008
struct FRespawnPetEvent
{
	class AActor*                                      PetOwner;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.EventPetEndPlay
// 0x0008
struct FEventPetEndPlay
{
	class APawn*                                       LinkedPet;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.EventPetSpawnedForShip
// 0x0010
struct FEventPetSpawnedForShip
{
	class APawn*                                       LinkedPet;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      LinkedShip;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.PetBaseTelemetryFragmentInput
// 0x0008
struct FPetBaseTelemetryFragmentInput : public FTelemetryFragmentInput
{
	TWeakObjectPtr<class AActor>                       PetInfo;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)

};

// ScriptStruct Pets.PetBaseTelemetryFragment
// 0x0030
struct FPetBaseTelemetryFragment
{
	struct FString                                     OwnerId;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     PetPartId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EItemRepresentation>            CurrentPetRepresentation;                                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K37E[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     PetLocation;                                               // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Pets.WieldablePetPutOnPerchTelemetryEvent
// 0x0028
struct FWieldablePetPutOnPerchTelemetryEvent
{
	struct FString                                     HangoutSpotName;                                           // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	uint32_t                                           HangoutSpotIndex;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L5BH[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     WieldingActorTelemetrySubjectId;                           // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

};

// ScriptStruct Pets.PetDismissedTelemetryEvent
// 0x0001
struct FPetDismissedTelemetryEvent
{
	unsigned char                                      UnknownData_UL0X[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Pets.PetRefusedFoodTelemetryEvent
// 0x0020
struct FPetRefusedFoodTelemetryEvent
{
	struct FString                                     TryingToFeedPlayerId;                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                       FeedingInteractionId;                                      // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Pets.PetReactedToFoodTelemetryEvent
// 0x0014
struct FPetReactedToFoodTelemetryEvent
{
	struct FGuid                                       FeedingInteractionId;                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Pets_EPetFeedingReactionType>          FeedingReaction;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PKTL[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
