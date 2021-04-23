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

// Class SpireFramework.HeightTriggerableAudioComponentParams
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UHeightTriggerableAudioComponentParams : public UDataAsset
{
public:
	class UWwiseObjectPoolWrapper*                     Pool;                                                      // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RisingOneShot;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RisingStart;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 RisingStop;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 LoweringStart;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 LoweringStop;                                              // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.HeightTriggerableAudioComponentParams");
		return ptr;
	}



};

// Class SpireFramework.HeightTriggerableEffectsComponent
// 0x0088 (FullSize[0x0150] - InheritedSize[0x00C8])
class UHeightTriggerableEffectsComponent : public UActorComponent
{
public:
	class UHeightTriggerableAudioComponentParams*      AudioParams;                                               // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActorComponentSelector                     EmitterOwner;                                              // 0x00D0(0x0010) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	struct FVector                                     EmitterOffset;                                             // 0x00E0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RisingAudioTriggerValue;                                   // 0x00EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      CameraShake;                                               // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              ShakeInnerRadius;                                          // 0x00F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShakeOuterRadius;                                          // 0x00FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YFR2[0x50];                                    // 0x0100(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.HeightTriggerableEffectsComponent");
		return ptr;
	}



	void SetMovementDirection(TEnumAsByte<SpireFramework_EDirectionOfMovement> InMovement);
};

// Class SpireFramework.SpireResource
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class ASpireResource : public AActor
{
public:
	unsigned char                                      UnknownData_PT00[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.SpireResource");
		return ptr;
	}



};

// Class SpireFramework.SpireServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USpireServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.SpireServiceInterface");
		return ptr;
	}



};

// Class SpireFramework.SpireService
// 0x0080 (FullSize[0x04A8] - InheritedSize[0x0428])
class ASpireService : public AActor
{
public:
	unsigned char                                      UnknownData_FMJ3[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FServerSpireInfo>                    ServerOnlySpireInfo;                                       // 0x0430(0x0010) (ZeroConstructor)
	TArray<struct FSpireInfo>                          SpireLevels;                                               // 0x0440(0x0010) (Net, ZeroConstructor, RepNotify)
	TArray<struct FSpireInfo>                          PreviousSpireLevels;                                       // 0x0450(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_Y4JI[0x48];                                    // 0x0460(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.SpireService");
		return ptr;
	}



	void OnRep_SpireLevels(TArray<struct FSpireInfo> InPreviousSpireLevels);
};

// Class SpireFramework.SpireShippingDrawDebugActorSphereCollection
// 0x0010 (FullSize[0x0448] - InheritedSize[0x0438])
class ASpireShippingDrawDebugActorSphereCollection : public AShippingDebugActorSphereCollection
{
public:
	TArray<TWeakObjectPtr<class ASpireResource>>       SpireList;                                                 // 0x0438(0x0010) (ZeroConstructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.SpireShippingDrawDebugActorSphereCollection");
		return ptr;
	}



};

// Class SpireFramework.TaleReleaseSpireStepDesc
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UTaleReleaseSpireStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableTaleResourceHandle            SpireHandle;                                               // 0x0030(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleReleaseSpireStepDesc");
		return ptr;
	}



};

// Class SpireFramework.TaleUnloadSpireStep
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UTaleUnloadSpireStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleUnloadSpireStep");
		return ptr;
	}



};

// Class SpireFramework.TaleUnloadSpireStepDesc
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTaleUnloadSpireStepDesc : public UTaleQuestStepDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleUnloadSpireStepDesc");
		return ptr;
	}



};

// Class SpireFramework.TaleLoadSpireStep
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UTaleLoadSpireStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleLoadSpireStep");
		return ptr;
	}



};

// Class SpireFramework.TaleSpireService
// 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
class UTaleSpireService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData_014H[0x28];                                    // 0x0040(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleSpireService");
		return ptr;
	}



};

// Class SpireFramework.TaleSpireServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleSpireServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleSpireServiceDesc");
		return ptr;
	}



};

// Class SpireFramework.TaleLoadSpireStepDesc
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTaleLoadSpireStepDesc : public UTaleQuestStepDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleLoadSpireStepDesc");
		return ptr;
	}



};

// Class SpireFramework.TaleRegisterSpireStep
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UTaleRegisterSpireStep : public UTaleQuestStep
{
public:
	class UTaleRegisterSpireStepDesc*                  StepDesc;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6HYP[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleRegisterSpireStep");
		return ptr;
	}



};

// Class SpireFramework.TaleRegisterSpireStepDesc
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UTaleRegisterSpireStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableVector                        SelectionOriginPoint;                                      // 0x0030(0x0010) (Edit)
	struct FQuestVariableFloat                         PlayerExclusionSelectionRadius;                            // 0x0040(0x0010) (Edit)
	struct FQuestVariableTaleResourceHandle            AllocatedSpireHandle;                                      // 0x0050(0x0010) (Edit)
	struct FQuestVariableVector                        AllocatedSpireLocation;                                    // 0x0060(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleRegisterSpireStepDesc");
		return ptr;
	}



};

// Class SpireFramework.TaleReleaseSpireStep
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UTaleReleaseSpireStep : public UTaleQuestStep
{
public:
	class UTaleReleaseSpireStepDesc*                   StepDesc;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L6YX[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SpireFramework.TaleReleaseSpireStep");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
