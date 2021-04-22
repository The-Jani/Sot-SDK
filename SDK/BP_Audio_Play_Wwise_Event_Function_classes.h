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

// BlueprintGeneratedClass BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C
// 0x0040 (FullSize[0x0468] - InheritedSize[0x0428])
class ABP_Audio_Play_Wwise_Event_Function_C : public AActor
{
public:
	class UWwiseEmitterComponent*                      AudioComp;                                                 // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	TArray<class UWwiseEvent*>                         WwisePlayEvents;                                           // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       Wwise_Game_Parameter;                                      // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Wwise_Game_Parameter_Value;                                // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZEWS[0x4];                                     // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseObjectPoolWrapper*                     Wwise_Object_Pool_Wrapper;                                 // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UWwiseEvent*>                         WwiseStopEvents;                                           // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C");
		return ptr;
	}



	void StopAudio();
	void PlayAudio();
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
