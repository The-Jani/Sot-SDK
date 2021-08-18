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

// ScriptStruct CustomDeath.SetShouldUseRevivalFlowData
// 0x0008
struct FSetShouldUseRevivalFlowData
{
	int                                                PlayerNetGUID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldUseRevivalFlow;                                     // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8C2Y[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct CustomDeath.SetShouldSkipFerryOfTheDamnedData
// 0x0008
struct FSetShouldSkipFerryOfTheDamnedData
{
	int                                                PlayerNetGUID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldSkipFerryOfTheDamned;                               // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_18HA[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct CustomDeath.GameModeDeathPenaltyRespawnTimerData
// 0x0004
struct FGameModeDeathPenaltyRespawnTimerData
{
	float                                              SpawnTimer;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct CustomDeath.SetCustomPlayerStartData
// 0x0008
struct FSetCustomPlayerStartData
{
	int                                                PlayerNetGUID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerStartActorNetID;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct CustomDeath.CustomDeathConfiguration
// 0x0018
struct FCustomDeathConfiguration
{
	unsigned char                                      UnknownData_BCH8[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct CustomDeath.ResetCustomConfigForPlayerData
// 0x0004
struct FResetCustomConfigForPlayerData
{
	int                                                PlayerNetGUID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct CustomDeath.KillPlayerData
// 0x0004
struct FKillPlayerData
{
	int                                                PlayerNetGUID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct CustomDeath.ForcePlayerRespawnData
// 0x0008
struct FForcePlayerRespawnData
{
	int                                                PlayerNetGUID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bRespawnAsGhost;                                           // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WA8H[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct CustomDeath.DestroyCustomPlayerStartData
// 0x0018
struct FDestroyCustomPlayerStartData
{
	int                                                PlayerStartActorNetID;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J67K[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Tag;                                                       // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash)

};

// ScriptStruct CustomDeath.CustomPlayerStartConfigData
// 0x0030
struct FCustomPlayerStartConfigData
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V6DK[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Rotation;                                                  // 0x0010(0x0010) (IsPlainOldData, NoDestructor)
	TArray<struct FString>                             Tags;                                                      // 0x0020(0x0010) (ZeroConstructor)

};

// ScriptStruct CustomDeath.KillCrewData
// 0x0010
struct FKillCrewData
{
	struct FGuid                                       CrewNetGUID;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
