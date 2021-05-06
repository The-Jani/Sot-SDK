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
// Classes
//---------------------------------------------------------------------------

// Class SeasonProgression.PlayerSeasonProgressionComponent
// 0x00B0 (FullSize[0x0178] - InheritedSize[0x00C8])
class UPlayerSeasonProgressionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_SWJW[0xB0];                                    // 0x00C8(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SeasonProgression.PlayerSeasonProgressionComponent");
		return ptr;
	}



};

// Class SeasonProgression.IsExcludedFromSeasonProgressionStatCondition
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UIsExcludedFromSeasonProgressionStatCondition : public UTargetedStatCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SeasonProgression.IsExcludedFromSeasonProgressionStatCondition");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
