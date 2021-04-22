#pragma once

// Name: SoT, Version: 2.1.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WaterSlide.WaterSlideParams
// 0x001C
struct FWaterSlideParams
{
	float                                              ForwardSpeed;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IncreaseForwardSpeedMultiplier;                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DecreaseForwardSpeedMultiplier;                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VeeringSpeed;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LeftVeeringDistance;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RightVeeringDistance;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceAboveSlideOffset;                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

// ScriptStruct WaterSlide.WaterSlideActionStateParams
// 0x0024
struct FWaterSlideActionStateParams
{
	float                                              ForcedFieldOfView;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForceStash;                                                // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AFEY[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLookAtOffsetParams                         LookAtOffsetParams;                                        // 0x0008(0x001C) (Edit)

};

// ScriptStruct WaterSlide.OnPlayerSpeedOnWaterSlideChangedActionStateEvent
// 0x0004
struct FOnPlayerSpeedOnWaterSlideChangedActionStateEvent
{
	unsigned char                                      UnknownData_GLPM[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct WaterSlide.OnPlayerChangedWaterSlideRouteActionStateEvent
// 0x0001
struct FOnPlayerChangedWaterSlideRouteActionStateEvent
{
	unsigned char                                      UnknownData_LZRI[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct WaterSlide.OnEndWaterSlideActionStateEvent
// 0x0001
struct FOnEndWaterSlideActionStateEvent
{
	unsigned char                                      UnknownData_HBUR[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct WaterSlide.OnStartWaterSlideActionStateEvent
// 0x0001
struct FOnStartWaterSlideActionStateEvent
{
	unsigned char                                      UnknownData_UOL1[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct WaterSlide.OnExitedWaterSlideEvent
// 0x0001
struct FOnExitedWaterSlideEvent
{
	unsigned char                                      UnknownData_9VT7[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct WaterSlide.WaterSlideActionStateConstructionInfo
// 0x0008 (0x0038 - 0x0030)
struct FWaterSlideActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	class USceneComponent*                             SceneComponent;                                            // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
