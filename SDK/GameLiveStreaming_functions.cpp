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

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
// (Final, Native, Static, Public, BlueprintCallable)
void UGameLiveStreamingFunctionLibrary::STATIC_StopBroadcastingGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame");

	UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            FrameRate                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ScreenScaling                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bEnableWebCam                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            DesiredWebCamWidth             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            DesiredWebCamHeight            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bMirrorWebCamImage             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bCaptureAudioFromComputer      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bCaptureAudioFromMicrophone    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bDrawSimpleWebCamVideo         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameLiveStreamingFunctionLibrary::STATIC_StartBroadcastingGame(int FrameRate, float ScreenScaling, bool bEnableWebCam, int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, bool bDrawSimpleWebCamVideo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame");

	UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params params;
	params.FrameRate = FrameRate;
	params.ScreenScaling = ScreenScaling;
	params.bEnableWebCam = bEnableWebCam;
	params.DesiredWebCamWidth = DesiredWebCamWidth;
	params.DesiredWebCamHeight = DesiredWebCamHeight;
	params.bMirrorWebCamImage = bMirrorWebCamImage;
	params.bCaptureAudioFromComputer = bCaptureAudioFromComputer;
	params.bCaptureAudioFromMicrophone = bCaptureAudioFromMicrophone;
	params.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameLiveStreamingFunctionLibrary::STATIC_IsBroadcastingGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame");

	UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 GameName                       (Parm, ZeroConstructor, HasGetValueTypeHash)
// class UQueryLiveStreamsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UQueryLiveStreamsCallbackProxy* UQueryLiveStreamsCallbackProxy::STATIC_QueryLiveStreams(const struct FString& GameName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams");

	UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params params;
	params.GameName = GameName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
