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
// Classes
//---------------------------------------------------------------------------

// Class AthenaServerMigration.MigrationServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMigrationServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaServerMigration.MigrationServiceInterface");
		return ptr;
	}



};

// Class AthenaServerMigration.ServerMigrationGatherableActorInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UServerMigrationGatherableActorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaServerMigration.ServerMigrationGatherableActorInterface");
		return ptr;
	}



};

// Class AthenaServerMigration.AthenaServerMigrationGameAuthorityProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaServerMigrationGameAuthorityProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaServerMigration.AthenaServerMigrationGameAuthorityProviderInterface");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
