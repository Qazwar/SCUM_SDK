// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DEagle_50Gold.BP_DEagle_50Gold_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DEagle_50Gold_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEagle_50Gold.BP_DEagle_50Gold_C.UserConstructionScript");

	ABP_DEagle_50Gold_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif