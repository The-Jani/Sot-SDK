#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.IsLocalPlayer
struct ABP_CoralFortress_WeatherZone_C_IsLocalPlayer_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.OnRep_Opacity
struct ABP_CoralFortress_WeatherZone_C_OnRep_Opacity_Params
{
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.CreateDynamicMaterialAtSlot0
struct ABP_CoralFortress_WeatherZone_C_CreateDynamicMaterialAtSlot0_Params
{
	class UPrimitiveComponent*                         Primitive;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Material;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.UserConstructionScript
struct ABP_CoralFortress_WeatherZone_C_UserConstructionScript_Params
{
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__FinishedFunc
struct ABP_CoralFortress_WeatherZone_C_RainBlend__FinishedFunc_Params
{
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__UpdateFunc
struct ABP_CoralFortress_WeatherZone_C_RainBlend__UpdateFunc_Params
{
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveBeginPlay
struct ABP_CoralFortress_WeatherZone_C_ReceiveBeginPlay_Params
{
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StartRainBlend
struct ABP_CoralFortress_WeatherZone_C_StartRainBlend_Params
{
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveEndPlay
struct ABP_CoralFortress_WeatherZone_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StopRainBlend
struct ABP_CoralFortress_WeatherZone_C_StopRainBlend_Params
{
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_438_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_CoralFortress_WeatherZone_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_438_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_441_ComponentEndOverlapSignature__DelegateSignature
struct ABP_CoralFortress_WeatherZone_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_441_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ExecuteUbergraph_BP_CoralFortress_WeatherZone
struct ABP_CoralFortress_WeatherZone_C_ExecuteUbergraph_BP_CoralFortress_WeatherZone_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
