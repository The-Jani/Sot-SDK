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

// Function BP_AxisControlInterface.BP_AxisControlInterface_C.StickInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StickInputX                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_AxisControlInterface_C::StickInput(float StickInputX)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AxisControlInterface.BP_AxisControlInterface_C.StickInput");

	UBP_AxisControlInterface_C_StickInput_Params params;
	params.StickInputX = StickInputX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
