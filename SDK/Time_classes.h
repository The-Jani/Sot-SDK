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

// Class Time.TimeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTimeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Time.TimeInterface");
		return ptr;
	}



	struct FGameTime GetTime();
	struct FDateTime GetSmoothRealWorldTime();
	struct FDateTime GetPreciseRealWorldTime();
	struct FGameTime ConvertRealWorldTimeToGameWorldTime(const struct FDateTime& RealWorldTime);
	struct FDateTime ConvertGameWorldTimeToRealWorldTime(const struct FGameTime& GameWorldTime);
};

// Class Time.CustomizableTimeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCustomizableTimeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Time.CustomizableTimeInterface");
		return ptr;
	}



	void SetTimeScalar(int RequestedTimeScalar);
	void SetSunset(float SunsetHours);
	void SetSunrise(float SunriseHours);
	void SetGameWorldTime(const struct FGameTime& RequestedTime);
	int GetTimeScalar();
	void EnableQueryServiceTime(bool Enable);
};

// Class Time.DebugTimeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDebugTimeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Time.DebugTimeInterface");
		return ptr;
	}



	void SetTimeScalar(int RequestedTimeScalar);
	void SetSunset(float SunsetHours);
	void SetSunrise(float SunriseHours);
	void SetGameWorldTime(const struct FGameTime& RequestedTime);
	int GetTimeScalar();
	void EnableQueryServiceTime(bool Enable);
};

// Class Time.LocationProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULocationProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Time.LocationProviderInterface");
		return ptr;
	}



};

// Class Time.TimeBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTimeBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Time.TimeBlueprintLibrary");
		return ptr;
	}



	struct FReplicatedDateTime STATIC_MakeReplicatedDateTimeFromDateTime(const struct FDateTime& InDateTime);
	struct FDateTime STATIC_MakeDateTimeFromReplicatedDateTime(const struct FReplicatedDateTime& InDateTime);
	struct FDateTime STATIC_MakeDateTimeFromRaw(int Year, int Month, int Day, int Hour, int Minute, int Second, int Millisecond);
	bool STATIC_DateTimesWithinTolerance(const struct FDateTime& FirstDateTime, const struct FDateTime& SecondDateTime, const struct FTimespan& Tolerance);
};

// Class Time.TimeFormatterInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTimeFormatterInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Time.TimeFormatterInterface");
		return ptr;
	}



};

// Class Time.TimeService
// 0x0110 (FullSize[0x0538] - InheritedSize[0x0428])
class ATimeService : public AActor
{
public:
	unsigned char                                      UnknownData_WELX[0x38];                                    // 0x0428(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimespan                                   GameWorldTimeOffset;                                       // 0x0460(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, Protected)
	unsigned char                                      UnknownData_8ZW2[0x4];                                     // 0x0468(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           TimeScalar;                                                // 0x046C(0x0004) (Edit, Net, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	uint32_t                                           NumberOfDaysInEachGameMonth;                               // 0x0470(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VG2W[0x4];                                     // 0x0474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             ServiceTimeQueryRapidFrequencyOffsetMax;                   // 0x0478(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              ServiceTimeQueryRapidFrequencyInSeconds;                   // 0x0480(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              ServiceTimeQueryFrequencyInSeconds;                        // 0x0484(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              ClientTimeUpdateFrequencyInSeconds;                        // 0x0488(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              SunriseTimeHours;                                          // 0x048C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              SunsetTimeHours;                                           // 0x0490(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              LocalTimeUpdateAdjustMaxTimeDelta;                         // 0x0494(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              MinLocalTimeUpdateAdjustPercentageToSlowDown;              // 0x0498(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              MaxLocalTimeUpdateAdjustPercentageToSlowDown;              // 0x049C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              MinLocalTimeUpdateAdjustPercentageToSpeedUp;               // 0x04A0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              MaxLocalTimeUpdateAdjustPercentageToSpeedUp;               // 0x04A4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	uint32_t                                           MaxNumReplicatedTimeEntriesToAverage;                      // 0x04A8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FKMU[0x4C];                                    // 0x04AC(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FReplicatedAuthoritativeTime                ReplicatedServerTime;                                      // 0x04F8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify)
	unsigned char                                      UnknownData_GYBC[0x30];                                    // 0x0508(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Time.TimeService");
		return ptr;
	}



	void OnRep_ReplicatedServerTime();
	void MulticastOnServiceTimeChangedRPC(int64_t ServiceTimeInTicks);
};

// Class Time.DebugTimeService
// 0x0008 (FullSize[0x0540] - InheritedSize[0x0538])
class ADebugTimeService : public ATimeService
{
public:
	unsigned char                                      UnknownData_FEB4[0x8];                                     // 0x0538(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Time.DebugTimeService");
		return ptr;
	}



	void MulticastOnTimeScalarOffsetRPC(int Scalar, int64_t Offset);
};

// Class Time.CustomizableTimeService
// 0x0008 (FullSize[0x0548] - InheritedSize[0x0540])
class ACustomizableTimeService : public ADebugTimeService
{
public:
	unsigned char                                      UnknownData_USTR[0x8];                                     // 0x0540(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Time.CustomizableTimeService");
		return ptr;
	}



	void MulticastOnTimeScalarOffsetRPC(int Scalar, int64_t Offset);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
