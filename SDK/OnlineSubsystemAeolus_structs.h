#pragma once

// Name: SoT, Version: 2.1.1


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

// ScriptStruct OnlineSubsystemAeolus.SessionJoinThroughServiceRequestModel
// 0x0020
struct FSessionJoinThroughServiceRequestModel
{
	struct FString                                     OwningUserId;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SessionTemplateName;                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
