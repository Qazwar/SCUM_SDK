#pragma once

// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DesertEagle_RemoveMagInsertMagChamber.BP_DesertEagle_RemoveMagInsertMagChamber_C
// 0x0004 (0x0084 - 0x0080)
class UBP_DesertEagle_RemoveMagInsertMagChamber_C : public URemoveMagazineInsertMagazine
{
public:
	int                                                MaxAmmoCount;                                             // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DesertEagle_RemoveMagInsertMagChamber.BP_DesertEagle_RemoveMagInsertMagChamber_C");
		return ptr;
	}


	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif