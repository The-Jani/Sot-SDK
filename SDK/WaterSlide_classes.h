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

// Class WaterSlide.WaterSlidePlayerComponent
// 0x0038 (FullSize[0x0118] - InheritedSize[0x00E0])
class UWaterSlidePlayerComponent : public UDoubleIntentComponent
{
public:
	unsigned char                                      UnknownData_R49E[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    PlayerWaterSlideSplashingVFXComponent;                     // 0x00E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UParticleSystem*                             PlayerWaterSlideSplashingVFX;                              // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              SpawnLocationZOffset;                                      // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HF8H[0x14];                                    // 0x00FC(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AWaterSlide*                                 CurrentWaterSlide;                                         // 0x0110(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WaterSlide.WaterSlidePlayerComponent");
		return ptr;
	}



};

// Class WaterSlide.WaterSlideVeeringAnalogInputId
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UWaterSlideVeeringAnalogInputId : public UAnalogInputId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WaterSlide.WaterSlideVeeringAnalogInputId");
		return ptr;
	}



};

// Class WaterSlide.WaterSlideParamsDataAsset
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UWaterSlideParamsDataAsset : public UDataAsset
{
public:
	struct FWaterSlideParams                           WaterSlideParams;                                          // 0x0028(0x001C) (Edit)
	unsigned char                                      UnknownData_PQBK[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WaterSlide.WaterSlideParamsDataAsset");
		return ptr;
	}



};

// Class WaterSlide.WaterSlide
// 0x0068 (FullSize[0x0490] - InheritedSize[0x0428])
class AWaterSlide : public AActor
{
public:
	class USplineComponent*                            SlideSpline;                                               // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class USceneComponent*                             Root;                                                      // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UWaterSlideParamsDataAsset*                  WaterSlideParamsDataAsset;                                 // 0x0438(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UPrimitiveComponent*                         EntranceCollisionComponent;                                // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AWaterSlide*                                 ContinuedWaterSlideRoute;                                  // 0x0448(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AWaterSlide*                                 LeftWaterSlideRoute;                                       // 0x0450(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AWaterSlide*                                 RightWaterSlideRoute;                                      // 0x0458(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               IsEndOfSlide;                                              // 0x0460(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_4N32[0x3];                                     // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     EndOfSlideLaunchForce;                                     // 0x0464(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_QSLV[0x20];                                    // 0x0470(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WaterSlide.WaterSlide");
		return ptr;
	}



	void SetEntranceCollisionComponent(class UPrimitiveComponent* InEntranceCollisionComponent);
	void ComponentBeginOverlapCallBack(class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int InOtherBodyIndex, bool InFromSweep, const struct FHitResult& InSweepResult);
};

// Class WaterSlide.WaterSlideActionStateId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWaterSlideActionStateId : public UActionStateId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WaterSlide.WaterSlideActionStateId");
		return ptr;
	}



};

// Class WaterSlide.WaterSlideCompositeInputHandler
// 0x0030 (FullSize[0x0208] - InheritedSize[0x01D8])
class UWaterSlideCompositeInputHandler : public ULookAtOffsetCompositeInputHandler
{
public:
	unsigned char                                      UnknownData_5607[0x30];                                    // 0x01D8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WaterSlide.WaterSlideCompositeInputHandler");
		return ptr;
	}



	TEnumAsByte<AthenaInput_EInputHandlerResult> OnMoveRight(float Value);
	TEnumAsByte<AthenaInput_EInputHandlerResult> OnMoveForward(float Value);
};

// Class WaterSlide.WaterSlidePlayerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWaterSlidePlayerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WaterSlide.WaterSlidePlayerInterface");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
