// Name: SoT, Version: 2.1.0

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

// Function CommodityDemandFramework.CommodityDemandService.OnRep_ActiveCommodityDemands
// (Final, RequiredAPI, Native, Private)
void ACommodityDemandService::OnRep_ActiveCommodityDemands()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommodityDemandFramework.CommodityDemandService.OnRep_ActiveCommodityDemands");

	ACommodityDemandService_OnRep_ActiveCommodityDemands_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
