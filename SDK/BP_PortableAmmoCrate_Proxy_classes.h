#pragma once

// Name: SoT, Version: 2.1.0.1


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

// BlueprintGeneratedClass BP_PortableAmmoCrate_Proxy.BP_PortableAmmoCrate_Proxy_C
// 0x0028 (FullSize[0x0808] - InheritedSize[0x07E0])
class ABP_PortableAmmoCrate_Proxy_C : public AStaticMeshFloatingItemProxy
{
public:
	class UWwiseEmitterComponent*                      WwiseEmitter;                                              // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAmmoStoreComponent*                         AmmoStore;                                                 // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAddReloadAmmoActionRuleComponent*           AddReloadAmmoActionRule;                                   // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class URetractableItemProxyComponent*              RetractableItemProxy;                                      // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UInteractableComponent*                      Interactable;                                              // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PortableAmmoCrate_Proxy.BP_PortableAmmoCrate_Proxy_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
