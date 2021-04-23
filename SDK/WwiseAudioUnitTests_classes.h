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

// Class WwiseAudioUnitTests.WwiseEmitterComponentBlueprintLibraryTestActor
// 0x0000 (FullSize[0x0428] - InheritedSize[0x0428])
class AWwiseEmitterComponentBlueprintLibraryTestActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudioUnitTests.WwiseEmitterComponentBlueprintLibraryTestActor");
		return ptr;
	}



};

// Class WwiseAudioUnitTests.MockWwiseInputManager
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UMockWwiseInputManager : public UObject
{
public:
	unsigned char                                      UnknownData_HCX5[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudioUnitTests.MockWwiseInputManager");
		return ptr;
	}



};

// Class WwiseAudioUnitTests.WwiseEventTest2
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UWwiseEventTest2 : public UWwiseEvent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudioUnitTests.WwiseEventTest2");
		return ptr;
	}



};

// Class WwiseAudioUnitTests.WwiseEventTest1
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UWwiseEventTest1 : public UWwiseEvent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudioUnitTests.WwiseEventTest1");
		return ptr;
	}



};

// Class WwiseAudioUnitTests.MockAudioComponent
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UMockAudioComponent : public UActorComponent
{
public:
	class UWwiseObjectPoolWrapper*                     SfxPool;                                                   // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 SfxEvent;                                                  // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudioUnitTests.MockAudioComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
