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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AccountLinking.SteamAccountLinkRequest
// 0x0030
struct FSteamAccountLinkRequest
{
	struct FString                                     NetworkToken;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     NetworkAppId;                                              // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     AppId;                                                     // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
