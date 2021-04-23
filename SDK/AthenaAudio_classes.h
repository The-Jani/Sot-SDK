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

// Class AthenaAudio.AthenaAudioConfig
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UAthenaAudioConfig : public UDataAsset
{
public:
	class UWwiseObjectPoolWrapper*                     ItemProxyPool;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAudio.AthenaAudioConfig");
		return ptr;
	}



};

// Class AthenaAudio.AthenaAudioModuleSettings
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UAthenaAudioModuleSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       AudioConfigAsset;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAudio.AthenaAudioModuleSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
