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

// ScriptStruct JsonConvertersTests.TestStructWithPropertyFlag
// 0x0008
struct FTestStructWithPropertyFlag
{
	float                                              FieldWithFlag;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FieldWithoutFlag;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct JsonConvertersTests.TestStructWithOneField
// 0x0004
struct FTestStructWithOneField
{
	float                                              TestField;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct JsonConvertersTests.TestStructWithNestedStruct
// 0x0004
struct FTestStructWithNestedStruct
{
	struct FTestStructWithOneField                     TestStructField;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
