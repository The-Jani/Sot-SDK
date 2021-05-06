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

// Function BP_Anim_TT_Effigy_R.BP_Anim_TT_Effigy_R_C.ExecuteUbergraph_BP_Anim_TT_Effigy_R
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_TT_Effigy_R_C::ExecuteUbergraph_BP_Anim_TT_Effigy_R(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_TT_Effigy_R.BP_Anim_TT_Effigy_R_C.ExecuteUbergraph_BP_Anim_TT_Effigy_R");

	UBP_Anim_TT_Effigy_R_C_ExecuteUbergraph_BP_Anim_TT_Effigy_R_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
