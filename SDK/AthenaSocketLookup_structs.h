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

// ScriptStruct AthenaSocketLookup.SocketLookupCache
// 0x0050
struct FSocketLookupCache
{
	unsigned char                                      UnknownData_F3ZL[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct AthenaSocketLookup.SocketPathNode
// 0x0008
struct FSocketPathNode
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct AthenaSocketLookup.SocketPath
// 0x0018
struct FSocketPath
{
	TArray<struct FSocketPathNode>                     Nodes;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData_0NI8[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct AthenaSocketLookup.SocketId
// 0x0020
struct FSocketId
{
	struct FSocketPath                                 path;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FName                                       Name;                                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
