// Name: S, Version: 2.2.1

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

// Function BP_Innkeeper_Tracy.BP_Innkeeper_Tracy_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ABP_Innkeeper_Tracy_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Innkeeper_Tracy.BP_Innkeeper_Tracy_C.GetClosestInteractionPoint");

	ABP_Innkeeper_Tracy_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;


	return params.ReturnValue;
}


// Function BP_Innkeeper_Tracy.BP_Innkeeper_Tracy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Innkeeper_Tracy_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Innkeeper_Tracy.BP_Innkeeper_Tracy_C.UserConstructionScript");

	ABP_Innkeeper_Tracy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Innkeeper_Tracy.BP_Innkeeper_Tracy_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_Innkeeper_Tracy_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Innkeeper_Tracy.BP_Innkeeper_Tracy_C.ReceiveBeginPlay");

	ABP_Innkeeper_Tracy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Innkeeper_Tracy.BP_Innkeeper_Tracy_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Innkeeper_Tracy_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Innkeeper_Tracy.BP_Innkeeper_Tracy_C.ReceiveEndPlay");

	ABP_Innkeeper_Tracy_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Innkeeper_Tracy.BP_Innkeeper_Tracy_C.ExecuteUbergraph_BP_Innkeeper_Tracy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Innkeeper_Tracy_C::ExecuteUbergraph_BP_Innkeeper_Tracy(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Innkeeper_Tracy.BP_Innkeeper_Tracy_C.ExecuteUbergraph_BP_Innkeeper_Tracy");

	ABP_Innkeeper_Tracy_C_ExecuteUbergraph_BP_Innkeeper_Tracy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
