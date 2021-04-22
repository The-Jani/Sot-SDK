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

// Enum Tales.ETaleQuestStepBeginMode
enum class Tales_ETaleQuestStepBeginMode : uint8_t
{
	ETaleQuestStepBeginMode__Cold  = 0,
	ETaleQuestStepBeginMode__Warm  = 1,
	ETaleQuestStepBeginMode__ETaleQuestStepBeginMode_MAX = 2,

};

// Enum Tales.ETaleQuestStepState
enum class Tales_ETaleQuestStepState : uint8_t
{
	ETaleQuestStepState__Inactive  = 0,
	ETaleQuestStepState__Active    = 1,
	ETaleQuestStepState__PendingCompletion = 2,
	ETaleQuestStepState__Completed = 3,
	ETaleQuestStepState__ETaleQuestStepState_MAX = 4,

};

// Enum Tales.ELostShipmentsIslandTypes
enum class Tales_ELostShipmentsIslandTypes : uint8_t
{
	ELostShipmentsIslandTypes__Feature = 0,
	ELostShipmentsIslandTypes__Resource = 1,
	ELostShipmentsIslandTypes__Seapost = 2,
	ELostShipmentsIslandTypes__Outpost = 3,
	ELostShipmentsIslandTypes__Fort = 4,
	ELostShipmentsIslandTypes__ELostShipmentsIslandTypes_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Tales.TaleQuestCargoRunContractItem
// 0x0018
struct FTaleQuestCargoRunContractItem
{
	class UClass*                                      ItemToCollect;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3LW3[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Tales.CriticalActorDelegateData
// 0x0048
struct FCriticalActorDelegateData
{
	class AActor*                                      CriticalActor;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       FailureMessage;                                            // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_9O71[0x20];                                    // 0x0008(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_GKTW[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tales.CriticalActorWrapper
// 0x0040
struct FCriticalActorWrapper
{
	class AActor*                                      CriticalActor;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_610I[0x38];                                    // 0x0008(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct Tales.PhasedItem
// 0x0028
struct FPhasedItem
{
	class AItemProxy*                                  ItemProxy;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AItemInfo*                                   ItemInfo;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Tracked;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FS87[0x17];                                    // 0x0011(0x0017) MISSED OFFSET (PADDING)

};

// ScriptStruct Tales.PhasedActor
// 0x0018
struct FPhasedActor
{
	class AActor*                                      MapActor;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IH43[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tales.QuestVariableActorArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableActorArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableObjectArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableObjectArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableClassArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableClassArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableSetEQSTaleContextValue
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableSetEQSTaleContextValue : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableLinkEQSContext
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableLinkEQSContext : public FQuestVariable
{

};

// ScriptStruct Tales.ParticpantToolGroup
// 0x0020
struct FParticpantToolGroup
{
	unsigned char                                      UnknownData_PEIT[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct Tales.QuestVariableRotator
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableRotator : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableAny
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableAny : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableActorAssetType
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableActorAssetType : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariablePrioritisedPrompt
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariablePrioritisedPrompt : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableTaleResourceHandle
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableTaleResourceHandle : public FQuestVariable
{

};

// ScriptStruct Tales.ActorSpawnedAutomationEvent
// 0x0008
struct FActorSpawnedAutomationEvent
{
	TWeakObjectPtr<class AActor>                       Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)

};

// ScriptStruct Tales.EventSpawnedTallTaleQuestItem
// 0x0001
struct FEventSpawnedTallTaleQuestItem
{
	unsigned char                                      UnknownData_28CO[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Tales.TaleQuestSelectorServiceSeedSetTelemetryEvent
// 0x0004
struct FTaleQuestSelectorServiceSeedSetTelemetryEvent
{
	int                                                Seed;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Tales.StepMerchantItemDesc
// 0x0040
struct FStepMerchantItemDesc
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_R9O0[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UTexture*                                    Icon;                                                      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Tales.QuestVariableItemDescTypeArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableItemDescTypeArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableTexture
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableTexture : public FQuestVariable
{

};

// ScriptStruct Tales.TaleQuestDesc
// 0x0058 (0x0080 - 0x0028)
struct FTaleQuestDesc : public FQuestDesc
{
	class UTaleQuestStepDesc*                          Root;                                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Definition;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       TaleFailMessage;                                           // 0x0038(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_J89Q[0x20];                                    // 0x0038(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       TaleFailBannerTag;                                         // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldFireStartTallTaleTrackedObjective;                   // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Development;                                               // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2L3H[0x6];                                     // 0x007A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Tales.TaleQuestDeliverableItem
// 0x0040
struct FTaleQuestDeliverableItem
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_FI89[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UTexture*                                    Icon;                                                      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Tales.QuestVariableBountyTargetArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableBountyTargetArray : public FQuestVariable
{

};

// ScriptStruct Tales.StepBountyTargetDesc
// 0x0040
struct FStepBountyTargetDesc
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_SFGO[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UTexture*                                    Portrait;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Tales.IslandTypeWeights
// 0x0014
struct FIslandTypeWeights
{
	float                                              FeatureIslandWeight;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ResourceIslandWeight;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OutpostIslandWeight;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SeapostIslandWeight;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FortIslandWeight;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Tales.SplineFootprintPathTool
// 0x0001
struct FSplineFootprintPathTool
{
	unsigned char                                      UnknownData_EQNN[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Tales.TaleQuestDeliveryRequest
// 0x0038
struct FTaleQuestDeliveryRequest
{
	int                                                Id;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4I3P[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMerchantContractItemDesc                   Item;                                                      // 0x0008(0x0028) (Edit, BlueprintVisible)
	int                                                NumToDeliver;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumToAllocate;                                             // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Tales.MigrationActionPair
// 0x0010
struct FMigrationActionPair
{
	struct FTaleResourceHandle                         AllocatedResourceHandle;                                   // 0x0000(0x0008)
	class UTaleMigrationAction*                        MigrationAction;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Tales.QuestVariableArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableItemDescType
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableItemDescType : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableItemInfo
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableItemInfo : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableMerchantItemArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableMerchantItemArray : public FQuestVariable
{

};

// ScriptStruct Tales.QuestVariableMerchantItem
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableMerchantItem : public FQuestVariable
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
