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

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.FindExistingLight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DistantLightProxy_C::FindExistingLight(const struct FString& Name, bool* Result, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DistantLightProxy.BP_DistantLightProxy_C.FindExistingLight");

	ABP_DistantLightProxy_C_FindExistingLight_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (Index != nullptr)
		*Index = params.Index;

}


// Function BP_DistantLightProxy.BP_DistantLightProxy_C.Create Lights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DistantLightProxy_C::Create_Lights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DistantLightProxy.BP_DistantLightProxy_C.Create Lights");

	ABP_DistantLightProxy_C_Create_Lights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DistantLightProxy.BP_DistantLightProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_DistantLightProxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DistantLightProxy.BP_DistantLightProxy_C.UserConstructionScript");

	ABP_DistantLightProxy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DistantLightProxy.BP_DistantLightProxy_C.Add Light
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Name                           (Parm, ZeroConstructor)
void ABP_DistantLightProxy_C::Add_Light(const struct FVector& Location, float Size, class UMaterialInterface* Material, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DistantLightProxy.BP_DistantLightProxy_C.Add Light");

	ABP_DistantLightProxy_C_Add_Light_Params params;
	params.Location = Location;
	params.Size = Size;
	params.Material = Material;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DistantLightProxy.BP_DistantLightProxy_C.ExecuteUbergraph_BP_DistantLightProxy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DistantLightProxy_C::ExecuteUbergraph_BP_DistantLightProxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DistantLightProxy.BP_DistantLightProxy_C.ExecuteUbergraph_BP_DistantLightProxy");

	ABP_DistantLightProxy_C_ExecuteUbergraph_BP_DistantLightProxy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
