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

// Enum Kraken.ECoordinatedKrakenSpecialEventTypes
enum class Kraken_ECoordinatedKrakenSpecialEventTypes : uint8_t
{
	ECoordinatedKrakenSpecialEventTypes__None = 0,
	ECoordinatedKrakenSpecialEventTypes__OverrideTargetActor = 1,
	ECoordinatedKrakenSpecialEventTypes__ReleaseTargetActor = 2,
	ECoordinatedKrakenSpecialEventTypes__BiteAttackImpact = 3,
	ECoordinatedKrakenSpecialEventTypes__BreathingIn = 4,
	ECoordinatedKrakenSpecialEventTypes__RoarVisuals = 5,
	ECoordinatedKrakenSpecialEventTypes__RoarAttack = 6,
	ECoordinatedKrakenSpecialEventTypes__ECoordinatedKrakenSpecialEventTypes_MAX = 7,

};

// Enum Kraken.ECoordinatedKrakenActionType
enum class Kraken_ECoordinatedKrakenActionType : uint8_t
{
	ECoordinatedKrakenActionType__Normal = 0,
	ECoordinatedKrakenActionType__Appear = 1,
	ECoordinatedKrakenActionType__Disappear = 2,
	ECoordinatedKrakenActionType__ECoordinatedKrakenActionType_MAX = 3,

};

// Enum Kraken.EKrakenBehaviourType
enum class Kraken_EKrakenBehaviourType : uint8_t
{
	EKrakenBehaviourType__Idle     = 0,
	EKrakenBehaviourType__ShipHitting = 1,
	EKrakenBehaviourType__ShipWrapping = 2,
	EKrakenBehaviourType__PlayerGrabbing = 3,
	EKrakenBehaviourType__EKrakenBehaviourType_MAX = 4,

};

// Enum Kraken.EKrakenShipWrappingTentacleState
enum class Kraken_EKrakenShipWrappingTentacleState : uint8_t
{
	EKrakenShipWrappingTentacleState__Dormant = 0,
	EKrakenShipWrappingTentacleState__Wrapping = 1,
	EKrakenShipWrappingTentacleState__AmbientWobble = 2,
	EKrakenShipWrappingTentacleState__EnteringShakeAttack = 3,
	EKrakenShipWrappingTentacleState__ShakeAttack = 4,
	EKrakenShipWrappingTentacleState__ExitingShakeAttack = 5,
	EKrakenShipWrappingTentacleState__HeavyAttack = 6,
	EKrakenShipWrappingTentacleState__Unwrapping = 7,
	EKrakenShipWrappingTentacleState__EKrakenShipWrappingTentacleState_MAX = 8,

};

// Enum Kraken.EKrakenDynamicsStateEvent
enum class Kraken_EKrakenDynamicsStateEvent : uint8_t
{
	EKrakenDynamicsStateEvent__Damage = 0,
	EKrakenDynamicsStateEvent__Knockback = 1,
	EKrakenDynamicsStateEvent__EKrakenDynamicsStateEvent_MAX = 2,

};

// Enum Kraken.EKrakenEQSLockReason
enum class Kraken_EKrakenEQSLockReason : uint8_t
{
	EKrakenEQSLockReason__Spawning = 0,
	EKrakenEQSLockReason__EKrakenEQSLockReason_MAX = 1,

};

// Enum Kraken.EKrakenDespawnReason
enum class Kraken_EKrakenDespawnReason : uint8_t
{
	EKrakenDespawnReason__Invalid  = 0,
	EKrakenDespawnReason__Defeated = 1,
	EKrakenDespawnReason__TimedOutWithNoTargets = 2,
	EKrakenDespawnReason__TimedOutWithTarget = 3,
	EKrakenDespawnReason__Dismissed = 4,
	EKrakenDespawnReason__EKrakenDespawnReason_MAX = 5,

};

// Enum Kraken.EKrakenState
enum class Kraken_EKrakenState : uint8_t
{
	EKrakenState__Spawning         = 0,
	EKrakenState__Active           = 1,
	EKrakenState__Despawning       = 2,
	EKrakenState__EKrakenState_MAX = 3,

};

// Enum Kraken.EKrakenTentacleBehaviourDamageActions
enum class Kraken_EKrakenTentacleBehaviourDamageActions : uint8_t
{
	EKrakenTentacleBehaviourDamageActions__StayActive = 0,
	EKrakenTentacleBehaviourDamageActions__MoveActive = 1,
	EKrakenTentacleBehaviourDamageActions__FleeInactive = 2,
	EKrakenTentacleBehaviourDamageActions__EKrakenTentacleBehaviourDamageActions_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationStateParams
// 0x0010
struct FKrakenShipWrappingTentacleAnimationStateParams
{
	bool                                               Visible;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MLZO[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StartFrame;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EndFrame;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationPhaseCollection
// 0x0080
struct FKrakenShipWrappingTentacleAnimationPhaseCollection
{
	struct FKrakenShipWrappingTentacleAnimationStateParams Dormant;                                                   // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams Wrapping;                                                  // 0x0010(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams AmbientWobble;                                             // 0x0020(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams EnteringShakeAttack;                                       // 0x0030(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams ShakeAttack;                                               // 0x0040(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams ExitingShakeAttack;                                        // 0x0050(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams HeavyAttack;                                               // 0x0060(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams Unwrapping;                                                // 0x0070(0x0010) (Edit, DisableEditOnInstance)

};

// ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationState
// 0x0010
struct FKrakenShipWrappingTentacleAnimationState
{
	uint32_t                                           EpochId;                                                   // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Kraken_EKrakenShipWrappingTentacleState> State;                                                     // 0x0004(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B5JX[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             EndTime;                                                   // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Kraken.KrakenAnchorDynamicsParams
// 0x0000 (0x0028 - 0x0028)
struct FKrakenAnchorDynamicsParams : public FStandardAnchorDynamicsParameters
{

};

// ScriptStruct Kraken.KrakenDynamicsStateEvent
// 0x000C
struct FKrakenDynamicsStateEvent
{
	TEnumAsByte<Kraken_EKrakenDynamicsStateEvent>      Event;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LYXG[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Time;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Kraken.KrakenDynamicsStateFragmentParams
// 0x0020
struct FKrakenDynamicsStateFragmentParams
{
	class UCurveVector*                                TorqueCurve;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaselineTorque;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J0U4[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKrakenDynamicsStateEvent>           Events;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct Kraken.KrakenDynamicsStateParams
// 0x0010
struct FKrakenDynamicsStateParams
{
	TArray<struct FKrakenDynamicsStateFragmentParams>  FragmentParams;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct Kraken.KrakenDynamicsParams
// 0x0050
struct FKrakenDynamicsParams
{
	struct FKrakenDynamicsStateParams                  AmbientWobble;                                             // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenDynamicsStateParams                  EnteringShakeAttack;                                       // 0x0010(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenDynamicsStateParams                  ShakeAttack;                                               // 0x0020(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenDynamicsStateParams                  ExitingShakeAttack;                                        // 0x0030(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenDynamicsStateParams                  HeavyAttack;                                               // 0x0040(0x0010) (Edit, DisableEditOnInstance)

};

// ScriptStruct Kraken.CoordinatedKrakenHeadAction
// 0x0010
struct FCoordinatedKrakenHeadAction
{
	class UClass*                                      State;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              TimeOffset;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FJBU[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.CoordinatedKrakenSpecialEvent
// 0x000C
struct FCoordinatedKrakenSpecialEvent
{
	TEnumAsByte<Kraken_ECoordinatedKrakenSpecialEventTypes> Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HP9C[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeOffset;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_92B6[0x4];                                     // 0x0008(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.CoordinatedKrakenTentacleAction
// 0x0018
struct FCoordinatedKrakenTentacleAction
{
	class UClass*                                      State;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int                                                TentacleIndex;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeOffset;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NL1K[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.CoordinatedKrakenAction
// 0x0320
struct FCoordinatedKrakenAction
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ActionLength;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Kraken_ECoordinatedKrakenActionType>   ActionType;                                                // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KDSU[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCoordinatedKrakenSpecialEvent>      SpecialEvents;                                             // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCoordinatedKrakenTentacleAction>    TentacleActions;                                           // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCoordinatedKrakenHeadAction>        HeadActions;                                               // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FRuntimeVectorCurve                         TargetActorLocationAnimation;                              // 0x0040(0x0170) (Edit)
	struct FRuntimeVectorCurve                         TargetActorRotationAnimation;                              // 0x01B0(0x0170) (Edit)

};

// ScriptStruct Kraken.KrakenShipHittingBehaviourParamsCollection
// 0x0010
struct FKrakenShipHittingBehaviourParamsCollection
{
	TArray<class UKrakenShipHittingBehaviourParamsDataAsset*> Params;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct Kraken.KrakenShipHittingBehaviourImpactParams
// 0x00A0
struct FKrakenShipHittingBehaviourImpactParams
{
	int                                                Weight;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A40P[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  TentacleTransform;                                         // 0x0010(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     ImpactLocation;                                            // 0x0040(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     ImpactForce;                                               // 0x004C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     DamageLocation;                                            // 0x0058(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4W1A[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           NumZonesToDamage;                                          // 0x0068(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_6XGR[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.KrakenShipHittingBehaviourParams
// 0x0060
struct FKrakenShipHittingBehaviourParams
{
	class UClass*                                      ShipSize;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      TentacleType;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FWeightedProbabilityRangeOfRanges           DamageRequiredToCancelImpact;                              // 0x0010(0x0030) (Edit, DisableEditOnInstance)
	float                                              CancellationThreshold;                                     // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ImpactTime;                                                // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LevelsOfDamage;                                            // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_040N[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKrakenShipHittingBehaviourImpactParams> Configurations;                                            // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct Kraken.KrakenWorldSettingsParams
// 0x0001
struct FKrakenWorldSettingsParams
{
	bool                                               KrakenEnabled;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct Kraken.CoordinatedKrakenPhaseAssetEntry
// 0x0040
struct FCoordinatedKrakenPhaseAssetEntry
{
	struct FTransform                                  RelativeAnimationOrigin;                                   // 0x0000(0x0030) (Edit, IsPlainOldData, NoDestructor)
	class UCoordinatedKrakenPhaseActionsDataAsset*     Asset;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T79I[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleTriggerHitReaction
// 0x0004
struct FEventKrakenAnimatedTentacleTriggerHitReaction
{
	int                                                CollisionBoneIndex;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleTentacleDead
// 0x0004
struct FEventKrakenAnimatedTentacleTentacleDead
{
	int                                                TentacleIndex;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleTakenDamage
// 0x0004
struct FEventKrakenAnimatedTentacleTakenDamage
{
	int                                                TentacleIndex;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleTargetVomit
// 0x0004
struct FEventKrakenAnimatedTentacleTargetVomit
{
	unsigned char                                      UnknownData_9IN6[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.EventKrakenAnimatedTentaclePlayerInMouthEnd
// 0x0001
struct FEventKrakenAnimatedTentaclePlayerInMouthEnd
{
	unsigned char                                      UnknownData_3V1Z[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.EventKrakenAnimatedTentaclePlayerInMouthBegin
// 0x0001
struct FEventKrakenAnimatedTentaclePlayerInMouthBegin
{
	unsigned char                                      UnknownData_HGXM[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingEnd
// 0x0001
struct FEventKrakenAnimatedTentacleSuckingEnd
{
	unsigned char                                      UnknownData_DM4M[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingStart
// 0x0001
struct FEventKrakenAnimatedTentacleSuckingStart
{
	unsigned char                                      UnknownData_TBHN[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.EventKrakenWrappingTentacleTellEnd
// 0x0001
struct FEventKrakenWrappingTentacleTellEnd
{
	unsigned char                                      UnknownData_NJCW[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.EventKrakenWrappingTentacleTellBegin
// 0x0001
struct FEventKrakenWrappingTentacleTellBegin
{
	unsigned char                                      UnknownData_WLKD[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingTellEnd
// 0x0001
struct FEventKrakenAnimatedTentacleSuckingTellEnd
{
	unsigned char                                      UnknownData_Y5RU[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingTellBegin
// 0x0001
struct FEventKrakenAnimatedTentacleSuckingTellBegin
{
	unsigned char                                      UnknownData_VDXH[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingTell
// 0x0001
struct FEventKrakenAnimatedTentacleSuckingTell
{
	unsigned char                                      UnknownData_A7R2[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleSubmerge
// 0x0001
struct FEventKrakenAnimatedTentacleSubmerge
{
	unsigned char                                      UnknownData_DT2O[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleEmerge
// 0x0001
struct FEventKrakenAnimatedTentacleEmerge
{
	unsigned char                                      UnknownData_8QZX[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.EventKrakenTentacleEndPlay
// 0x0001
struct FEventKrakenTentacleEndPlay
{
	unsigned char                                      UnknownData_4M2U[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleAnimationStopped
// 0x0001
struct FEventKrakenAnimatedTentacleAnimationStopped
{
	unsigned char                                      UnknownData_FUPU[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleAnimationStarted
// 0x0010
struct FEventKrakenAnimatedTentacleAnimationStarted
{
	class UAnimSequence*                               Animation;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6SSB[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleAuthoritativeAnimationTime
// 0x0004
struct FEventKrakenAnimatedTentacleAuthoritativeAnimationTime
{
	unsigned char                                      UnknownData_K57N[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleStateEntered
// 0x0010
struct FEventKrakenAnimatedTentacleStateEntered
{
	class UClass*                                      State;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      PreviousState;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

};

// ScriptStruct Kraken.EventCoordinatedKrakenPhaseEnded
// 0x0001
struct FEventCoordinatedKrakenPhaseEnded
{
	unsigned char                                      UnknownData_WKML[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.EventKrakenTentacleDestroyed
// 0x0008
struct FEventKrakenTentacleDestroyed
{
	class AActor*                                      KillingBlowInstigator;                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Kraken.EventKrakenDespawned
// 0x0001
struct FEventKrakenDespawned
{
	TEnumAsByte<Kraken_EKrakenDespawnReason>           DespawnReason;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Kraken.EventKrakenSpawned
// 0x0018
struct FEventKrakenSpawned
{
	class AShip*                                       PrimaryShipTarget;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       ConfigSpawnId;                                             // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Kraken.KrakenTentaclesChanceParams
// 0x0028
struct FKrakenTentaclesChanceParams
{
	int                                                NumberOfTentaclesSpawned;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FCKE[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRange                   ProbabilityRange;                                          // 0x0008(0x0020) (Edit, DisableEditOnInstance)

};

// ScriptStruct Kraken.KrakenAnimatedTentacleAnimationBoneFrame
// 0x000C
struct FKrakenAnimatedTentacleAnimationBoneFrame
{
	struct FVector                                     BoneLocation;                                              // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Kraken.KrakenAnimatedTentacleAnimationBoneTrack
// 0x0010
struct FKrakenAnimatedTentacleAnimationBoneTrack
{
	TArray<struct FKrakenAnimatedTentacleAnimationBoneFrame> Frames;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct Kraken.KrakenAnimatedTentacleMappedAnimation
// 0x0010
struct FKrakenAnimatedTentacleMappedAnimation
{
	class UAnimSequence*                               ClientAnimation;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKrakenAnimatedTentacleAnimationDataAsset*   AnimationAsset;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Kraken.KrakenAnimatedTentacleAnimationSpecBone
// 0x0008
struct FKrakenAnimatedTentacleAnimationSpecBone
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Kraken.KrakenAnimatedTentacleTransitionAnimation
// 0x0020
struct FKrakenAnimatedTentacleTransitionAnimation
{
	class UClass*                                      FromState;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              BranchAnimationTimeRemaining;                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AR4H[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAnimSequence*>                       TransitionAnimations;                                      // 0x0010(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct Kraken.KrakenAnimatedTentacleStateAnimationMapping
// 0x0028
struct FKrakenAnimatedTentacleStateAnimationMapping
{
	class UClass*                                      State;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequence*                               Animation;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Loop;                                                      // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O1XJ[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKrakenAnimatedTentacleTransitionAnimation> Transitions;                                               // 0x0018(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct Kraken.KrakenTentacleBehaviourActionChances
// 0x0008
struct FKrakenTentacleBehaviourActionChances
{
	TEnumAsByte<Kraken_EKrakenTentacleBehaviourDamageActions> ActionToTransitionTo;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WX8Q[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WeightedChance;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Kraken.KrakenTentacleBehaviourParams
// 0x00C0
struct FKrakenTentacleBehaviourParams
{
	class UEnvQuery*                                   InactiveSpawnQueryTemplate;                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceOfCannonSideSpawn;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L7BH[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnvQuery*                                   ActiveCannonSideSpawnQueryTemplate;                        // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnvQuery*                                   ActiveNonCannonSideSpawnQueryTemplate;                     // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      TentacleClass;                                             // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              MinScale;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxScale;                                                  // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinPlayRateScale;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxPlayRateScale;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PanicDespawnShipRangeRadius;                               // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PanicDespawnWatercraftRangeRadius;                         // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PanicDespawnTentacleRadius;                                // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PanicDespawnAnimationPlayRateScale;                        // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreDeathAnimationPlayRateScale;                            // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CCD1[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKrakenTentacleBehaviourActionChances> OnDamageActionChances;                                     // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeToSpendInInactiveState;                                // 0x0060(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeToSpendInActiveState;                                  // 0x0090(0x0030) (Edit, DisableEditOnInstance)

};

// ScriptStruct Kraken.KrakenIdleBehaviourParams
// 0x0000 (0x00C0 - 0x00C0)
struct FKrakenIdleBehaviourParams : public FKrakenTentacleBehaviourParams
{

};

// ScriptStruct Kraken.KrakenPlayerGrabbingHoldingStateTransitionChance
// 0x0010
struct FKrakenPlayerGrabbingHoldingStateTransitionChance
{
	float                                              WeightedChance;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3UDY[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      StateToTransitionTo;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

};

// ScriptStruct Kraken.KrakenPlayerGrabbingBehaviourParams
// 0x0028 (0x00E8 - 0x00C0)
struct FKrakenPlayerGrabbingBehaviourParams : public FKrakenTentacleBehaviourParams
{
	float                                              MinUnsuccessfulTargetTimeout;                              // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxUnsuccessfulTargetTimeout;                              // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKrakenPlayerGrabbingHoldingStateTransitionChance> HoldingTransitionChances;                                  // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MinTargetHoldingTime;                                      // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTargetHoldingTime;                                      // 0x00DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetThrowingSpeed;                                       // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_X4TT[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.KrakenServiceSpawnParams
// 0x0080
struct FKrakenServiceSpawnParams
{
	float                                              SpawnLocationDistributionRadius;                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpawnLocationDistributionMinDistanceBetweenPoints;         // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpawnDistanceInFrontOfShip;                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1NOU[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenSpawnAttemptsRange;                             // 0x0010(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenSpawnAttemptsPostSpawnFailure;                  // 0x0040(0x0030) (Edit, DisableEditOnInstance)
	float                                              SpawnChance;                                               // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxConsecutiveFailedSpawnAttempts;                         // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnvQuery*                                   SpawnLocationQuery;                                        // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Kraken.KrakenServiceShipParams
// 0x0020
struct FKrakenServiceShipParams
{
	struct FName                                       Feature;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              ValidShipTypes;                                            // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	class UKrakenParamsDataAsset*                      KrakenParams;                                              // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Kraken.KrakenServiceParams
// 0x00A0
struct FKrakenServiceParams
{
	class UClass*                                      KrakenType;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FKrakenServiceSpawnParams                   SpawnParams;                                               // 0x0008(0x0080) (Edit, DisableEditOnInstance)
	class UKrakenParamsDataAsset*                      DefaultKrakenParams;                                       // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKrakenServiceShipParams>            KrakenParams;                                              // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct Kraken.EventKrakenShipWrappingTentacleStateChanged
// 0x0002
struct FEventKrakenShipWrappingTentacleStateChanged
{
	TEnumAsByte<Kraken_EKrakenShipWrappingTentacleState> PreviousState;                                             // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Kraken_EKrakenShipWrappingTentacleState> NewState;                                                  // 0x0001(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Kraken.EventKrakenTentaclePreUninitializeComponents
// 0x0001
struct FEventKrakenTentaclePreUninitializeComponents
{
	unsigned char                                      UnknownData_Z27L[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.KrakenTentacleDestroyedTelemetryEvent
// 0x0010
struct FKrakenTentacleDestroyedTelemetryEvent
{
	struct FString                                     KrakenId;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)

};

// ScriptStruct Kraken.KrakenDespawnTelemetryEvent
// 0x0018
struct FKrakenDespawnTelemetryEvent
{
	struct FString                                     KrakenId;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<Kraken_EKrakenDespawnReason>           KrakenDespawnReason;                                       // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0B9O[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.KrakenSpawnTelemetryEvent
// 0x0020
struct FKrakenSpawnTelemetryEvent
{
	struct FString                                     KrakenId;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                       ConfigSpawnId;                                             // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourNamedTransform
// 0x0040
struct FKrakenShipWrappingBehaviourNamedTransform
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L42F[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor)

};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWarningParams
// 0x00A0
struct FKrakenShipWrappingBehaviourWarningParams
{
	class UClass*                                      TentacleType;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              TickDuration;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                                 TentacleTimeoutRange;                                      // 0x000C(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_077J[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           TentacleHealthRange;                                       // 0x0020(0x0030) (Edit, DisableEditOnInstance)
	TArray<struct FKrakenShipWrappingBehaviourNamedTransform> TentacleLocations;                                         // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              TentacleTimeout;                                           // 0x0060(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TentacleHealth;                                            // 0x0064(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W1D3[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  TentacleLocation;                                          // 0x0070(0x0030) (Transient, IsPlainOldData, NoDestructor)

};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourTentacleHeadLocations
// 0x0020
struct FKrakenShipWrappingBehaviourTentacleHeadLocations
{
	TArray<struct FKrakenShipWrappingBehaviourNamedTransform> Near;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FKrakenShipWrappingBehaviourNamedTransform> Far;                                                       // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapLocationParams
// 0x00E0
struct FKrakenShipWrappingBehaviourWrapLocationParams
{
	class UClass*                                      TentacleType;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                     WrapLocationAnchorPoint;                                   // 0x0008(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U39U[0xC];                                     // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  TentacleHeadHoldShipLocation;                              // 0x0020(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FKrakenShipWrappingBehaviourTentacleHeadLocations PortTentacleHeadLocations;                                 // 0x0050(0x0020) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourTentacleHeadLocations StarboardTentacleHeadLocations;                            // 0x0070(0x0020) (Edit, DisableEditOnInstance)
	struct FKrakenDynamicsParams                       DynamicsParams;                                            // 0x0090(0x0050) (Edit, DisableEditOnInstance)

};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapLocationWeightedParams
// 0x00F0
struct FKrakenShipWrappingBehaviourWrapLocationWeightedParams
{
	float                                              Weight;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6GX7[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKrakenShipWrappingBehaviourWrapLocationParams Params;                                                    // 0x0010(0x00E0) (Edit, DisableEditOnInstance)

};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapParams
// 0x0140
struct FKrakenShipWrappingBehaviourWrapParams
{
	struct FFloatRange                                 WrapTimeBeforeGivingUpRange;                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ShipInternalWaterLevelToTriggerUnwrap;                     // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W072[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKrakenAnchorDynamicsParams                 AnchorDynamicsParams;                                      // 0x0018(0x0028) (Edit, DisableEditOnInstance)
	TArray<struct FKrakenShipWrappingBehaviourWrapLocationWeightedParams> WrapLocations;                                             // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              WrapTimeBeforeGivingUp;                                    // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4FBW[0xC];                                     // 0x0054(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKrakenShipWrappingBehaviourWrapLocationParams WrapLocation;                                              // 0x0060(0x00E0) (Transient)

};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourTentacleHeadParams
// 0x0048
struct FKrakenShipWrappingBehaviourTentacleHeadParams
{
	class UClass*                                      TentacleType;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FWeightedProbabilityRangeOfRanges           DamageRequiredToRelocate;                                  // 0x0008(0x0030) (Edit, DisableEditOnInstance)
	float                                              RelocationThreshold;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceOfSwitchingSides;                                    // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceOfSelectingNearLocationAfterSwitchingSides;          // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceOfSelectingSelectingDifferentDistanceFromShipWhenRemaningOnSameSide; // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourShakeAttackParams
// 0x0068
struct FKrakenShipWrappingBehaviourShakeAttackParams
{
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenShakeAttackAttempts;                            // 0x0000(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           AttackDuration;                                            // 0x0030(0x0030) (Edit, DisableEditOnInstance)
	uint32_t                                           MaxFailedShakeAttackAttempts;                              // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceOfShake;                                             // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourHeavyAttackParams
// 0x00D8
struct FKrakenShipWrappingBehaviourHeavyAttackParams
{
	struct FWeightedProbabilityRangeOfRanges           AttackDuration;                                            // 0x0000(0x0030) (Edit, DisableEditOnInstance)
	float                                              ChanceOfEnteringHeavyAttack;                               // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKnockBackInfo                              ExteriorKnockbackParams;                                   // 0x0034(0x0050) (Edit, DisableEditOnInstance)
	struct FKnockBackInfo                              InteriorKnockbackParams;                                   // 0x0084(0x0050) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_5099[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourDamageParams
// 0x0070
struct FKrakenShipWrappingBehaviourDamageParams
{
	float                                              ChanceOfDamagingBottomDeckDamageHoles;                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceThatExistingHolesWillBeDamaged;                      // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LevelsOfDamage;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1UO5[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           NumHolesToDamageRange;                                     // 0x0010(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           DamageIntervalRange;                                       // 0x0040(0x0030) (Edit, DisableEditOnInstance)

};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourHealthParams
// 0x0038
struct FKrakenShipWrappingBehaviourHealthParams
{
	struct FWeightedProbabilityRangeOfRanges           HealthReductionRequiredToUnwrapTheShipRange;               // 0x0000(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_JHJ3[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourParams
// 0x0420
struct FKrakenShipWrappingBehaviourParams
{
	class UClass*                                      ShipSize;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y0U4[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKrakenShipWrappingBehaviourWarningParams   WarningParams;                                             // 0x0010(0x00A0) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourWrapParams      WrapParams;                                                // 0x00B0(0x0140) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourTentacleHeadParams TentacleHeadParams;                                        // 0x01F0(0x0048) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourShakeAttackParams ShakeAttackParams;                                         // 0x0238(0x0068) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourHeavyAttackParams HeavyAttackParams;                                         // 0x02A0(0x00D8) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourDamageParams    DamageParams;                                              // 0x0378(0x0070) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourHealthParams    HealthParams;                                              // 0x03E8(0x0038) (Edit, DisableEditOnInstance)

};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourParamsCollection
// 0x0010
struct FKrakenShipWrappingBehaviourParamsCollection
{
	TArray<class UKrakenShipWrappingBehaviourParamsDataAsset*> Params;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct Kraken.KrakenBehaviourParams
// 0x0068
struct FKrakenBehaviourParams
{
	TEnumAsByte<Kraken_EKrakenBehaviourType>           Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WC5O[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           MaxInstancesOfBehaviourAllowed;                            // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedProbabilityRangeOfRanges           TargetTimeout;                                             // 0x0008(0x0030) (Edit, DisableEditOnInstance)
	class UKrakenIdleBehaviourParamsDataAsset*         IdleParams;                                                // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKrakenShipWrappingBehaviourParamsCollection ShipWrappingParams;                                        // 0x0040(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipHittingBehaviourParamsCollection ShipHittingParams;                                         // 0x0050(0x0010) (Edit, DisableEditOnInstance)
	class UKrakenPlayerGrabbingBehaviourParamsDataAsset* PlayerGrabbingParams;                                      // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Kraken.KrakenTentacleParams
// 0x0050
struct FKrakenTentacleParams
{
	struct FWeightedProbabilityRangeOfRanges           TentacleHealth;                                            // 0x0000(0x0030) (Edit, DisableEditOnInstance)
	struct FFloatRange                                 InactiveToActiveTentacleTimeout;                           // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              InactiveToActiveTentacleTimeoutThresholdInSeconds;         // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceOfInactiveToActiveTentacle;                          // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceOfInactiveToActiveTentacleOnDeathOrFlee;             // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8EXQ[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.KrakenWeightedBehaviour
// 0x0008
struct FKrakenWeightedBehaviour
{
	int                                                Weight;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Kraken_EKrakenBehaviourType>           BehaviourType;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YO34[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.KrakenParams
// 0x0160
struct FKrakenParams
{
	class UClass*                                      MurkClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UGeneratedLocationsDataAsset*                PotentialTentacleSpawnLocations;                           // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedProbabilityRange                   NumberOfTentaclesToSpawn;                                  // 0x0010(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FKrakenTentaclesChanceParams>        TentaclesRequiredToDismissKraken;                          // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              TickFrequencyToLookForNewBehaviours;                       // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OperatingAreaRadius;                                       // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinimumOperatingAreaMovementDeltaToInvalidateLocations;    // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RadiusToleranceBeforeOperatingAreaDespawn;                 // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKrakenTentaclesChanceParams>        NumTentacleInstancesToAssignToShip;                        // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              GlobalPlayRateScale;                                       // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                                 NewTargetTimeout;                                          // 0x0064(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFloatRange                                 UnavailableTargetTimeout;                                  // 0x0074(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BFFC[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKrakenTentacleParams                       TentacleParams;                                            // 0x0088(0x0050) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           DismissTimeoutWhenNoTargets;                               // 0x00D8(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           DismissTimeoutWithNewTarget;                               // 0x0108(0x0030) (Edit, DisableEditOnInstance)
	TArray<struct FKrakenWeightedBehaviour>            ShipInteractingBehaviourWeights;                           // 0x0138(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FKrakenBehaviourParams>              Behaviours;                                                // 0x0148(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              DamageAmountToTriggerAudioComponentNotification;           // 0x0158(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VIJM[0x4];                                     // 0x015C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.KrakenShipWrappingTentacleVFXParams
// 0x0028
struct FKrakenShipWrappingTentacleVFXParams
{
	class UParticleSystem*                             VFX;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TriggerTime;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x0018(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4G5L[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Kraken.KrakenShipWrappingTentacleParams
// 0x00F0
struct FKrakenShipWrappingTentacleParams
{
	struct FKrakenShipWrappingTentacleAnimationPhaseCollection AnimationStates;                                           // 0x0000(0x0080) (Edit, DisableEditOnInstance)
	float                                              TimeIntoWrappingToDisableInteractables;                    // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeIntoUnwrappingToEnableInteractables;                   // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeIntoWrappingToEnableCollisions;                        // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeIntoUnwrappingToDisableCollisions;                     // 0x008C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeIntoEnteringShakeAttackToEnableCollisions;             // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeIntoExitingShakeAttackToDisableCollisions;             // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HighDetailAnimationStreamingDistance;                      // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A3JO[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKrakenShipWrappingTentacleVFXParams        WrappingOutOfWaterSplashVFX;                               // 0x00A0(0x0028) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleVFXParams        WrappingIntoWaterSplashVFX;                                // 0x00C8(0x0028) (Edit, DisableEditOnInstance)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
