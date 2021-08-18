// Name: S, Version: 2.2.1

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

// Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayBuffAudio
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// struct FEventOceanCrawlerAIBuffAudioRequest InRequest                      (ConstParm, Parm, ReferenceParm)
void UOceanCrawlerAudioBroadcaster::Multicast_PlayBuffAudio(const struct FEventOceanCrawlerAIBuffAudioRequest& InRequest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayBuffAudio");

	UOceanCrawlerAudioBroadcaster_Multicast_PlayBuffAudio_Params params;
	params.InRequest = InRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayAudio
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// TEnumAsByte<AthenaAI_EOceanCrawlerAbilityAudioKey> InAudioKey                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InAudioDelay                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOceanCrawlerAudioBroadcaster::Multicast_PlayAudio(TEnumAsByte<AthenaAI_EOceanCrawlerAbilityAudioKey> InAudioKey, float InAudioDelay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayAudio");

	UOceanCrawlerAudioBroadcaster_Multicast_PlayAudio_Params params;
	params.InAudioKey = InAudioKey;
	params.InAudioDelay = InAudioDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
