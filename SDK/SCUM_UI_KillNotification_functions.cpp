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

// Function UI_KillNotification.UI_KillNotification_C.SetMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   prefix                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   characterName                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   suffix                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_KillNotification_C::SetMessage(const struct FText& prefix, const struct FText& characterName, const struct FText& suffix)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillNotification.UI_KillNotification_C.SetMessage");

	UUI_KillNotification_C_SetMessage_Params fn_params;
	fn_params.prefix = prefix;
	fn_params.characterName = characterName;
	fn_params.suffix = suffix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_KillNotification.UI_KillNotification_C.GetMessageVisibility
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_KillNotification_C::GetMessageVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillNotification.UI_KillNotification_C.GetMessageVisibility");

	UUI_KillNotification_C_GetMessageVisibility_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_KillNotification.UI_KillNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_KillNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillNotification.UI_KillNotification_C.Construct");

	UUI_KillNotification_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_KillNotification.UI_KillNotification_C.ExecuteUbergraph_UI_KillNotification
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KillNotification_C::ExecuteUbergraph_UI_KillNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillNotification.UI_KillNotification_C.ExecuteUbergraph_UI_KillNotification");

	UUI_KillNotification_C_ExecuteUbergraph_UI_KillNotification_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
