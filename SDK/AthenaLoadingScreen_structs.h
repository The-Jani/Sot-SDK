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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaLoadingScreen.SlateLoadingScreenImageParams
// 0x0020
struct FSlateLoadingScreenImageParams
{
	struct FStringAssetReference                       ImageAsset;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               ImageTips;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)

};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenStateResponse
// 0x0001
struct FEventAthenaLoadingScreenStateResponse
{
	bool                                               IsVisible;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenStateRequest
// 0x0001
struct FEventAthenaLoadingScreenStateRequest
{
	unsigned char                                      UnknownData_UJU7[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenBlockUntilUIIntialisedClear
// 0x0010
struct FEventAthenaLoadingScreenBlockUntilUIIntialisedClear
{
	struct FString                                     Description;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenBlockUntilUIIntialised
// 0x0010
struct FEventAthenaLoadingScreenBlockUntilUIIntialised
{
	struct FString                                     Description;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenClose
// 0x0001
struct FEventAthenaLoadingScreenClose
{
	unsigned char                                      UnknownData_292R[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenOpen
// 0x0001
struct FEventAthenaLoadingScreenOpen
{
	unsigned char                                      UnknownData_YOIU[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
