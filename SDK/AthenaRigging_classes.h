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

// Class AthenaRigging.InstancedRopeComponent
// 0x00D0 (FullSize[0x0620] - InheritedSize[0x0550])
class UInstancedRopeComponent : public UPrimitiveComponent
{
public:
	class UStaticMesh*                                 StaticMesh;                                                // 0x0550(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInstancedRopeParams>                Ropes;                                                     // 0x0558(0x0010) (Edit, ZeroConstructor, EditConst)
	int                                                ShadowLOD;                                                 // 0x0568(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9RFB[0xB4];                                    // 0x056C(0x00B4) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.InstancedRopeComponent");
		return ptr;
	}



	void SetUnderwater(bool Underwater);
	void SetRopes(TArray<struct FInstancedRopeParams> InRopes);
};

// Class AthenaRigging.MaterialExpressionRopeParameter
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UMaterialExpressionRopeParameter : public UMaterialExpression
{
public:
	TEnumAsByte<AthenaRigging_EInstancedRopeParameterType> RopeParameterType;                                         // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O0OE[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.MaterialExpressionRopeParameter");
		return ptr;
	}



};

// Class AthenaRigging.RiggingSystem
// 0x0150 (FullSize[0x0578] - InheritedSize[0x0428])
class ARiggingSystem : public AActor
{
public:
	unsigned char                                      UnknownData_6U0Z[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             Root;                                                      // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInstancedRopeComponent*                     InstancedRopes;                                            // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRiggingSystemLine>                  Lines;                                                     // 0x0440(0x0010) (ZeroConstructor)
	TArray<struct FInstancedRopeParams>                Ropes;                                                     // 0x0450(0x0010) (ZeroConstructor)
	TArray<class UMobileInstancedStaticMeshComponent*> PulleyInstances;                                           // 0x0460(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)
	struct FRiggingSystemPulleyData                    Pulleys;                                                   // 0x0470(0x0060)
	TArray<struct FSocketId>                           Sockets;                                                   // 0x04D0(0x0010) (ZeroConstructor)
	TArray<float>                                      InitialMainRopeLengths;                                    // 0x04E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_JY7W[0x88];                                    // 0x04F0(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.RiggingSystem");
		return ptr;
	}



};

// Class AthenaRigging.RiggingSystemComponent
// 0x0040 (FullSize[0x02F0] - InheritedSize[0x02B0])
class URiggingSystemComponent : public USceneComponent
{
public:
	struct FRopeStyleParams                            RopeStyle;                                                 // 0x02B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FRiggingSystemLineGroup>             LineGroups;                                                // 0x02D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class ARiggingSystem*                              Impl;                                                      // 0x02E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_27TV[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.RiggingSystemComponent");
		return ptr;
	}



	void SetSocketLookupSource(class AActor* InSocketSource);
	int ConvertLineToRopeIndex(const struct FName& InLineGroupName, int InLineOffset);
};

// Class AthenaRigging.RopeCatenaryRenderComponent
// 0x0008 (FullSize[0x05F8] - InheritedSize[0x05F0])
class URopeCatenaryRenderComponent : public UCordRenderComponent
{
public:
	unsigned char                                      UnknownData_8DV4[0x8];                                     // 0x05F0(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.RopeCatenaryRenderComponent");
		return ptr;
	}



};

// Class AthenaRigging.RopeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URopeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.RopeInterface");
		return ptr;
	}



	void SetRopeUVOffset(float InUVOffset);
	void SetRopeEndpoints(const struct FVector& InWorldSpaceStart, const struct FVector& InWorldSpaceEnd);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
