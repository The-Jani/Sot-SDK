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

// BlueprintGeneratedClass AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C
// 0x0034 (FullSize[0x0064] - InheritedSize[0x0030])
class UAnimNotify_PlayParticleEffect_C : public UAnimNotify
{
public:
	class UParticleSystem*                             PSTemplate;                                                // 0x0030(0x0008) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FString                                     SocketName;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Attached;                                                  // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YSYQ[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LocationOffset;                                            // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    RotationOffset;                                            // 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C");
		return ptr;
	}



	struct FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
