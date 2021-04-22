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

// Class RareEngine.RareGameEngine
// 0x0058 (FullSize[0x0B00] - InheritedSize[0x0AA8])
class URareGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData_D24Q[0x58];                                    // 0x0AA8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareEngine.RareGameEngine");
		return ptr;
	}



};

// Class RareEngine.AssetReferencer
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAssetReferencer : public UDataAsset
{
public:
	TArray<TAssetPtr<class UClass>>                    AssetsToReference;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareEngine.AssetReferencer");
		return ptr;
	}



};

// Class RareEngine.AudioHardwareDeviceService
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAudioHardwareDeviceService : public UObject
{
public:
	unsigned char                                      UnknownData_UROJ[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareEngine.AudioHardwareDeviceService");
		return ptr;
	}



};

// Class RareEngine.HitchDiagnosisBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHitchDiagnosisBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareEngine.HitchDiagnosisBlueprintFunctionLibrary");
		return ptr;
	}



	void STATIC_SetHitchThreshold(int InThreshold);
	struct FString STATIC_GetMaxHitchNameThisFrame();
	int STATIC_GetMaxHitchLengthThisFrameMs();
	void STATIC_DumpThisFramesHitchesToLog();
	bool STATIC_DidHitchOccurThisFrame();
};

// Class RareEngine.MemoryUsageVisualiserSettings
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UMemoryUsageVisualiserSettings : public UObject
{
public:
	TArray<struct FMemoryVisualiserCategory>           VisualiserCategories;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareEngine.MemoryUsageVisualiserSettings");
		return ptr;
	}



};

// Class RareEngine.RareHUD
// 0x0000 (FullSize[0x0520] - InheritedSize[0x0520])
class ARareHUD : public AHUD
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareEngine.RareHUD");
		return ptr;
	}



};

// Class RareEngine.StallDetector
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UStallDetector : public UObject
{
public:
	unsigned char                                      UnknownData_MOAK[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    Callback;                                                  // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_13Y7[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareEngine.StallDetector");
		return ptr;
	}



	void Deactivate();
	class UStallDetector* STATIC_CreateStallDetector(float Delay, bool CreateActive);
	void Activate();
};

// Class RareEngine.StaticMeshActorBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStaticMeshActorBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RareEngine.StaticMeshActorBlueprintLibrary");
		return ptr;
	}



	void STATIC_FindAllStaticMeshComponents(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, TArray<struct FStaticMeshComponentList>* OutComponentLists, class ULevel* RestrictToLevel);
	void STATIC_FindAllStaticMeshActors(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, TArray<struct FStaticMeshActorList>* OutActorLists, class ULevel* RestrictToLevel);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
