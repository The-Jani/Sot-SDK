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

// Class Damage.ExtentEstimationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UExtentEstimationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Damage.ExtentEstimationInterface");
		return ptr;
	}



};

// Class Damage.HitNotificationTargetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHitNotificationTargetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Damage.HitNotificationTargetInterface");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
