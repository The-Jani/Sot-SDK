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

// Class AthenaDebug.DrawDebugServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDrawDebugServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaDebug.DrawDebugServiceInterface");
		return ptr;
	}



};

// Class AthenaDebug.DrawDebugService
// 0x00F8 (FullSize[0x0528] - InheritedSize[0x0430])
class ADrawDebugService : public AActor
{
public:
	unsigned char                                      UnknownData_A8Q0[0x8];                                     // 0x0430(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDrawDebugItemMessage>               MessagesReplicated;                                        // 0x0438(0x0010) (Net, ZeroConstructor)
	TArray<struct FDrawDebugItemSphere>                SpheresReplicated;                                         // 0x0448(0x0010) (Net, ZeroConstructor, RepNotify)
	TArray<struct FDrawDebugItemBox>                   BoxesReplicated;                                           // 0x0458(0x0010) (Net, ZeroConstructor, RepNotify)
	TArray<struct FDrawDebugItemCapsule>               CapsulesReplicated;                                        // 0x0468(0x0010) (Net, ZeroConstructor, RepNotify)
	TArray<struct FDrawDebugItemLine>                  LinesReplicated;                                           // 0x0478(0x0010) (Net, ZeroConstructor, RepNotify)
	TArray<struct FDrawDebugItemSector>                SectorsReplicated;                                         // 0x0488(0x0010) (Net, ZeroConstructor, RepNotify)
	TArray<struct FDrawDebugItemString>                StringsReplicated;                                         // 0x0498(0x0010) (Net, ZeroConstructor, RepNotify)
	unsigned char                                      UnknownData_TEEF[0x80];                                    // 0x04A8(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaDebug.DrawDebugService");
		return ptr;
	}



	void OnRep_PersistentShapeChanged();
	void Multicast_ClearGroup(const struct FName& GroupName);
	void Multicast_AddStrings(TArray<struct FDrawDebugItemString> Strings);
	void Multicast_AddSpheres(TArray<struct FDrawDebugItemSphere> Spheres);
	void Multicast_AddSectors(TArray<struct FDrawDebugItemSector> Sectors);
	void Multicast_AddLines(TArray<struct FDrawDebugItemLine> Lines);
	void Multicast_AddCapsules(TArray<struct FDrawDebugItemCapsule> Capsules);
	void Multicast_AddBoxes(TArray<struct FDrawDebugItemBox> Boxes);
};

// Class AthenaDebug.ShippingDebugActorSphereCollection
// 0x0010 (FullSize[0x0440] - InheritedSize[0x0430])
class AShippingDebugActorSphereCollection : public AActor
{
public:
	TArray<struct FSphereData>                         SphereList;                                                // 0x0430(0x0010) (Net, ZeroConstructor, Protected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaDebug.ShippingDebugActorSphereCollection");
		return ptr;
	}



};

// Class AthenaDebug.TickableDebugDrawingServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTickableDebugDrawingServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaDebug.TickableDebugDrawingServiceInterface");
		return ptr;
	}



};

// Class AthenaDebug.Videprinter
// 0x0028 (FullSize[0x0458] - InheritedSize[0x0430])
class AVideprinter : public AActor
{
public:
	TArray<struct FString>                             OutputRingBuffer;                                          // 0x0430(0x0010) (Net, ZeroConstructor)
	int                                                AddAt;                                                     // 0x0440(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Id;                                                        // 0x0444(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7KI6[0xC];                                     // 0x044C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaDebug.Videprinter");
		return ptr;
	}



};

// Class AthenaDebug.VideprinterServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVideprinterServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaDebug.VideprinterServiceInterface");
		return ptr;
	}



};

// Class AthenaDebug.VideprinterService
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UVideprinterService : public UObject
{
public:
	unsigned char                                      UnknownData_423S[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AVideprinter*>                        Videprinters;                                              // 0x0030(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaDebug.VideprinterService");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
