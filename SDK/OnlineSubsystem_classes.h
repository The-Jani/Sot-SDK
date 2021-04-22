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

// Class OnlineSubsystem.DefaultOnlineEnvironmentSettings
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UDefaultOnlineEnvironmentSettings : public UObject
{
public:
	struct FString                                     EnvironmentId;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	uint32_t                                           TitleId;                                                   // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5IYL[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServiceConfigId;                                           // 0x0040(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     ClientCertificateThumbprint;                               // 0x0050(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystem.DefaultOnlineEnvironmentSettings");
		return ptr;
	}



};

// Class OnlineSubsystem.NamedInterfaces
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UNamedInterfaces : public UObject
{
public:
	TArray<struct FNamedInterface>                     NamedInterfaces;                                           // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FNamedInterfaceDef>                  NamedInterfaceDefs;                                        // 0x0038(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData_Q1J2[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystem.NamedInterfaces");
		return ptr;
	}



};

// Class OnlineSubsystem.TurnBasedMatchInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTurnBasedMatchInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystem.TurnBasedMatchInterface");
		return ptr;
	}



	void OnMatchReceivedTurn(const struct FString& Match, bool bDidBecomeActive);
	void OnMatchEnded(const struct FString& Match);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
