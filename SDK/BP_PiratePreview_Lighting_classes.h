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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C
// 0x0058 (FullSize[0x0480] - InheritedSize[0x0428])
class ABP_PiratePreview_Lighting_C : public AActor
{
public:
	class UExponentialHeightFogComponent*              ExponentialHeightFog;                                      // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkyLightComponent*                          SkyLight;                                                  // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USpotLightComponent*                         SpotLight2;                                                // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USpotLightComponent*                         SpotLight1;                                                // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USpotLightComponent*                         SpotLight;                                                 // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UPostProcessComponent*                       PostProcess;                                               // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FScriptMulticastDelegate                    PreviewBusy;                                               // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    PreviewReady;                                              // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C");
		return ptr;
	}



	void UserConstructionScript();
	void PreviewReady__DelegateSignature(const struct FPiratePreviewReadyEvent& Data);
	void PreviewBusy__DelegateSignature(const struct FPiratePreviewBusyEvent& Data);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
