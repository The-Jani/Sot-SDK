#pragma once

// Name: SoT, Version: 2.1.1


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

// Enum Cooking.ECookingState
enum class Cooking_ECookingState : uint8_t
{
	ECookingState__Raw             = 0,
	ECookingState__Undercooked     = 1,
	ECookingState__Cooked          = 2,
	ECookingState__Burned          = 3,
	ECookingState__Fresh           = 4,
	ECookingState__ECookingState_MAX = 5,

};

// Enum Cooking.ECookingSmokeFeedbackLevel
enum class Cooking_ECookingSmokeFeedbackLevel : uint8_t
{
	ECookingSmokeFeedbackLevel__NotCooking = 0,
	ECookingSmokeFeedbackLevel__Raw = 1,
	ECookingSmokeFeedbackLevel__CookedWarning = 2,
	ECookingSmokeFeedbackLevel__Cooked = 3,
	ECookingSmokeFeedbackLevel__BurnedWarning = 4,
	ECookingSmokeFeedbackLevel__Burned = 5,
	ECookingSmokeFeedbackLevel__ECookingSmokeFeedbackLevel_MAX = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Cooking.CookStartTelemetryEvent
// 0x0030
struct FCookStartTelemetryEvent
{
	struct FString                                     ItemName;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<Cooking_ECookingState>                 CookState;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T4UW[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Location;                                                  // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       CookId;                                                    // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Cooking.CookerSmokeFeedbackEntry
// 0x0010
struct FCookerSmokeFeedbackEntry
{
	TEnumAsByte<Cooking_ECookingSmokeFeedbackLevel>    FeedbackLevel;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_11N7[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             SmokeVFX;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Cooking.OnPlacedItemInCookingPot
// 0x0008
struct FOnPlacedItemInCookingPot
{
	class AItemInfo*                                   ItemToCook;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct Cooking.OnItemStartedCooking
// 0x0010
struct FOnItemStartedCooking
{
	unsigned char                                      UnknownData_8TM4[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Cooking.OnItemStoppedCooking
// 0x0001
struct FOnItemStoppedCooking
{
	unsigned char                                      UnknownData_HSM7[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Cooking.CookEndTelemetryEvent
// 0x0030
struct FCookEndTelemetryEvent
{
	struct FString                                     ItemName;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<Cooking_ECookingState>                 CookState;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G5JO[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Location;                                                  // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       CookId;                                                    // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct Cooking.CookingClientRepresentation
// 0x0068
struct FCookingClientRepresentation
{
	bool                                               Cooking;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HasItem;                                                   // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DV6Q[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AItemInfo*                                   CurrentlyCookingItem;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       CurrentCookingItemDisplayName;                             // 0x0010(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_2J3O[0x20];                                    // 0x0010(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UClass*                                      CurrentCookingItemCategory;                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Cooking_ECookingSmokeFeedbackLevel>    SmokeFeedbackLevel;                                        // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F0FW[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VisibleCookedExtent;                                       // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentItemPlacementAngle;                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CurrentCookableTypeName;                                   // 0x005C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZN2H[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Cooking.CookableComponentSmokeFeedbackTimingEntry
// 0x0008
struct FCookableComponentSmokeFeedbackTimingEntry
{
	float                                              StateDuration;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Cooking_ECookingSmokeFeedbackLevel>    StateFeedbackLevel;                                        // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5BYR[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Cooking.CookingInfo
// 0x000C
struct FCookingInfo
{
	unsigned char                                      UnknownData_6LRO[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
