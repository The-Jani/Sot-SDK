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

// ScriptStruct AthenaServerMigration.IncomingMigrationPreventionZone
// 0x000C
struct FIncomingMigrationPreventionZone
{
	struct FVector2D                                   Location;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct AthenaServerMigration.ServerMigrationSetupRequestEvent
// 0x0001
struct FServerMigrationSetupRequestEvent
{
	unsigned char                                      UnknownData_9EF7[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AthenaServerMigration.ServerMigrationSetupCompleteEvent
// 0x0001
struct FServerMigrationSetupCompleteEvent
{
	unsigned char                                      UnknownData_W9CZ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AthenaServerMigration.PrepareForWorldSwitchRpc
// 0x0000 (0x0010 - 0x0010)
struct FPrepareForWorldSwitchRpc : public FBoxedRpc
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
