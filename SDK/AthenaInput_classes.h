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

// Class AthenaInput.NotificationInputId
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UNotificationInputId : public UObject
{
public:
	unsigned char                                      UnknownData_5D1A[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.NotificationInputId");
		return ptr;
	}



};

// Class AthenaInput.AnalogInputId
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UAnalogInputId : public UObject
{
public:
	unsigned char                                      UnknownData_G4HP[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.AnalogInputId");
		return ptr;
	}



};

// Class AthenaInput.InputBinder
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UInputBinder : public UObject
{
public:
	class UInputComponent*                             InputComponent;                                            // 0x0028(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LBL9[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.InputBinder");
		return ptr;
	}



	void SpoofNotificationInput(class UClass* Id);
	void SpoofAnalogInput(class UClass* Id, float Value);
	bool IsContinuousActionActive(class UClass* BeginNotificationInputId);
	void IgnoreNonSpoofedInput(bool InShouldIgnore);
};

// Class AthenaInput.InputHandlerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInputHandlerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.InputHandlerInterface");
		return ptr;
	}



	TEnumAsByte<AthenaInput_EInputHandlerResult> HandleNotificationInput(class UClass* Id);
	TEnumAsByte<AthenaInput_EInputHandlerResult> HandleAnalogInput(class UClass* Id, float Input);
};

// Class AthenaInput.TestAnalogInputId
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTestAnalogInputId : public UAnalogInputId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.TestAnalogInputId");
		return ptr;
	}



};

// Class AthenaInput.TestAnalogInput2Id
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTestAnalogInput2Id : public UAnalogInputId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.TestAnalogInput2Id");
		return ptr;
	}



};

// Class AthenaInput.CompositeInputDelegatorTestsCallbackHelper
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UCompositeInputDelegatorTestsCallbackHelper : public UObject
{
public:
	unsigned char                                      UnknownData_F6A3[0x50];                                    // 0x0028(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.CompositeInputDelegatorTestsCallbackHelper");
		return ptr;
	}



	TEnumAsByte<AthenaInput_EInputHandlerResult> OnSecondNotificationHandler();
	TEnumAsByte<AthenaInput_EInputHandlerResult> OnSecondHandler(float Value);
	TEnumAsByte<AthenaInput_EInputHandlerResult> OnFirstNotificationHandler();
	TEnumAsByte<AthenaInput_EInputHandlerResult> OnFirstHandler(float Value);
};

// Class AthenaInput.TestNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UTestNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.TestNotificationInputId");
		return ptr;
	}



};

// Class AthenaInput.ReceivesInputInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UReceivesInputInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.ReceivesInputInterface");
		return ptr;
	}



};

// Class AthenaInput.CompositeInputHandler
// 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
class UCompositeInputHandler : public UObject
{
public:
	unsigned char                                      UnknownData_LXUJ[0xB0];                                    // 0x0028(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.CompositeInputHandler");
		return ptr;
	}



	void SetNotificationInputHandler(class UClass* Id, const struct FScriptDelegate& Handler);
	void SetAnalogInputHandler(class UClass* Id, const struct FScriptDelegate& Handler);
};

// Class AthenaInput.MockDerivedCompositeInputHandler
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UMockDerivedCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData_24UT[0x8];                                     // 0x00D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.MockDerivedCompositeInputHandler");
		return ptr;
	}



};

// Class AthenaInput.InputHandlerFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInputHandlerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.InputHandlerFunctionLibrary");
		return ptr;
	}



	class UCompositeInputHandler* STATIC_MakeCompositeInputHandler();
};

// Class AthenaInput.MockInputHandlerCharacter
// 0x0008 (FullSize[0x0630] - InheritedSize[0x0628])
class AMockInputHandlerCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData_47ZT[0x8];                                     // 0x0628(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.MockInputHandlerCharacter");
		return ptr;
	}



};

// Class AthenaInput.NamedNotificationInputInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNamedNotificationInputInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.NamedNotificationInputInterface");
		return ptr;
	}



	struct FText GetNotificationInputDisplayName(class UClass* InputID);
};

// Class AthenaInput.NamedNotificationInputComponent
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
class UNamedNotificationInputComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_VOED[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNotificationInputDisplayName>       NotificationInputDisplayNames;                             // 0x00D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.NamedNotificationInputComponent");
		return ptr;
	}



};

// Class AthenaInput.OpenQuickMenuNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UOpenQuickMenuNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.OpenQuickMenuNotificationInputId");
		return ptr;
	}



};

// Class AthenaInput.PressedNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UPressedNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.PressedNotificationInputId");
		return ptr;
	}



};

// Class AthenaInput.ReleasedNotificationInputId
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UReleasedNotificationInputId : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.ReleasedNotificationInputId");
		return ptr;
	}



};

// Class AthenaInput.TestNotificationInput2Id
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UTestNotificationInput2Id : public UNotificationInputId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaInput.TestNotificationInput2Id");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
