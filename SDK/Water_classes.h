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

// Class Water.AthenaFFTWater
// 0x0028 (FullSize[0x04A0] - InheritedSize[0x0478])
class AAthenaFFTWater : public AFFTWater
{
public:
	unsigned char                                      UnknownData_72L7[0x28];                                    // 0x0478(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.AthenaFFTWater");
		return ptr;
	}



};

// Class Water.WaterEmissionVolumeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWaterEmissionVolumeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.WaterEmissionVolumeInterface");
		return ptr;
	}



};

// Class Water.AthenaWaterEmissionVolume
// 0x0008 (FullSize[0x0440] - InheritedSize[0x0438])
class AAthenaWaterEmissionVolume : public AWaterEmissionVolume
{
public:
	unsigned char                                      UnknownData_06DD[0x8];                                     // 0x0438(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.AthenaWaterEmissionVolume");
		return ptr;
	}



};

// Class Water.FFTWaterInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFFTWaterInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.FFTWaterInterface");
		return ptr;
	}



	void SetExtendedPlaneComponent(class UFFTWaterExtendedPlaneComponent* InFFTWaterComponent);
	void SetComponent(class UFFTWaterComponent* InFFTWaterComponent);
	void SetActor(class AAthenaFFTWater* InFFTWaterActor);
	class UFFTWaterExtendedPlaneComponent* GetExtendedPlaneComponent();
	class UFFTWaterComponent* GetComponent();
	class AAthenaFFTWater* GetActor();
};

// Class Water.WaterProperties
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UWaterProperties : public UObject
{
public:
	TArray<struct FWaterInformation>                   WaterInfo;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.WaterProperties");
		return ptr;
	}



};

// Class Water.WaterInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWaterInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.WaterInterface");
		return ptr;
	}



	bool IsReadyToBeQueried();
	TEnumAsByte<Water_EWaterQueryResult> GetWaterInformationWithScaledChoppyness(const struct FVector& SamplePosition, float* Height, struct FVector2D* ApproxVelocity, struct FVector* Normal, class AActor* Actor, float ChoppynessScalar);
	TEnumAsByte<Water_EWaterQueryResult> GetWaterInformationBatched(TArray<struct FVector2D> SamplePositions, TArray<float>* Heights, TArray<struct FVector2D>* ApproxVelocities, TArray<struct FVector>* Normals, class AActor* Actor);
	TEnumAsByte<Water_EWaterQueryResult> GetWaterInformation(const struct FVector& SamplePosition, float* Height, struct FVector2D* ApproxVelocity, struct FVector* Normal, class AActor* Actor);
	TEnumAsByte<Water_EWaterQueryResult> GetWaterHeightWithScaledChoppyness(const struct FVector& SamplePosition, class AActor* Actor, bool Interpolate, float* Height, float ChoppynessScalar);
	TEnumAsByte<Water_EWaterQueryResult> GetWaterHeight(const struct FVector& SamplePosition, class AActor* Actor, bool Interpolate, float* Height);
	struct FWaterSimPlane GetActorWaterPlane(class AActor* Actor);
	struct FWaterInformation GetActorWaterInformation(class AActor* Actor);
};

// Class Water.FFTWaterService
// 0x0080 (FullSize[0x04B0] - InheritedSize[0x0430])
class AFFTWaterService : public AActor
{
public:
	unsigned char                                      UnknownData_U2BK[0x10];                                    // 0x0430(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class AAthenaFFTWater>              FFTWaterActor;                                             // 0x0440(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper)
	TWeakObjectPtr<class UFFTWaterComponent>           FFTWaterComponent;                                         // 0x0448(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper)
	TWeakObjectPtr<class UFFTWaterExtendedPlaneComponent> ExtendedPlaneComponent;                                    // 0x0450(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper)
	unsigned char                                      UnknownData_QY7E[0x50];                                    // 0x0458(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             ReplicatedServerCreationTime;                              // 0x04A8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.FFTWaterService");
		return ptr;
	}



	void OnRep_FFTWaterComponent();
	void OnRep_FFTWaterActor();
	void OnRep_ExtendedPlaneComponent();
};

// Class Water.FlatWaterPlaneComponent
// 0x0010 (FullSize[0x0570] - InheritedSize[0x0560])
class UFlatWaterPlaneComponent : public UBaseWaterComponent
{
public:
	unsigned char                                      UnknownData_4YFG[0x10];                                    // 0x0560(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.FlatWaterPlaneComponent");
		return ptr;
	}



	void OnActorLeaveWaterPlane(class AActor* Actor);
	void OnActorEnterWaterPlane(class AActor* Actor);
	struct FVector2D ConvertToWaterSpace(const struct FVector& WorldSpacePosition);
};

// Class Water.MockWaterInterface
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UMockWaterInterface : public UObject
{
public:
	unsigned char                                      UnknownData_EPPE[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.MockWaterInterface");
		return ptr;
	}



};

// Class Water.MockWaterServiceWithValidWaterPlane
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UMockWaterServiceWithValidWaterPlane : public UMockWaterInterface
{
public:
	class UFFTWaterComponent*                          DefaultWaterComponent;                                     // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.MockWaterServiceWithValidWaterPlane");
		return ptr;
	}



};

// Class Water.NoSwimWaterId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNoSwimWaterId : public UWaterId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.NoSwimWaterId");
		return ptr;
	}



};

// Class Water.SeaWaterId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USeaWaterId : public UWaterId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.SeaWaterId");
		return ptr;
	}



};

// Class Water.ShipWaterId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UShipWaterId : public UWaterId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.ShipWaterId");
		return ptr;
	}



};

// Class Water.SplashProbeDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class USplashProbeDataAsset : public UDataAsset
{
public:
	TArray<struct FSplashProbe>                        Probes;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.SplashProbeDataAsset");
		return ptr;
	}



};

// Class Water.SplashProbeVFXComponent
// 0x0048 (FullSize[0x0110] - InheritedSize[0x00C8])
class USplashProbeVFXComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_LTEH[0x28];                                    // 0x00C8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USplashProbeDataAsset*                       Probes;                                                    // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActorComponentSelector                     AttachProbesToOwner;                                       // 0x00F8(0x0010) (Edit, DisableEditOnInstance, ContainsInstancedReference)
	class USceneComponent*                             AttachProbesToComponent;                                   // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.SplashProbeVFXComponent");
		return ptr;
	}



};

// Class Water.UndergroundSeaWaterId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUndergroundSeaWaterId : public UWaterId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.UndergroundSeaWaterId");
		return ptr;
	}



};

// Class Water.WaterBuoyancyFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWaterBuoyancyFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.WaterBuoyancyFunctionLibrary");
		return ptr;
	}



	float STATIC_TickBuoyancy(class AActor* InOwner, struct FWaterBuoyancy* InWaterBuoyancy, float InDeltaTime, float InChoppinessScalar, float FakeZOffsetGeneratorScalar);
	void STATIC_SetBuoyancySamplesZOffsetSymmetricalAroundXAxis(struct FWaterBuoyancy* InWaterBuoyancy, float ZOffset);
	void STATIC_SetBuoyancyProbeCurveBlendDebugOverride(struct FWaterBuoyancy* InWaterBuoyancy, float UnaryBlendOverride);
	void STATIC_SetBuoyancyProbeCurveBlend(struct FWaterBuoyancy* InWaterBuoyancy, float Blend, TEnumAsByte<Maths_EBuoyancyBlend> BlendType);
};

// Class Water.WaterBuoyancySampleMovementFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWaterBuoyancySampleMovementFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.WaterBuoyancySampleMovementFunctionLibrary");
		return ptr;
	}



	void STATIC_TickLocalSampleMovement(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement, float DeltaTime);
	void STATIC_StartMovingVolumeSamplesLocallyByRandomConfigurationIndex(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement);
	void STATIC_StartMovingVolumeSamplesLocallyByConfigurationIndex(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement, int ConfigurationIndex);
	void STATIC_StartMovingVolumeSamplesLocally(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement, class UCurveVector* InCenterOfMassOffsetCurve, TArray<struct FBuoyancySampleMovementConfigurationEntry>* NewSampleData, float BuoyancyScalarAtNewPosition, class UCurveFloat* BuoyancyScalarCurve, class UCurveFloat* ProbeMovementCurve, float MoveTime);
};

// Class Water.WaterEmissionVolumeService
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UWaterEmissionVolumeService : public UObject
{
public:
	unsigned char                                      UnknownData_WKZ6[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.WaterEmissionVolumeService");
		return ptr;
	}



};

// Class Water.WaterExclusionSurfaceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWaterExclusionSurfaceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.WaterExclusionSurfaceInterface");
		return ptr;
	}



};

// Class Water.WaterPlaneInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWaterPlaneInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.WaterPlaneInterface");
		return ptr;
	}



};

// Class Water.WaterInteractionComponent
// 0x0020 (FullSize[0x05A0] - InheritedSize[0x0580])
class UWaterInteractionComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData_GSG9[0x20];                                    // 0x0580(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.WaterInteractionComponent");
		return ptr;
	}



	void LeaveWaterPlane(class UBaseWaterComponent* WaterComponent);
	void LeaveWaterExclusionZone();
	bool IsUsingWaterExcludedZone();
	bool IsUsingNonDefaultWaterPlane();
	bool IsInWaterExcludedZone();
	class UBaseWaterComponent* GetWaterPlaneComponent();
	unsigned char GetNumberOfWaterPlanes();
	void EnterWaterPlane(class UBaseWaterComponent* WaterComponent);
	void EnterWaterExclusionZone();
};

// Class Water.WaterPlaneExclusionComponent
// 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
class UWaterPlaneExclusionComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.WaterPlaneExclusionComponent");
		return ptr;
	}



	void OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult);
};

// Class Water.WaterPlaneRetrievalProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWaterPlaneRetrievalProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.WaterPlaneRetrievalProviderInterface");
		return ptr;
	}



};

// Class Water.WaterSplashProbeFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWaterSplashProbeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.WaterSplashProbeFunctionLibrary");
		return ptr;
	}



	void STATIC_TickProbes(class AActor* InOwner, TArray<struct FWaterSplashProbe>* InSplashProbes, float InDeltaTime);
	void STATIC_TickProbe(class AActor* InOwner, struct FWaterSplashProbe* InSplashProbe, float InDeltaTime);
	void STATIC_SetSamplingTime(TArray<struct FWaterSplashProbe>* InSplashProbes, float SamplingTime);
	struct FVector STATIC_GetRelativeWaterHeightChangeSpd(TArray<struct FWaterSplashProbe>* InSplashProbes, int ProbeIndex);
};

// Class Water.WaterSpoutVFXComponent
// 0x0068 (FullSize[0x0130] - InheritedSize[0x00C8])
class UWaterSpoutVFXComponent : public UActorComponent
{
public:
	TArray<struct FWaterSpout>                         WaterSpouts;                                               // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	struct FVector                                     SplashEffectPointBottomZ;                                  // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H1II[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     SpoutParticleSystem;                                       // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     SplashParticleSystem;                                      // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaterSplashDelayMin;                                       // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaterSplashDelayMax;                                       // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SplashEffectVFXOffset;                                     // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7VD5[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWaterSpout>                         ActiveWaterSpouts;                                         // 0x0108(0x0010) (ZeroConstructor, ContainsInstancedReference)
	unsigned char                                      UnknownData_ODJX[0x18];                                    // 0x0118(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.WaterSpoutVFXComponent");
		return ptr;
	}



	void AddSplashVFXSpawnerWithLocation(struct FWaterSpout* WaterSplashLocator);
	void ActivateSplashVFXWithDelay();
};

// Class Water.WaterVolumeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWaterVolumeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Water.WaterVolumeInterface");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
