// Name: SoT, Version: 2.1.0

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

// Function BP_ItemPreview.BP_ItemPreview_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ItemPreview_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.UserConstructionScript");

	ABP_ItemPreview_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ItemPreview.BP_ItemPreview_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ItemPreview_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.ReceiveEndPlay");

	ABP_ItemPreview_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ItemPreview.BP_ItemPreview_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_ItemPreview_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.ReceiveBeginPlay");

	ABP_ItemPreview_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ItemPreview.BP_ItemPreview_C.ExecuteUbergraph_BP_ItemPreview
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ItemPreview_C::ExecuteUbergraph_BP_ItemPreview(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.ExecuteUbergraph_BP_ItemPreview");

	ABP_ItemPreview_C_ExecuteUbergraph_BP_ItemPreview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ItemPreview.BP_ItemPreview_C.PreviewShutdown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPiratePreviewShutdownEvent Data                           (Parm)
void ABP_ItemPreview_C::PreviewShutdown__DelegateSignature(const struct FPiratePreviewShutdownEvent& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.PreviewShutdown__DelegateSignature");

	ABP_ItemPreview_C_PreviewShutdown__DelegateSignature_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ItemPreview.BP_ItemPreview_C.PreviewReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPiratePreviewReadyEvent Data                           (Parm)
void ABP_ItemPreview_C::PreviewReady__DelegateSignature(const struct FPiratePreviewReadyEvent& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.PreviewReady__DelegateSignature");

	ABP_ItemPreview_C_PreviewReady__DelegateSignature_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ItemPreview.BP_ItemPreview_C.PreviewBusy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPiratePreviewBusyEvent Data                           (Parm)
void ABP_ItemPreview_C::PreviewBusy__DelegateSignature(const struct FPiratePreviewBusyEvent& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.PreviewBusy__DelegateSignature");

	ABP_ItemPreview_C_PreviewBusy__DelegateSignature_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
