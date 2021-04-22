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

// Class GameplayDebugger.GameplayDebuggingComponent
// 0x0230 (FullSize[0x0780] - InheritedSize[0x0550])
class UGameplayDebuggingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_43GX[0x8];                                     // 0x0550(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DebugComponentClassName;                                   // 0x0558(0x0010) (ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash)
	int                                                ShowExtendedInformatiomCounter;                            // 0x0568(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S6VN[0x4];                                     // 0x056C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        ReplicateViewDataCounters;                                 // 0x0570(0x0010) (Net, ZeroConstructor)
	struct FString                                     ControllerName;                                            // 0x0580(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     PawnName;                                                  // 0x0590(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     PawnClass;                                                 // 0x05A0(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DebugIcon;                                                 // 0x05B0(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     MovementBaseInfo;                                          // 0x05C0(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     MovementModeInfo;                                          // 0x05D0(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     PathFollowingInfo;                                         // 0x05E0(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CurrentAITask;                                             // 0x05F0(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CurrentAIState;                                            // 0x0600(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CurrentAIAssets;                                           // 0x0610(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     GameplayTasksState;                                        // 0x0620(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     NavDataInfo;                                               // 0x0630(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     AbilityInfo;                                               // 0x0640(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     MontageInfo;                                               // 0x0650(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     BrainComponentName;                                        // 0x0660(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     BrainComponentString;                                      // 0x0670(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash)
	TArray<unsigned char>                              BlackboardRepData;                                         // 0x0680(0x0010) (Net, ZeroConstructor, RepNotify)
	unsigned char                                      UnknownData_2B1Q[0x10];                                    // 0x0690(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             PathPoints;                                                // 0x06A0(0x0010) (Net, ZeroConstructor)
	TArray<unsigned char>                              PathCorridorData;                                          // 0x06B0(0x0010) (Net, ZeroConstructor, RepNotify)
	unsigned char                                      UnknownData_7D03[0x10];                                    // 0x06C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              NavmeshRepData;                                            // 0x06D0(0x0010) (Net, ZeroConstructor, RepNotify)
	TArray<unsigned char>                              EQSRepData;                                                // 0x06E0(0x0010) (Net, ZeroConstructor, RepNotify)
	struct FVector                                     SensingComponentLocation;                                  // 0x06F0(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NextPathPointIndex;                                        // 0x06FC(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bIsUsingPathFollowing : 1;                                 // 0x0700(0x0001) BIT_FIELD (Net, NoDestructor)
	unsigned char                                      bIsUsingCharacter : 1;                                     // 0x0700(0x0001) BIT_FIELD (Net, NoDestructor)
	unsigned char                                      bIsUsingBehaviorTree : 1;                                  // 0x0700(0x0001) BIT_FIELD (Net, NoDestructor)
	unsigned char                                      bIsUsingAbilities : 1;                                     // 0x0700(0x0001) BIT_FIELD (Net, NoDestructor)
	unsigned char                                      UnknownData_2IJC[0x7];                                     // 0x0701(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TargetActor;                                               // 0x0708(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AGBJ[0x70];                                    // 0x0710(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingComponent");
		return ptr;
	}



	void ServerReplicateData(uint32_t InMessage, uint32_t DataView);
	void ServerDiscardNavmeshData();
	void ServerCollectNavmeshData(const struct FVector_NetQuantize10& TargetLocation);
	void OnRep_UpdateNavmesh();
	void OnRep_UpdateEQS();
	void OnRep_UpdateBlackboard();
	void OnRep_PathCorridorData();
	void OnCycleDetailsView();
	void ClientEnableTargetSelection(bool bEnable);
};

// Class GameplayDebugger.GameplayDebuggingHUDComponent
// 0x00F0 (FullSize[0x0518] - InheritedSize[0x0428])
class AGameplayDebuggingHUDComponent : public AActor
{
public:
	float                                              MenuStartX;                                                // 0x0428(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MenuStartY;                                                // 0x042C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DebugInfoStartX;                                           // 0x0430(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DebugInfoStartY;                                           // 0x0434(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvas*                                     Canvas;                                                    // 0x0438(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class APlayerController*                           PlayerOwner;                                               // 0x0440(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M0NL[0xD0];                                    // 0x0448(0x00D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingHUDComponent");
		return ptr;
	}



};

// Class GameplayDebugger.GameplayDebuggerSettings
// 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
class UGameplayDebuggerSettings : public UObject
{
public:
	struct FGDTCustomViewNames                         CustomViewNames;                                           // 0x0028(0x0050) (Edit, Config, Protected)
	bool                                               OverHead;                                                  // 0x0078(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	bool                                               Basic;                                                     // 0x0079(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	bool                                               BehaviorTree;                                              // 0x007A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	bool                                               EQS;                                                       // 0x007B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	bool                                               EnableEQSOnHUD;                                            // 0x007C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_H939[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ActiveEQSIndex;                                            // 0x0080(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               Perception;                                                // 0x0084(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	bool                                               GameView1;                                                 // 0x0085(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	bool                                               GameView2;                                                 // 0x0086(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	bool                                               GameView3;                                                 // 0x0087(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	bool                                               GameView4;                                                 // 0x0088(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	bool                                               GameView5;                                                 // 0x0089(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_JMAA[0x4E];                                    // 0x008A(0x004E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggerSettings");
		return ptr;
	}



};

// Class GameplayDebugger.GameplayDebuggingControllerComponent
// 0x02A0 (FullSize[0x0368] - InheritedSize[0x00C8])
class UGameplayDebuggingControllerComponent : public UActorComponent
{
public:
	class AGameplayDebuggingHUDComponent*              OnDebugAIHUD;                                              // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AActor*                                      DebugAITargetActor;                                        // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UInputComponent*                             AIDebugViewInputComponent;                                 // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UInputComponent*                             DebugCameraInputComponent;                                 // 0x00E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8G38[0x28];                                    // 0x00E8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInputChord                                 ActivationKey;                                             // 0x0110(0x0028) (Config)
	struct FInputChord                                 CategoryZeroBind;                                          // 0x0138(0x0028) (Config)
	struct FInputChord                                 CategoryOneBind;                                           // 0x0160(0x0028) (Config)
	struct FInputChord                                 CategoryTwoBind;                                           // 0x0188(0x0028) (Config)
	struct FInputChord                                 CategoryThreeBind;                                         // 0x01B0(0x0028) (Config)
	struct FInputChord                                 CategoryFourBind;                                          // 0x01D8(0x0028) (Config)
	struct FInputChord                                 CategoryFiveBind;                                          // 0x0200(0x0028) (Config)
	struct FInputChord                                 CategorySixBind;                                           // 0x0228(0x0028) (Config)
	struct FInputChord                                 CategorySevenBind;                                         // 0x0250(0x0028) (Config)
	struct FInputChord                                 CategoryEightBind;                                         // 0x0278(0x0028) (Config)
	struct FInputChord                                 CategoryNineBind;                                          // 0x02A0(0x0028) (Config)
	struct FInputChord                                 CycleDetailsViewBind;                                      // 0x02C8(0x0028) (Config)
	struct FInputChord                                 DebugCameraBind;                                           // 0x02F0(0x0028) (Config)
	struct FInputChord                                 OnScreenDebugMessagesBind;                                 // 0x0318(0x0028) (Config)
	struct FInputChord                                 GameHUDBind;                                               // 0x0340(0x0028) (Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingControllerComponent");
		return ptr;
	}



};

// Class GameplayDebugger.GaneplayDebuggerProxyHUD
// 0x0030 (FullSize[0x0550] - InheritedSize[0x0520])
class AGaneplayDebuggerProxyHUD : public AHUD
{
public:
	unsigned char                                      UnknownData_EFN9[0x30];                                    // 0x0520(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayDebugger.GaneplayDebuggerProxyHUD");
		return ptr;
	}



};

// Class GameplayDebugger.GameplayDebuggingReplicator
// 0x00E0 (FullSize[0x0508] - InheritedSize[0x0428])
class AGameplayDebuggingReplicator : public AActor
{
public:
	struct FString                                     DebugComponentClassName;                                   // 0x0428(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     DebugComponentHUDClassName;                                // 0x0438(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     DebugComponentControllerClassName;                         // 0x0448(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash)
	int                                                MaxEQSQueries;                                             // 0x0458(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8J17[0x4];                                     // 0x045C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameplayDebuggingComponent*                 DebugComponent;                                            // 0x0460(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           LocalPlayerOwner;                                          // 0x0468(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      LastSelectedActorToDebug;                                  // 0x0470(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsGlobalInWorld;                                          // 0x0478(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               bAutoActivate;                                             // 0x0479(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               OverHead;                                                  // 0x047A(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               Basic;                                                     // 0x047B(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               BehaviorTree;                                              // 0x047C(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               EQS;                                                       // 0x047D(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               EnableEQSOnHUD;                                            // 0x047E(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YODO[0x1];                                     // 0x047F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ActiveEQSIndex;                                            // 0x0480(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Perception;                                                // 0x0484(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               GameView1;                                                 // 0x0485(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               GameView2;                                                 // 0x0486(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               GameView3;                                                 // 0x0487(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               GameView4;                                                 // 0x0488(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               GameView5;                                                 // 0x0489(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2XRA[0x7E];                                    // 0x048A(0x007E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingReplicator");
		return ptr;
	}



	void ServerSetActorToDebug(class AActor* InActor);
	void ServerReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView);
	void OnRep_AutoActivate();
	void ClientReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView);
	void ClientEnableTargetSelection(bool bEnable, class APlayerController* Context);
	void ClientAutoActivate();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
