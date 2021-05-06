// Name: SoT, Version: 2.1.1

#include "../SDK.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AthenaInput.InputBinder.SpoofNotificationInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Id                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UInputBinder::SpoofNotificationInput(class UClass* Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInput.InputBinder.SpoofNotificationInput");

	UInputBinder_SpoofNotificationInput_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaInput.InputBinder.SpoofAnalogInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Id                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInputBinder::SpoofAnalogInput(class UClass* Id, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInput.InputBinder.SpoofAnalogInput");

	UInputBinder_SpoofAnalogInput_Params params;
	params.Id = Id;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaInput.InputBinder.IsContinuousActionActive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  BeginNotificationInputId       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInputBinder::IsContinuousActionActive(class UClass* BeginNotificationInputId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInput.InputBinder.IsContinuousActionActive");

	UInputBinder_IsContinuousActionActive_Params params;
	params.BeginNotificationInputId = BeginNotificationInputId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaInput.InputBinder.IgnoreNonSpoofedInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InShouldIgnore                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInputBinder::IgnoreNonSpoofedInput(bool InShouldIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInput.InputBinder.IgnoreNonSpoofedInput");

	UInputBinder_IgnoreNonSpoofedInput_Params params;
	params.InShouldIgnore = InShouldIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaInput.InputHandlerInterface.HandleNotificationInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Id                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TEnumAsByte<AthenaInput_EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> UInputHandlerInterface::HandleNotificationInput(class UClass* Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInput.InputHandlerInterface.HandleNotificationInput");

	UInputHandlerInterface_HandleNotificationInput_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaInput.InputHandlerInterface.HandleAnalogInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Id                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                          Input                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<AthenaInput_EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> UInputHandlerInterface::HandleAnalogInput(class UClass* Id, float Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInput.InputHandlerInterface.HandleAnalogInput");

	UInputHandlerInterface_HandleAnalogInput_Params params;
	params.Id = Id;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondNotificationHandler
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<AthenaInput_EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> UCompositeInputDelegatorTestsCallbackHelper::OnSecondNotificationHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondNotificationHandler");

	UCompositeInputDelegatorTestsCallbackHelper_OnSecondNotificationHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondHandler
// (Final, Native, Public)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<AthenaInput_EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> UCompositeInputDelegatorTestsCallbackHelper::OnSecondHandler(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondHandler");

	UCompositeInputDelegatorTestsCallbackHelper_OnSecondHandler_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstNotificationHandler
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<AthenaInput_EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> UCompositeInputDelegatorTestsCallbackHelper::OnFirstNotificationHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstNotificationHandler");

	UCompositeInputDelegatorTestsCallbackHelper_OnFirstNotificationHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstHandler
// (Final, Native, Public)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<AthenaInput_EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> UCompositeInputDelegatorTestsCallbackHelper::OnFirstHandler(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstHandler");

	UCompositeInputDelegatorTestsCallbackHelper_OnFirstHandler_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaInput.CompositeInputHandler.SetNotificationInputHandler
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Id                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FScriptDelegate         Handler                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void UCompositeInputHandler::SetNotificationInputHandler(class UClass* Id, const struct FScriptDelegate& Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInput.CompositeInputHandler.SetNotificationInputHandler");

	UCompositeInputHandler_SetNotificationInputHandler_Params params;
	params.Id = Id;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaInput.CompositeInputHandler.SetAnalogInputHandler
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Id                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FScriptDelegate         Handler                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void UCompositeInputHandler::SetAnalogInputHandler(class UClass* Id, const struct FScriptDelegate& Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInput.CompositeInputHandler.SetAnalogInputHandler");

	UCompositeInputHandler_SetAnalogInputHandler_Params params;
	params.Id = Id;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaInput.InputHandlerFunctionLibrary.MakeCompositeInputHandler
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCompositeInputHandler*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCompositeInputHandler* UInputHandlerFunctionLibrary::STATIC_MakeCompositeInputHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInput.InputHandlerFunctionLibrary.MakeCompositeInputHandler");

	UInputHandlerFunctionLibrary_MakeCompositeInputHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaInput.NamedNotificationInputInterface.GetNotificationInputDisplayName
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass*                  InputID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UNamedNotificationInputInterface::GetNotificationInputDisplayName(class UClass* InputID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInput.NamedNotificationInputInterface.GetNotificationInputDisplayName");

	UNamedNotificationInputInterface_GetNotificationInputDisplayName_Params params;
	params.InputID = InputID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
