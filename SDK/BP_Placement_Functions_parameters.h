#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function BP_Placement_Functions.BP_Placement_Functions_C.GenerateRadialXYPositionsAroundPoint
struct UBP_Placement_Functions_C_GenerateRadialXYPositionsAroundPoint_Params
{
	struct FVector                                     Centre;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Segments;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FVector>                             Positions;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get First Valid Hit
struct UBP_Placement_Functions_C_Get_First_Valid_Hit_Params
{
	TArray<struct FHitResult>                          Hits;                                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Is_Valid_Hit;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  Hit;                                                       // (Parm, OutParm)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Rotated Box Raycast
struct UBP_Placement_Functions_C_Generate_Random_Rotated_Box_Raycast_Params
{
	struct FRandomStream                               Random;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Centre;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Extent;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Raycast_Start;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Raycast_End;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Detonate Charge
struct UBP_Placement_Functions_C_Detonate_Charge_Params
{
	class AActor*                                      Spawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius_Overlap;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Seed;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FLinearColor>                        Blast_Radii;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FLinearColor>                        Blast_Radii_Out;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Does A Delete B
struct UBP_Placement_Functions_C_Does_A_Delete_B_Params
{
	struct FString                                     A_String;                                                  // (Parm, ZeroConstructor)
	struct FString                                     B_String;                                                  // (Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Actor Placement Asset Type
struct UBP_Placement_Functions_C_Get_Actor_Placement_Asset_Type_Params
{
	class AActor*                                      Input_Actor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Returning_Tag;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Asset_Tag;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Actor Overlap
struct UBP_Placement_Functions_C_Check_Actor_Overlap_Params
{
	class AActor*                                      Input_Actor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Delete_Actor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AActor*>                              Overlaps_to_Delete;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Mesh Instance Transform
struct UBP_Placement_Functions_C_Get_Mesh_Instance_Transform_Params
{
	struct FPlacementGardenSeed                        Selected_Mesh;                                             // (Parm)
	struct FRandomStream                               Random;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Normal;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Mesh Probabilities
struct UBP_Placement_Functions_C_Normalise_Mesh_Probabilities_Params
{
	TArray<struct FPlacementGardenSeed>                Charges;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Charge_Probabilities;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Mesh
struct UBP_Placement_Functions_C_Set_Mesh_Params
{
	TArray<struct FPlacementGardenSeed>                Meshes;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Mesh_Probabilities;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Generator_Radius;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Spawn_Clustering;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Spawn_Radius_Multiplier;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UObject*>                             Physical_Materials;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FLinearColor>                        Mesh_Radii;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FRandomStream                               Random;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Spawn_Permission;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Mesh_Index;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPlacementGardenSeed                        Mesh;                                                      // (Parm, OutParm)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Charge
struct UBP_Placement_Functions_C_Set_Charge_Params
{
	TArray<struct FPlacementBombCharge>                Charges;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Charge_Probabilities;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Generator_Radius;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Spawn_Clustering;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Box_Distribution;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UObject*>                             Physical_Materials;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FLinearColor>                        Blast_Radii;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FRandomStream                               Random;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Spawn_Permission;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Position;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPlacementBombCharge                        Charge;                                                    // (Parm, OutParm)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Surface Materials
struct UBP_Placement_Functions_C_Check_Surface_Materials_Params
{
	TArray<class UObject*>                             Physical_Materials;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     Placement_Material;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Placement_Permission;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Slope
struct UBP_Placement_Functions_C_Check_Slope_Params
{
	struct FVector                                     Normal;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   Slope_Range;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Placement_Permission;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Height
struct UBP_Placement_Functions_C_Check_Height_Params
{
	struct FVector                                     Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   Height_Range;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Placement_Permission;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Radius Overlap
struct UBP_Placement_Functions_C_Check_Radius_Overlap_Params
{
	struct FVector                                     Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius_Overlap;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FLinearColor>                        Blast_Radii;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Placement_Permission;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Spawn Properties
struct UBP_Placement_Functions_C_Set_Spawn_Properties_Params
{
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Seed;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Cast_Success;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Box Raycast
struct UBP_Placement_Functions_C_Generate_Random_Box_Raycast_Params
{
	struct FRandomStream                               Random;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Centre;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Extent;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Raycast_Start;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Raycast_End;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Box Sample Count
struct UBP_Placement_Functions_C_Get_Box_Sample_Count_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Seed_Density;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Sample_Count;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Radial Raycast
struct UBP_Placement_Functions_C_Generate_Random_Radial_Raycast_Params
{
	struct FRandomStream                               Random;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Centre;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Spawn_Clustering;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Spawn_Radius_Multiplier;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  Actor_Transform;                                           // (Parm, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Raycast_Start;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Raycast_End;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Calculate Index from Probabilities
struct UBP_Placement_Functions_C_Calculate_Index_from_Probabilities_Params
{
	float                                              Random_Float;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<float>                                      Charge_Probabilities;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Radial Sample Count
struct UBP_Placement_Functions_C_Get_Radial_Sample_Count_Params
{
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Spawn_Sample_Density;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Sample_Count;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Charge Probabilities
struct UBP_Placement_Functions_C_Normalise_Charge_Probabilities_Params
{
	TArray<struct FPlacementBombCharge>                Charges;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Charge_Probabilities;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
