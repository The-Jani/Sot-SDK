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

// Enum Reviving.EReviveState
enum class Reviving_EReviveState : uint8_t
{
	EReviveState__Revivable        = 0,
	EReviveState__NotRevivable     = 1,
	EReviveState__BeingRevived     = 2,
	EReviveState__Revived          = 3,
	EReviveState__EReviveState_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Reviving.EventRevivableRepresentationReturnedToBody
// 0x0001
struct FEventRevivableRepresentationReturnedToBody
{
	unsigned char                                      UnknownData_MEGJ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Reviving.SuccessfulReviveEvent
// 0x0001
struct FSuccessfulReviveEvent
{
	unsigned char                                      UnknownData_57OY[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Reviving.BeingRevivedStoppedEvent
// 0x0001
struct FBeingRevivedStoppedEvent
{
	unsigned char                                      UnknownData_GGSZ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Reviving.BeingRevivedStartedEvent
// 0x0001
struct FBeingRevivedStartedEvent
{
	unsigned char                                      UnknownData_HBJD[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Reviving.RevivableCharacterGhostlyBodyEvaporateStarted
// 0x0001
struct FRevivableCharacterGhostlyBodyEvaporateStarted
{
	unsigned char                                      UnknownData_KAZZ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Reviving.RevivingWindowEnd
// 0x0001
struct FRevivingWindowEnd
{
	unsigned char                                      UnknownData_F2CH[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Reviving.RevivingWindowStart
// 0x0038
struct FRevivingWindowStart
{
	struct FDamageInstance                             DamageInstance;                                            // 0x0000(0x0028)
	TEnumAsByte<Athena_ECharacterDeathType>            CharacterDeathType;                                        // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HDF3[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACharacter*                                  RevivableCharacter;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Reviving.RevivePlayerActionStateConstructionInfo
// 0x0030 (0x0060 - 0x0030)
struct FRevivePlayerActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	struct FNetActorPtr                                CharacterReviving;                                         // 0x0030(0x0014)
	struct FNetSubObjectPtr                            CharacterBeingRevived;                                     // 0x0044(0x0014)
	class UClass*                                      InputID;                                                   // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

};

// ScriptStruct Reviving.ModeSpecificReviveSettings
// 0x0030
struct FModeSpecificReviveSettings
{
	TEnumAsByte<AthenaEngine_EPlayMode>                AssociatedPlaymode;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7YQU[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DeathCameraBlackFadeDelay;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeathCameraBlackFadeDuration;                              // 0x0008(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeathCameraBlackFadeEventClientTimeout;                    // 0x000C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeathCameraBlackFadeEventServerTimeout;                    // 0x0010(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBeforeEvaporate;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EvaporateDuration;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeathCameraStartDelay;                                     // 0x001C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReviveWindowDuration;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GhostFadeDuration;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReviveSettings*                             CachedReviveSettings;                                      // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Reviving.RevivedActionStateConstructionInfo
// 0x0000 (0x0030 - 0x0030)
struct FRevivedActionStateConstructionInfo : public FActorActionStateConstructionInfo
{

};

// ScriptStruct Reviving.RevivedActionStateParams
// 0x0010
struct FRevivedActionStateParams
{
	float                                              HealthRegained;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReviveDuration;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 ReviveGaspAudio;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Reviving.ReviveableActionStateStarted
// 0x0001
struct FReviveableActionStateStarted
{
	unsigned char                                      UnknownData_NJ0C[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Reviving.EventCharacterDiedDuringReviving
// 0x0008
struct FEventCharacterDiedDuringReviving
{
	class ACharacter*                                  OwningCharacter;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Reviving.EventRevivePlayerActionStateLeft
// 0x0001
struct FEventRevivePlayerActionStateLeft
{
	unsigned char                                      UnknownData_E23G[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Reviving.EventRevivePlayerActionStateEntered
// 0x0001
struct FEventRevivePlayerActionStateEntered
{
	unsigned char                                      UnknownData_OK5Z[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Reviving.EventCharacterFullyRevived
// 0x0001
struct FEventCharacterFullyRevived
{
	unsigned char                                      UnknownData_Y94U[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Reviving.ReviveEndedEarlyEvent
// 0x0001
struct FReviveEndedEarlyEvent
{
	unsigned char                                      UnknownData_AD46[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Reviving.ReviveEffectsValues
// 0x0020
struct FReviveEffectsValues
{
	class UMaterialInstanceDynamic*                    AstralCordPostProcessMID;                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FRK6[0x18];                                    // 0x0008(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Reviving.PlayerInReviveableStateTelemetryEvent
// 0x0001
struct FPlayerInReviveableStateTelemetryEvent
{
	unsigned char                                      UnknownData_XXTR[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Reviving.PlayerRevivalTelemetryEvent
// 0x0001
struct FPlayerRevivalTelemetryEvent
{
	bool                                               Success;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Reviving.PostReviveLocomotionActionStateConstructionInfo
// 0x0000 (0x0030 - 0x0030)
struct FPostReviveLocomotionActionStateConstructionInfo : public FActorActionStateConstructionInfo
{

};

// ScriptStruct Reviving.EventRevivableRepresentationSpawnCompleted
// 0x0001
struct FEventRevivableRepresentationSpawnCompleted
{
	bool                                               FromSwimming;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Reviving.EventRevivableRepresentationSpawnStarted
// 0x0001
struct FEventRevivableRepresentationSpawnStarted
{
	unsigned char                                      UnknownData_Y2DC[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Reviving.ReviveableActionStateConstructionInfo
// 0x0038 (0x0068 - 0x0030)
struct FReviveableActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	class UClass*                                      ActionStateId;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDamageInstance                             DamageInstance;                                            // 0x0038(0x0028)
	TEnumAsByte<Athena_ECharacterDeathType>            CharacterDeathType;                                        // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_ECharacterType>                 CharacterType;                                             // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z7YV[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
