#pragma once

// Name: S, Version: 2.2.1


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

// Enum NetworkRegions.ENetworkRegion
enum class NetworkRegions_ENetworkRegion : uint8_t
{
	ENetworkRegion__MainWorld      = 0,
	ENetworkRegion__DeepSea        = 1,
	ENetworkRegion__Max            = 2,
	ENetworkRegion__ENetworkRegion_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NetworkRegions.RegionAssetsList
// 0x0018
struct FRegionAssetsList
{
	TEnumAsByte<NetworkRegions_ENetworkRegion>         Region;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3XWI[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FStringAssetReference>               CachedAssetsForRegion;                                     // 0x0008(0x0010) (ZeroConstructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
