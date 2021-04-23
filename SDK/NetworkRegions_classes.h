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
// Classes
//---------------------------------------------------------------------------

// Class NetworkRegions.NetworkRegionService
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class UNetworkRegionService : public UObject
{
public:
	unsigned char                                      UnknownData_O3PE[0x90];                                    // 0x0028(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class APlayerController*>                   PlayersThatNeedToBeTicked;                                 // 0x00B8(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NetworkRegions.NetworkRegionService");
		return ptr;
	}



};

// Class NetworkRegions.RegionAssetCacheActor
// 0x0040 (FullSize[0x0468] - InheritedSize[0x0428])
class ARegionAssetCacheActor : public AActor
{
public:
	TArray<struct FRegionAssetsList>                   RegionData;                                                // 0x0428(0x0010) (Edit, ZeroConstructor, Config)
	TArray<class UObject*>                             LoadedAssets;                                              // 0x0438(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData_WOKO[0x20];                                    // 0x0448(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NetworkRegions.RegionAssetCacheActor");
		return ptr;
	}



};

// Class NetworkRegions.NetworkRegionServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNetworkRegionServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NetworkRegions.NetworkRegionServiceInterface");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
