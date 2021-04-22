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

// Class DeliverableFramework.DeliverableRequirementBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDeliverableRequirementBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRequirementBase");
		return ptr;
	}



};

// Class DeliverableFramework.DeliverableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDeliverableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeliverableFramework.DeliverableInterface");
		return ptr;
	}



};

// Class DeliverableFramework.DeliverableComponent
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UDeliverableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_22RI[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDeliverableRequirementsDataAsset*           DeliveryRequirementsAsset;                                 // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeliverableFramework.DeliverableComponent");
		return ptr;
	}



};

// Class DeliverableFramework.DeliverableRequirementsDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UDeliverableRequirementsDataAsset : public UDataAsset
{
public:
	TArray<class UDeliverableRequirementBase*>         Requirements;                                              // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRequirementsDataAsset");
		return ptr;
	}



};

// Class DeliverableFramework.DeliverableTooltipCustomizerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDeliverableTooltipCustomizerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeliverableFramework.DeliverableTooltipCustomizerInterface");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
