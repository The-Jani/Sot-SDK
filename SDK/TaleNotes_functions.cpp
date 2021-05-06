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

// Function TaleNotes.TaleNote.OnTextCanvasUpdate
// (Final, Native, Protected)
// Parameters:
// class UCanvas*                 InCanvas                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InWidth                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InHeight                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATaleNote::OnTextCanvasUpdate(class UCanvas* InCanvas, int InWidth, int InHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function TaleNotes.TaleNote.OnTextCanvasUpdate");

	ATaleNote_OnTextCanvasUpdate_Params params;
	params.InCanvas = InCanvas;
	params.InWidth = InWidth;
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
