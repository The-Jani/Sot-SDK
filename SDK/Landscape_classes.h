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

// Class Landscape.ControlPointMeshComponent
// 0x0008 (FullSize[0x05C0] - InheritedSize[0x05B8])
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData_LWHK[0x8];                                     // 0x05B8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeInfo
// 0x01E8 (FullSize[0x0210] - InheritedSize[0x0028])
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                            // 0x0028(0x001C) (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGuid                                       LandscapeGuid;                                             // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ComponentSizeQuads;                                        // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SubsectionSizeQuads;                                       // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ComponentNumSubsections;                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DrawScale;                                                 // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D068[0x1A4];                                   // 0x006C(0x01A4) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfo");
		return ptr;
	}



};

// Class Landscape.LandscapeComponent
// 0x0170 (FullSize[0x06C0] - InheritedSize[0x0550])
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                SectionBaseX;                                              // 0x0550(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SectionBaseY;                                              // 0x0554(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ComponentSizeQuads;                                        // 0x0558(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SubsectionSizeQuads;                                       // 0x055C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumSubsections;                                            // 0x0560(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_27DI[0x4];                                     // 0x0564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          OverrideMaterial;                                          // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          OverrideHoleMaterial;                                      // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UMaterialInstanceConstant*                   MaterialInstance;                                          // 0x0578(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                 // 0x0580(0x0010) (ZeroConstructor)
	TArray<class UTexture2D*>                          WeightmapTextures;                                         // 0x0590(0x0010) (ZeroConstructor, TextExportTransient)
	class UTexture2D*                                  XYOffsetmapTexture;                                        // 0x05A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5XBB[0x8];                                     // 0x05A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector4                                    WeightmapScaleBias;                                        // 0x05B0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WeightmapSubsectionOffset;                                 // 0x05C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JBR7[0xC];                                     // 0x05C4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector4                                    HeightmapScaleBias;                                        // 0x05D0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  HeightmapTexture;                                          // 0x05E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash)
	struct FBox                                        CachedLocalBox;                                            // 0x05E8(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                        // 0x0604(0x001C) (ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FGuid>                               IrrelevantLights;                                          // 0x0620(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_43EG[0x10];                                    // 0x0630(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CollisionMipLevel;                                         // 0x0640(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaticLightingResolution;                                  // 0x0644(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ForcedLOD;                                                 // 0x0648(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LODBias;                                                   // 0x064C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       StateId;                                                   // 0x0650(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       BakedTextureMaterialGuid;                                  // 0x0660(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  GIBakedBaseColorTexture;                                   // 0x0670(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      MobileBlendableLayerMask;                                  // 0x0678(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1NTC[0x7];                                     // 0x0679(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          MobileMaterialInterface;                                   // 0x0680(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash)
	class UTexture2D*                                  MobileWeightNormalmapTexture;                              // 0x0688(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W549[0x30];                                    // 0x0690(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeGizmoActor
// 0x0000 (FullSize[0x0428] - InheritedSize[0x0428])
class ALandscapeGizmoActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return ptr;
	}



};

// Class Landscape.LandscapeGizmoActiveActor
// 0x0050 (FullSize[0x0478] - InheritedSize[0x0428])
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData_FBWS[0x50];                                    // 0x0428(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return ptr;
	}



};

// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (FullSize[0x0550] - InheritedSize[0x0550])
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeGrassType
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                            // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UStaticMesh*                                 GrassMesh;                                                 // 0x0038(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GrassDensity;                                              // 0x0040(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlacementJitter;                                           // 0x0044(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StartCullDistance;                                         // 0x0048(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EndCullDistance;                                           // 0x004C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomRotation;                                            // 0x0050(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	bool                                               AlignToSurface;                                            // 0x0051(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BVY3[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGrassType");
		return ptr;
	}



};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00D8 (FullSize[0x0628] - InheritedSize[0x0550])
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                       // 0x0550(0x0010) (ZeroConstructor)
	int                                                SectionBaseX;                                              // 0x0560(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SectionBaseY;                                              // 0x0564(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CollisionSizeQuads;                                        // 0x0568(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CollisionScale;                                            // 0x056C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<unsigned char>                              CollisionQuadFlags;                                        // 0x0570(0x0010) (ZeroConstructor)
	struct FGuid                                       HeightfieldGuid;                                           // 0x0580(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FBox                                        CachedLocalBox;                                            // 0x0590(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                           // 0x05AC(0x001C) (ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8QMT[0x10];                                    // 0x05C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                   // 0x05D8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_Y5OR[0x40];                                    // 0x05E8(0x0040) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeMeshCollisionComponent
// 0x0018 (FullSize[0x0640] - InheritedSize[0x0628])
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	struct FGuid                                       MeshGuid;                                                  // 0x0628(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D7N7[0x8];                                     // 0x0638(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeInfoMap
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData_XK20[0x50];                                    // 0x0028(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return ptr;
	}



};

// Class Landscape.LandscapeLayerInfoObject
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash)
	class UPhysicalMaterial*                           PhysMaterial;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Hardness;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ACRB[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return ptr;
	}



};

// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0010 (FullSize[0x01C0] - InheritedSize[0x01B0])
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	unsigned char                                      bIsLayerThumbnail : 1;                                     // 0x01B0(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_H5WI[0x3];                                     // 0x01B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DataWeightmapIndex;                                        // 0x01B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DataWeightmapSize;                                         // 0x01B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_X9DX[0x4];                                     // 0x01BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return ptr;
	}



};

// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                               // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return ptr;
	}



};

// Class Landscape.LandscapeProxy
// 0x0388 (FullSize[0x07B0] - InheritedSize[0x0428])
class ALandscapeProxy : public AActor
{
public:
	unsigned char                                      UnknownData_GY5Q[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULandscapeSplinesComponent*                  SplineComponent;                                           // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       LandscapeGuid;                                             // 0x0438(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	struct FIntPoint                                   LandscapeSectionOffset;                                    // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaxLODLevel;                                               // 0x0450(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StaticLightingLOD;                                         // 0x0454(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                       // 0x0458(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StreamingDistanceMultiplier;                               // 0x0460(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SIPF[0x4];                                     // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          LandscapeMaterial;                                         // 0x0468(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          LandscapeHoleMaterial;                                     // 0x0470(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LODDistanceFactor;                                         // 0x0478(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SKHC[0x4];                                     // 0x047C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                       // 0x0480(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                       // 0x0490(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                         // 0x04A0(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference)
	unsigned char                                      UnknownData_BLNR[0x70];                                    // 0x04B0(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StaticLightingResolution;                                  // 0x0520(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                            // 0x0524(0x001C) (Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      bCastStaticShadow : 1;                                     // 0x0540(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                 // 0x0540(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      bAffectDynamicIndirectLighting : 1;                        // 0x0540(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay)
	unsigned char                                      bCastFarShadow : 1;                                        // 0x0540(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay)
	unsigned char                                      bIsProxy : 1;                                              // 0x0540(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bUseFarCascadeLPVBiasMultiplier : 1;                       // 0x0540(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_YT91[0x3];                                     // 0x0541(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LpvIntensityMultiplier;                                    // 0x0544(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              LpvBiasMultiplier;                                         // 0x0548(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              FarCascadeLPVBiasMultiplier;                               // 0x054C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                         // 0x0550(0x0018) (Edit)
	int                                                CollisionMipLevel;                                         // 0x0568(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CollisionThickness;                                        // 0x056C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBodyInstance                               BodyInstance;                                              // 0x0570(0x0180) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                ComponentSizeQuads;                                        // 0x06F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SubsectionSizeQuads;                                       // 0x06F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumSubsections;                                            // 0x06F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bUsedForNavigation : 1;                                    // 0x06FC(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bReflected : 1;                                            // 0x06FC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_3728[0x3];                                     // 0x06FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ENavDataGatheringMode>          NavigationGeometryGatheringMode;                           // 0x0700(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TEnumAsByte<Landscape_ELandscapeLODFalloff>        LODFalloff;                                                // 0x0701(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XLMD[0xAE];                                    // 0x0702(0x00AE) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeProxy");
		return ptr;
	}



	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
};

// Class Landscape.LandscapeMeshProxyComponent
// 0x0028 (FullSize[0x05E0] - InheritedSize[0x05B8])
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                       LandscapeGuid;                                             // 0x05B8(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FIntPoint>                           ProxyComponentBases;                                       // 0x05C8(0x0010) (ZeroConstructor)
	int8_t                                             ProxyLOD;                                                  // 0x05D8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3D6U[0x7];                                     // 0x05D9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return ptr;
	}



};

// Class Landscape.Landscape
// 0x0000 (FullSize[0x07B0] - InheritedSize[0x07B0])
class ALandscape : public ALandscapeProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.Landscape");
		return ptr;
	}



};

// Class Landscape.LandscapeSplinesComponent
// 0x0030 (FullSize[0x0580] - InheritedSize[0x0550])
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                             // 0x0550(0x0010) (ZeroConstructor, Protected, TextExportTransient)
	TArray<class ULandscapeSplineSegment*>             Segments;                                                  // 0x0560(0x0010) (ZeroConstructor, Protected, TextExportTransient)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                               // 0x0570(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeSplineSegment
// 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                          // 0x0028(0x0030) (Edit, EditFixedSize)
	struct FInterpCurveVector                          SplineInfo;                                                // 0x0058(0x0018) (ZeroConstructor, Protected)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                    // 0x0070(0x0010) (ZeroConstructor, Protected)
	struct FBox                                        Bounds;                                                    // 0x0080(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_LQWY[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                       // 0x00A0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return ptr;
	}



};

// Class Landscape.LandscapeSplineControlPoint
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                  // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x0034(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Width;                                                     // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SideFalloff;                                               // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndFalloff;                                                // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QUTE[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                         // 0x0050(0x0010) (ZeroConstructor, TextExportTransient)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                    // 0x0060(0x0010) (ZeroConstructor, Protected)
	struct FBox                                        Bounds;                                                    // 0x0070(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_DJTS[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UControlPointMeshComponent*                  LocalMeshComponent;                                        // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, TextExportTransient, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                                // 0x0070(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                    // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       ExpressionGUID;                                            // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<Landscape_ETerrainCoordMappingType>    MappingType;                                               // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Landscape_ELandscapeCustomizedCoordType> CustomUVType;                                              // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P2GP[0x2];                                     // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MappingScale;                                              // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MappingRotation;                                           // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MappingPanU;                                               // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MappingPanV;                                               // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J7AR[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                             // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreviewWeight;                                             // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       ExpressionGUID;                                            // 0x007C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_229U[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0090 (FullSize[0x0100] - InheritedSize[0x0070])
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                 // 0x0070(0x0038) (ZeroConstructor)
	struct FExpressionInput                            LayerNotUsed;                                              // 0x00A8(0x0038) (ZeroConstructor)
	struct FName                                       ParameterName;                                             // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PreviewUsed : 1;                                           // 0x00E8(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_MYAG[0x3];                                     // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       ExpressionGUID;                                            // 0x00EC(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2NNV[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0098 (FullSize[0x0108] - InheritedSize[0x0070])
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                      // 0x0070(0x0038) (ZeroConstructor)
	struct FExpressionInput                            Layer;                                                     // 0x00A8(0x0038) (ZeroConstructor)
	struct FName                                       ParameterName;                                             // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreviewWeight;                                             // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ConstBase;                                                 // 0x00EC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       ExpressionGUID;                                            // 0x00F8(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                            // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
