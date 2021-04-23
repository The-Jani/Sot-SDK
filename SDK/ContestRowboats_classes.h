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

// Class ContestRowboats.ContestRowboatsServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UContestRowboatsServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ContestRowboats.ContestRowboatsServiceInterface");
		return ptr;
	}



};

// Class ContestRowboats.ContestRowboatsService
// 0x0060 (FullSize[0x0488] - InheritedSize[0x0428])
class AContestRowboatsService : public AActor
{
public:
	unsigned char                                      UnknownData_J17H[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      RowboatClass;                                              // 0x0430(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TMH4[0x50];                                    // 0x0438(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ContestRowboats.ContestRowboatsService");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
