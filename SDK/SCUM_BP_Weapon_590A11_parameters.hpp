#pragma once

// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.GetWidgetDisplayInfo
struct ABP_Weapon_590A11_C_GetWidgetDisplayInfo_Params
{
	struct FWidgetDisplayInfo                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.UserConstructionScript
struct ABP_Weapon_590A11_C_UserConstructionScript_Params
{
};

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.FillUpWithAmmo
struct ABP_Weapon_590A11_C_FillUpWithAmmo_Params
{
};

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.ExecuteUbergraph_BP_Weapon_590A11
struct ABP_Weapon_590A11_C_ExecuteUbergraph_BP_Weapon_590A11_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif