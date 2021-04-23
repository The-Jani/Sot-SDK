// Name: SoT, Version: 2.1.0.1

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

// Function BP_ShipStorageBarrel_Wood.BP_ShipStorageBarrel_Wood_C.ShouldDrawTooltipInWorldSpace
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 DesiredTooltipWorldPosition    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_ShipStorageBarrel_Wood_C::ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipStorageBarrel_Wood.BP_ShipStorageBarrel_Wood_C.ShouldDrawTooltipInWorldSpace");

	ABP_ShipStorageBarrel_Wood_C_ShouldDrawTooltipInWorldSpace_Params params;
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DesiredTooltipWorldPosition != nullptr)
		*DesiredTooltipWorldPosition = params.DesiredTooltipWorldPosition;


	return params.ReturnValue;
}


// Function BP_ShipStorageBarrel_Wood.BP_ShipStorageBarrel_Wood_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ShipStorageBarrel_Wood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipStorageBarrel_Wood.BP_ShipStorageBarrel_Wood_C.UserConstructionScript");

	ABP_ShipStorageBarrel_Wood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
