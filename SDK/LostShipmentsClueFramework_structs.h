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

// Enum LostShipmentsClueFramework.EClueSiteLootType
enum class LostShipmentsClueFramework_EClueSiteLootType : uint8_t
{
	EClueSiteLootType__Loot        = 0,
	EClueSiteLootType__Debris      = 1,
	EClueSiteLootType__None        = 2,
	EClueSiteLootType__EClueSiteLootType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LostShipmentsClueFramework.ClueSite
// 0x0020
struct FClueSite
{
	class UClass*                                      SiteType;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClueSiteData*                               SiteData;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ASZ8[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct LostShipmentsClueFramework.LootSpawnedAtClueSite
// 0x0018
struct FLootSpawnedAtClueSite
{
	class UClass*                                      SiteType;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                     SiteLocation;                                              // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NumLoot;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct LostShipmentsClueFramework.ClueSiteLootHistory
// 0x0010
struct FClueSiteLootHistory
{
	TArray<struct FLootSpawnedAtClueSite>              History;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct LostShipmentsClueFramework.WeightedClueDescriptor
// 0x0018
struct FWeightedClueDescriptor
{
	class UClass*                                      Descriptor;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<float>                                      DifficultyWeightings;                                      // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct LostShipmentsClueFramework.RestrictedClueType
// 0x0010
struct FRestrictedClueType
{
	class UClass*                                      Type;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int                                                Max;                                                       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PAFE[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct LostShipmentsClueFramework.ClueSiteLootRestriction
// 0x0010
struct FClueSiteLootRestriction
{
	class UClass*                                      SiteType;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int                                                LootMax;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_49QF[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct LostShipmentsClueFramework.LootToRangeDist
// 0x0028
struct FLootToRangeDist
{
	struct FWeightedProbabilityRange                   NumberOfLootItemsToSpawn;                                  // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UWeightedTreasureChestDescAsset*             WeightedLootDescAsset;                                     // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct LostShipmentsClueFramework.QuestVariableClueSiteArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableClueSiteArray : public FQuestVariable
{

};

// ScriptStruct LostShipmentsClueFramework.QuestVariableClueSite
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableClueSite : public FQuestVariable
{

};

// ScriptStruct LostShipmentsClueFramework.QuestVariableClueDescriptor
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableClueDescriptor : public FQuestVariable
{

};

// ScriptStruct LostShipmentsClueFramework.EventClueObtained
// 0x0020
struct FEventClueObtained
{
	class UClueDescriptor*                             ObtainedClue;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ObtainedSiteType;                                          // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M9XU[0x10];                                    // 0x0010(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct LostShipmentsClueFramework.WeightedClueDestinationDescriptor
// 0x0018
struct FWeightedClueDestinationDescriptor
{
	class UClass*                                      DestinationType;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<float>                                      DifficultyWeightings;                                      // 0x0008(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct LostShipmentsClueFramework.ClueSiteTypeSupportedDescribedByEntry
// 0x0018
struct FClueSiteTypeSupportedDescribedByEntry
{
	class UClass*                                      SiteType;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FWeightedClueDescriptor>             SupportedDescriptors;                                      // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

};

// ScriptStruct LostShipmentsClueFramework.LandClueCreationChoice
// 0x0018
struct FLandClueCreationChoice
{
	class UClass*                                      ClueSiteType;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FName                                       IslandIdentifier;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULandClueCreator*                            ClueCreator;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct LostShipmentsClueFramework.SeaClueCreationChoice
// 0x0020
struct FSeaClueCreationChoice
{
	class UClass*                                      SiteType;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USeaClueCreator*                             ClueCreator;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EO5V[0x10];                                    // 0x0010(0x0010) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
