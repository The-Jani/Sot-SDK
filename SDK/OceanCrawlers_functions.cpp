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

// Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayAudio
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// TEnumAsByte<AthenaAI_EOceanCrawlerAbilityAudioKey> InAudioKey                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UOceanCrawlerAudioBroadcaster::Multicast_PlayAudio(TEnumAsByte<AthenaAI_EOceanCrawlerAbilityAudioKey> InAudioKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayAudio");

	UOceanCrawlerAudioBroadcaster_Multicast_PlayAudio_Params params;
	params.InAudioKey = InAudioKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
