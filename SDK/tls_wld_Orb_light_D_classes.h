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

// BlueprintGeneratedClass tls_wld_Orb_light_D.tls_wld_Orb_light_D_C
// 0x0008 (FullSize[0x0440] - InheritedSize[0x0438])
class Atls_wld_Orb_light_D_C : public AStaticMeshActor
{
public:
	class UPointLightComponent*                        PointLight;                                                // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass tls_wld_Orb_light_D.tls_wld_Orb_light_D_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
