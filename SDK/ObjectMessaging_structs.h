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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ObjectMessaging.ObjectMessagingDispatcher
// 0x00A0
struct FObjectMessagingDispatcher
{
	unsigned char                                      UnknownData_1E5J[0xA0];                                    // 0x0000(0x00A0) MISSED OFFSET (PADDING)

};

// ScriptStruct ObjectMessaging.ObjectMessagingDispatcherHandle
// 0x0008
struct FObjectMessagingDispatcherHandle
{
	unsigned char                                      UnknownData_MORR[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct ObjectMessaging.ObjectMessagingObjectScoper
// 0x0050
struct FObjectMessagingObjectScoper
{
	unsigned char                                      UnknownData_V9W3[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct ObjectMessaging.ObjectMessagingHandle
// 0x0048
struct FObjectMessagingHandle
{
	unsigned char                                      UnknownData_Q1YE[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStruct*                                     EventType;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8VP5[0x38];                                    // 0x0010(0x0038) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
