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

// ScriptStruct TestUtilities.EventOtherTestEvent
// 0x0001
struct FEventOtherTestEvent
{
	unsigned char                                      UnknownData_X88G[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct TestUtilities.EventTestEvent
// 0x0001
struct FEventTestEvent
{
	unsigned char                                      UnknownData_0L4J[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct TestUtilities.EventTestEventWithId
// 0x0004
struct FEventTestEventWithId
{
	int                                                Id;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
