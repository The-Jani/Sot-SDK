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

// Class ServiceMessaging.ServiceMessagingDispatcherInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UServiceMessagingDispatcherInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServiceMessaging.ServiceMessagingDispatcherInterface");
		return ptr;
	}



};

// Class ServiceMessaging.ServiceMessagingListenerTestObject
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UServiceMessagingListenerTestObject : public UObject
{
public:
	unsigned char                                      UnknownData_90A5[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServiceMessaging.ServiceMessagingListenerTestObject");
		return ptr;
	}



	void TestFunctionWithMessage(struct FServiceMessagingTestMessage* InMessage);
};

// Class ServiceMessaging.ServiceMessagingInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UServiceMessagingInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServiceMessaging.ServiceMessagingInterface");
		return ptr;
	}



};

// Class ServiceMessaging.ServiceMessagingFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UServiceMessagingFunctions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServiceMessaging.ServiceMessagingFunctions");
		return ptr;
	}



	struct FObjectMessagingDispatcherHandle STATIC_GetServiceMessagingDispatcherFromActor(class UObject* Object);
	struct FObjectMessagingDispatcherHandle STATIC_GetServiceMessagingDispatcher(const TScriptInterface<class UServiceMessagingDispatcherInterface>& ServiceMessagingDispatcher);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
