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
// Classes
//---------------------------------------------------------------------------

// Class DebugTeleportationFramework.DebugTeleportationLookupInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDebugTeleportationLookupInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DebugTeleportationFramework.DebugTeleportationLookupInterface");
		return ptr;
	}



};

// Class DebugTeleportationFramework.DebugTeleportationPresentationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDebugTeleportationPresentationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DebugTeleportationFramework.DebugTeleportationPresentationInterface");
		return ptr;
	}



};

// Class DebugTeleportationFramework.DebugTeleportationRegistrationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDebugTeleportationRegistrationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DebugTeleportationFramework.DebugTeleportationRegistrationInterface");
		return ptr;
	}



};

// Class DebugTeleportationFramework.DebugTeleportationDestinationService
// 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
class ADebugTeleportationDestinationService : public AActor
{
public:
	unsigned char                                      UnknownData_Q8CH[0x18];                                    // 0x03D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDebugTeleportDestinationEntry>      DebugTeleportationRegistry;                                // 0x03E8(0x0010) (Net, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DebugTeleportationFramework.DebugTeleportationDestinationService");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
