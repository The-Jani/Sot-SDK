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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TestUtilities.EventTestEventWithId
// 0x0004
struct FEventTestEventWithId
{
	int                                                Id;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct TestUtilities.EventOtherTestEvent
// 0x0001
struct FEventOtherTestEvent
{
	unsigned char                                      UnknownData_FS7D[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct TestUtilities.EventTestEvent
// 0x0001
struct FEventTestEvent
{
	unsigned char                                      UnknownData_WZI2[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
