#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Survival_Storage_Mission.BP_Survival_Storage_Mission_C
// 0x0008 (0x0578 - 0x0570)
class ABP_Survival_Storage_Mission_C : public AMission
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Survival_Storage_Mission.BP_Survival_Storage_Mission_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
