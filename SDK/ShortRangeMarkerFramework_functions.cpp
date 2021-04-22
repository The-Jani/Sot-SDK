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

// Function ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary.RegisterActorsWithShortRangeMarker
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  InMarker                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>          InActors                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
void UShortRangeMarkerBlueprintFunctionLibrary::STATIC_RegisterActorsWithShortRangeMarker(class UObject* WorldContextObject, class AActor* InMarker, TArray<class AActor*>* InActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary.RegisterActorsWithShortRangeMarker");

	UShortRangeMarkerBlueprintFunctionLibrary_RegisterActorsWithShortRangeMarker_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InMarker = InMarker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InActors != nullptr)
		*InActors = params.InActors;

}


// Function ShortRangeMarkerFramework.ShortRangeMarker.Multicast_OnCleanUp
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
void AShortRangeMarker::Multicast_OnCleanUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShortRangeMarkerFramework.ShortRangeMarker.Multicast_OnCleanUp");

	AShortRangeMarker_Multicast_OnCleanUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
