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
// Classes
//---------------------------------------------------------------------------

// Class Wind.WindServiceParamsFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWindServiceParamsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Wind.WindServiceParamsFunctionLibrary");
		return ptr;
	}



	bool STATIC_AreWindServiceParamsEqual(const struct FWindServiceParams& Params1, const struct FWindServiceParams& Params2);
};

// Class Wind.WindZoneComponent
// 0x0090 (FullSize[0x0340] - InheritedSize[0x02B0])
class UWindZoneComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_9H6G[0x8];                                     // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWindTurbulenceParameters                   TurbulenceParams;                                          // 0x02B8(0x0070) (Edit, BlueprintVisible)
	struct FWindZoneParams                             WindZoneParams;                                            // 0x0328(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_P3VH[0x8];                                     // 0x0338(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Wind.WindZoneComponent");
		return ptr;
	}



};

// Class Wind.TestWindZoneComponent
// 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
class UTestWindZoneComponent : public UWindZoneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Wind.TestWindZoneComponent");
		return ptr;
	}



};

// Class Wind.WindZoneInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWindZoneInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Wind.WindZoneInterface");
		return ptr;
	}



	struct FWindZoneParams GetWindZoneParams();
	struct FVector2D GetWindZoneLocation();
	struct FWindZoneTurbulence GetTurbulence(const struct FVector& Location);
};

// Class Wind.WindInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWindInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Wind.WindInterface");
		return ptr;
	}



	void UnregisterWindZone(const TScriptInterface<class UWindZoneInterface>& InWindZone);
	void TriggerChange(bool ChangeInstantly);
	void SetParams(const struct FWindServiceParams& Params);
	void SetGlobalWindVector(const struct FVector& InWindVector);
	void SetGlobalWindMagnitude(float InWindMagnitude);
	void SetGlobalWindDirection(const struct FVector& InWindDirection);
	void SetGlobalWindAngle(float InAngle);
	void RegisterWindZone(const TScriptInterface<class UWindZoneInterface>& InWindZone);
	TScriptInterface<class UWindZoneInterface> GetWindZoneAtLocation(const struct FVector& SamplePosition);
	struct FVector GetWindVector(const struct FVector& SamplePosition);
	float GetWindMagnitude(const struct FVector& SamplePosition);
	struct FVector GetWindDirection(const struct FVector& SamplePosition);
	float GetWindAngle(const struct FVector& SamplePosition);
	struct FWindZoneTurbulence GetTurbulenceForTrees(const struct FVector& SamplePosition);
	struct FWindZoneTurbulence GetTurbulence(const struct FVector& SamplePosition);
	float GetMaxWindMagnitude();
};

// Class Wind.DebugWindInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDebugWindInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Wind.DebugWindInterface");
		return ptr;
	}



};

// Class Wind.MockWindService
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UMockWindService : public UObject
{
public:
	unsigned char                                      UnknownData_67JL[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Wind.MockWindService");
		return ptr;
	}



};

// Class Wind.TestWindInterface
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UTestWindInterface : public UObject
{
public:
	unsigned char                                      UnknownData_B0F4[0x30];                                    // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TScriptInterface<class UWindZoneInterface>> WindZones;                                                 // 0x0058(0x0010) (ZeroConstructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Wind.TestWindInterface");
		return ptr;
	}



};

// Class Wind.TestWindZone
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UTestWindZone : public UObject
{
public:
	unsigned char                                      UnknownData_B18L[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Wind.TestWindZone");
		return ptr;
	}



};

// Class Wind.WindFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWindFunctions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Wind.WindFunctions");
		return ptr;
	}



	void STATIC_SetDefaultWindBlowingNorth(class UObject* WorldContextObject);
	struct FVector STATIC_GetWindAtLocation(class UObject* WorldContextObject, const struct FVector& WorldPosition);
};

// Class Wind.WindService
// 0x0120 (FullSize[0x0548] - InheritedSize[0x0428])
class AWindService : public AActor
{
public:
	unsigned char                                      UnknownData_37A9[0x10];                                    // 0x0428(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AWindDirectionalSource*                      GlobalWindSource;                                          // 0x0438(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WFOQ[0x10];                                    // 0x0440(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentWindAngle;                                          // 0x0450(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentWindMagnitude;                                      // 0x0454(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HN0K[0xE0];                                    // 0x0458(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TScriptInterface<class UWindZoneInterface>> WindZones;                                                 // 0x0538(0x0010) (ZeroConstructor, Transient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Wind.WindService");
		return ptr;
	}



	void OnRep_WindMagnitude();
	void OnRep_WindAngle();
	struct FWindServiceParams GetWindParams();
};

// Class Wind.DebugWindService
// 0x0010 (FullSize[0x0558] - InheritedSize[0x0548])
class ADebugWindService : public AWindService
{
public:
	unsigned char                                      UnknownData_NFBI[0x10];                                    // 0x0548(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Wind.DebugWindService");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
