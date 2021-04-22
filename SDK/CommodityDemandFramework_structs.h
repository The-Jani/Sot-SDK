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

// Enum CommodityDemandFramework.ECommodityDemand
enum class CommodityDemandFramework_ECommodityDemand : uint8_t
{
	ECommodityDemand__None         = 0,
	ECommodityDemand__Low          = 1,
	ECommodityDemand__Normal       = 2,
	ECommodityDemand__High         = 3,
	ECommodityDemand__ECommodityDemand_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CommodityDemandFramework.CommoditySelectionType
// 0x0008
struct FCommoditySelectionType
{
	struct FName                                       CommodityType;                                             // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct CommodityDemandFramework.ActiveCommodityDemands
// 0x0020
struct FActiveCommodityDemands
{
	TArray<struct FName>                               CommodityIds;                                              // 0x0000(0x0010) (ZeroConstructor)
	TArray<TEnumAsByte<CommodityDemandFramework_ECommodityDemand>> CommodityDemands;                                          // 0x0010(0x0010) (ZeroConstructor)

};

// ScriptStruct CommodityDemandFramework.ActiveNPCDemands
// 0x0020
struct FActiveNPCDemands
{
	TArray<struct FName>                               NPCIds;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FActiveCommodityDemands>             NPCDemands;                                                // 0x0010(0x0010) (ZeroConstructor)

};

// ScriptStruct CommodityDemandFramework.CommodityTrackingModel
// 0x0020
struct FCommodityTrackingModel
{
	struct FGuid                                       ItemOfferId;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       NPCName;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64_t                                            TickWhenTracked;                                           // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct CommodityDemandFramework.CommodityTypeDataEntry
// 0x0010
struct FCommodityTypeDataEntry
{
	struct FName                                       CommodityType;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       DisplayName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct CommodityDemandFramework.EventCommodityCrateRedeemed
// 0x0018
struct FEventCommodityCrateRedeemed
{
	unsigned char                                      UnknownData_6IDQ[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct CommodityDemandFramework.CommodityRedemptionTrackingModel
// 0x0018
struct FCommodityRedemptionTrackingModel
{
	class UClass*                                      EntitlementDesc;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FName                                       NPCName;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64_t                                            TickWhenTracked;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct CommodityDemandFramework.CommodityDescWithRedeemId
// 0x0010
struct FCommodityDescWithRedeemId
{
	struct FCommoditySelectionType                     RedeemId;                                                  // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	class UClass*                                      RedeemItemDesc;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

};

// ScriptStruct CommodityDemandFramework.EntitlementToRedeemItems
// 0x0018
struct FEntitlementToRedeemItems
{
	class UClass*                                      RequiredEntitlement;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FCommodityDescWithRedeemId>          RedeemItems;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct CommodityDemandFramework.PlayerToOwnedRedeemableEntitlements
// 0x0018
struct FPlayerToOwnedRedeemableEntitlements
{
	class AController*                                 OwningController;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              RedeemableEntitlements;                                    // 0x0008(0x0010) (ZeroConstructor, UObjectWrapper)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
