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

// Function BP_Mast.BP_Mast_C.AttemptToAddDamageDecal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Repair_ERepairableState> RepairableState                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDecalComponent*         DecalComponent                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FTransform              RelativeTransform              (ConstParm, Parm, IsPlainOldData, NoDestructor)
// class UMaterialInterface*      NewDecalMaterial               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Mast_C::AttemptToAddDamageDecal(TEnumAsByte<Repair_ERepairableState> RepairableState, class UDecalComponent** DecalComponent, const struct FTransform& RelativeTransform, class UMaterialInterface* NewDecalMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.AttemptToAddDamageDecal");

	ABP_Mast_C_AttemptToAddDamageDecal_Params params;
	params.RepairableState = RepairableState;
	params.RelativeTransform = RelativeTransform;
	params.NewDecalMaterial = NewDecalMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DecalComponent != nullptr)
		*DecalComponent = params.DecalComponent;

}


// Function BP_Mast.BP_Mast_C.IsMastVisuallyFractured
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Mast_C::IsMastVisuallyFractured()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.IsMastVisuallyFractured");

	ABP_Mast_C_IsMastVisuallyFractured_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Mast.BP_Mast_C.Customise Static Mesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             New_Static_Mesh                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*    Static_Mesh_Component          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Mast_C::Customise_Static_Mesh(class UStaticMesh* New_Static_Mesh, class UStaticMeshComponent* Static_Mesh_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.Customise Static Mesh");

	ABP_Mast_C_Customise_Static_Mesh_Params params;
	params.New_Static_Mesh = New_Static_Mesh;
	params.Static_Mesh_Component = Static_Mesh_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mast.BP_Mast_C.Trim Array Func
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         TargetArray                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Mast_C::Trim_Array_Func(TArray<class UObject*>* TargetArray, int Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.Trim Array Func");

	ABP_Mast_C_Trim_Array_Func_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;

}


// Function BP_Mast.BP_Mast_C.Initialise Sail Parameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Mast_C::Initialise_Sail_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.Initialise Sail Parameters");

	ABP_Mast_C_Initialise_Sail_Parameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mast.BP_Mast_C.Populate Lists of Yards and Sails
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Mast_C::Populate_Lists_of_Yards_and_Sails()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.Populate Lists of Yards and Sails");

	ABP_Mast_C_Populate_Lists_of_Yards_and_Sails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mast.BP_Mast_C.Cull Excess Components
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UActorComponent*> TargetArray                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABP_Mast_C::Cull_Excess_Components(TArray<class UActorComponent*>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.Cull Excess Components");

	ABP_Mast_C_Cull_Excess_Components_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;

}


// Function BP_Mast.BP_Mast_C.Initialise Sails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Mast_C::Initialise_Sails()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.Initialise Sails");

	ABP_Mast_C_Initialise_Sails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mast.BP_Mast_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Mast_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.UserConstructionScript");

	ABP_Mast_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mast.BP_Mast_C.OnMastDescLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMastDescAsset*          MastDesc                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Mast_C::OnMastDescLoaded(class UMastDescAsset* MastDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.OnMastDescLoaded");

	ABP_Mast_C_OnMastDescLoaded_Params params;
	params.MastDesc = MastDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mast.BP_Mast_C.OnMastMeshSwapRequested
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStaticMesh*             NewMeshBottom                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*             NewMeshTop                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Mast_C::OnMastMeshSwapRequested(class UStaticMesh* NewMeshBottom, class UStaticMesh* NewMeshTop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.OnMastMeshSwapRequested");

	ABP_Mast_C_OnMastMeshSwapRequested_Params params;
	params.NewMeshBottom = NewMeshBottom;
	params.NewMeshTop = NewMeshTop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<Repair_ERepairableState> State                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<Repair_ERepairableState> PreviousState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URepairableComponent*    RepairableComponent            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Mast_C::BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<Repair_ERepairableState> State, TEnumAsByte<Repair_ERepairableState> PreviousState, class URepairableComponent* RepairableComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature");

	ABP_Mast_C_BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature_Params params;
	params.State = State;
	params.PreviousState = PreviousState;
	params.RepairableComponent = RepairableComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<Repair_ERepairableState> State                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<Repair_ERepairableState> PreviousState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URepairableComponent*    RepairableComponent            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Mast_C::BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<Repair_ERepairableState> State, TEnumAsByte<Repair_ERepairableState> PreviousState, class URepairableComponent* RepairableComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature");

	ABP_Mast_C_BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature_Params params;
	params.State = State;
	params.PreviousState = PreviousState;
	params.RepairableComponent = RepairableComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<Repair_ERepairableState> State                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<Repair_ERepairableState> PreviousState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URepairableComponent*    RepairableComponent            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Mast_C::BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<Repair_ERepairableState> State, TEnumAsByte<Repair_ERepairableState> PreviousState, class URepairableComponent* RepairableComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature");

	ABP_Mast_C_BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature_Params params;
	params.State = State;
	params.PreviousState = PreviousState;
	params.RepairableComponent = RepairableComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mast.BP_Mast_C.ExecuteUbergraph_BP_Mast
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Mast_C::ExecuteUbergraph_BP_Mast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mast.BP_Mast_C.ExecuteUbergraph_BP_Mast");

	ABP_Mast_C_ExecuteUbergraph_BP_Mast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
