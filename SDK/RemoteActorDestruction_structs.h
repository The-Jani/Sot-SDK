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

// ScriptStruct RemoteActorDestruction.DestroyActorData
// 0x0004
struct FDestroyActorData
{
	int                                                ActorNetID;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct RemoteActorDestruction.DestroyAllExistingActorsByClassData
// 0x0010
struct FDestroyAllExistingActorsByClassData
{
	TArray<struct FString>                             ActorClassNames;                                           // 0x0000(0x0010) (ZeroConstructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
