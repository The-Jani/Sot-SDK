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

// Function BP_Anim_Telescope.BP_Anim_Telescope_C.ExecuteUbergraph_BP_Anim_Telescope
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_Telescope_C::ExecuteUbergraph_BP_Anim_Telescope(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_Telescope.BP_Anim_Telescope_C.ExecuteUbergraph_BP_Anim_Telescope");

	UBP_Anim_Telescope_C_ExecuteUbergraph_BP_Anim_Telescope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
