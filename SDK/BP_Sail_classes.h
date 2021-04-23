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

// BlueprintGeneratedClass BP_Sail.BP_Sail_C
// 0x0020 (FullSize[0x05D8] - InheritedSize[0x05B8])
class ABP_Sail_C : public ASail
{
public:
	TArray<struct FVector>                             Sail_Positions_Top;                                        // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             Sail_Positions_Bottom;                                     // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sail.BP_Sail_C");
		return ptr;
	}



	void Debug();
	void Initialise(bool IsMainSail, float SailForceScalar);
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
