// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Improvised_Wooden_Spear.Improvised_Wooden_Spear_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AImprovised_Wooden_Spear_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Improvised_Wooden_Spear.Improvised_Wooden_Spear_C.UserConstructionScript");

	AImprovised_Wooden_Spear_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
