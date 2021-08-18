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

// BlueprintGeneratedClass BP_TheSunkenCrystal_DriveDownFloatingDebris_05.BP_TheSunkenCrystal_DriveDownFloatingDebris_05_C
// 0x0040 (FullSize[0x0728] - InheritedSize[0x06E8])
class ABP_TheSunkenCrystal_DriveDownFloatingDebris_05_C : public ABuoyantStorageContainer
{
public:
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint5;                               // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint4;                               // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint3;                               // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint2;                               // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint1;                               // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint;                                // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                            Sphere;                                                    // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UTelemetrySubjectComponent*                  TelemetrySubject;                                          // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TheSunkenCrystal_DriveDownFloatingDebris_05.BP_TheSunkenCrystal_DriveDownFloatingDebris_05_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
