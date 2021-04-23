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

// Class CalmWaterMapping.AthenaCalmWaterZone
// 0x0020 (FullSize[0x0450] - InheritedSize[0x0430])
class AAthenaCalmWaterZone : public ACalmWaterZone
{
public:
	unsigned char                                      UnknownData_JEPF[0x20];                                    // 0x0430(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CalmWaterMapping.AthenaCalmWaterZone");
		return ptr;
	}



};

// Class CalmWaterMapping.CalmWaterMappingService
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UCalmWaterMappingService : public UObject
{
public:
	unsigned char                                      UnknownData_DSJU[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CalmWaterMapping.CalmWaterMappingService");
		return ptr;
	}



	float STATIC_GetMaxWindSpeed();
};

// Class CalmWaterMapping.CalmWaterMappingInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCalmWaterMappingInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CalmWaterMapping.CalmWaterMappingInterface");
		return ptr;
	}



	float GetDampeningFactor(const struct FVector2D& InPosition);
	float GetChoppinessFactor(const struct FVector2D& InPosition);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
