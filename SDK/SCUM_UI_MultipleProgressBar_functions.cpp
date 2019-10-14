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

// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetDisplayValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          value1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          value2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          value3                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          value4                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          value5                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MultipleProgressBar_C::SetDisplayValues(float value1, float value2, float value3, float value4, float value5)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetDisplayValues");

	UUI_MultipleProgressBar_C_SetDisplayValues_Params fn_params;
	fn_params.value1 = value1;
	fn_params.value2 = value2;
	fn_params.value3 = value3;
	fn_params.value4 = value4;
	fn_params.value5 = value5;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetMaxValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          limitMaxValue                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayMaxValue                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MultipleProgressBar_C::SetMaxValue(float MaxValue, float limitMaxValue, float DisplayMaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetMaxValue");

	UUI_MultipleProgressBar_C_SetMaxValue_Params fn_params;
	fn_params.MaxValue = MaxValue;
	fn_params.limitMaxValue = limitMaxValue;
	fn_params.DisplayMaxValue = DisplayMaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_MultipleProgressBar_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.OnMouseMove");

	UUI_MultipleProgressBar_C_OnMouseMove_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetPercentages
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percentage1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          percentage2                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          percentage3                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Percentage4                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          percentage5                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MultipleProgressBar_C::SetPercentages(float Percentage1, float percentage2, float percentage3, float Percentage4, float percentage5)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetPercentages");

	UUI_MultipleProgressBar_C_SetPercentages_Params fn_params;
	fn_params.Percentage1 = Percentage1;
	fn_params.percentage2 = percentage2;
	fn_params.percentage3 = percentage3;
	fn_params.Percentage4 = Percentage4;
	fn_params.percentage5 = percentage5;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_MultipleProgressBar_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.OnSynchronizeProperties");

	UUI_MultipleProgressBar_C_OnSynchronizeProperties_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MultipleProgressBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.Construct");

	UUI_MultipleProgressBar_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.ExecuteUbergraph_UI_MultipleProgressBar
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MultipleProgressBar_C::ExecuteUbergraph_UI_MultipleProgressBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.ExecuteUbergraph_UI_MultipleProgressBar");

	UUI_MultipleProgressBar_C_ExecuteUbergraph_UI_MultipleProgressBar_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
