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
// Classes
//---------------------------------------------------------------------------

// Class VoiceGameChat.PlayfabPartyVoiceChannel
// 0x0020 (FullSize[0x00B0] - InheritedSize[0x0090])
class UPlayfabPartyVoiceChannel : public UVoiceChannel
{
public:
	unsigned char                                      UnknownData_2VPG[0x20];                                    // 0x0090(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VoiceGameChat.PlayfabPartyVoiceChannel");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
