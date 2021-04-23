#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.GetPxActorCapacityForPhysXAggregate
struct ABP_PlayerPirate_Ghost_C_GetPxActorCapacityForPhysXAggregate_Params
{
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.GetAllMaterialParents
struct ABP_PlayerPirate_Ghost_C_GetAllMaterialParents_Params
{
	class UMaterialInstance*                           MaterialInstance;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstance*>                   Parents;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.CheckBaseMaterial
struct ABP_PlayerPirate_Ghost_C_CheckBaseMaterial_Params
{
	class UMaterialInstance*                           MaterialInstance;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterial*                                   MaterialToCheck;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.Set Up Ghost Materials
struct ABP_PlayerPirate_Ghost_C_Set_Up_Ghost_Materials_Params
{
	class USkeletalMeshComponent*                      Input_Mesh;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.GetMouthPosition
struct ABP_PlayerPirate_Ghost_C_GetMouthPosition_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.UserConstructionScript
struct ABP_PlayerPirate_Ghost_C_UserConstructionScript_Params
{
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.Update Athena Character
struct ABP_PlayerPirate_Ghost_C_Update_Athena_Character_Params
{
	class AAthenaCharacter*                            AthenaCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.CapstanRotationSpeed
struct ABP_PlayerPirate_Ghost_C_CapstanRotationSpeed_Params
{
	float                                              RotationSpeed;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.DockingInterface
struct ABP_PlayerPirate_Ghost_C_DockingInterface_Params
{
	struct FBP_Docking                                 Docking;                                                   // (Parm)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.CapstanForce
struct ABP_PlayerPirate_Ghost_C_CapstanForce_Params
{
	float                                              IndividualForce;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  LH_IK;                                                     // (Parm, IsPlainOldData, NoDestructor)
	struct FTransform                                  RH_IK;                                                     // (Parm, IsPlainOldData, NoDestructor)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Update Transform
struct ABP_PlayerPirate_Ghost_C_IK_Limb_Update_Transform_Params
{
	TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  TransformUpdate;                                           // (Parm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Blend Timing
struct ABP_PlayerPirate_Ghost_C_IK_Limb_Blend_Timing_Params
{
	TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BlendIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BlendOut;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Update Strength
struct ABP_PlayerPirate_Ghost_C_IK_Limb_Update_Strength_Params
{
	TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LocationStrength;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RotationStrength;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Active
struct ABP_PlayerPirate_Ghost_C_IK_Limb_Active_Params
{
	TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Active;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Animation_ELimbIKSpace>                CoordinateSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Stretch
struct ABP_PlayerPirate_Ghost_C_IK_Limb_Stretch_Params
{
	float                                              ArmStretch;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SpineStretch;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LegStretch;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.ReceiveBeginPlay
struct ABP_PlayerPirate_Ghost_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.OnMeshSet
struct ABP_PlayerPirate_Ghost_C_OnMeshSet_Params
{
};

// Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.ExecuteUbergraph_BP_PlayerPirate_Ghost
struct ABP_PlayerPirate_Ghost_C_ExecuteUbergraph_BP_PlayerPirate_Ghost_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
