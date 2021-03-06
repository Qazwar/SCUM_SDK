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

// Function PieProgressBar.PieProgressBar_C.HidePieImages
// (Public, BlueprintCallable, BlueprintEvent)

void UPieProgressBar_C::HidePieImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.HidePieImages");

	UPieProgressBar_C_HidePieImages_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.GetPercentageText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPieProgressBar_C::GetPercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.GetPercentageText");

	UPieProgressBar_C_GetPercentageText_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function PieProgressBar.PieProgressBar_C.SetImageColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UPieProgressBar_C::SetImageColor(class UImage* Image, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetImageColor");

	UPieProgressBar_C_SetImageColor_Params fn_params;
	fn_params.Image = Image;
	fn_params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UPieProgressBar_C::SetTextColor(class UTextBlock* textWidget, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetTextColor");

	UPieProgressBar_C_SetTextColor_Params fn_params;
	fn_params.textWidget = textWidget;
	fn_params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.SetCircularBarColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            circularBarColor               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UPieProgressBar_C::SetCircularBarColor(const struct FLinearColor& circularBarColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetCircularBarColor");

	UPieProgressBar_C_SetCircularBarColor_Params fn_params;
	fn_params.circularBarColor = circularBarColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.GetCircularBarColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            circularBarColor               (Parm, OutParm, IsPlainOldData)

void UPieProgressBar_C::GetCircularBarColor(struct FLinearColor* circularBarColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.GetCircularBarColor");

	UPieProgressBar_C_GetCircularBarColor_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (circularBarColor != nullptr)
		*circularBarColor = fn_params.circularBarColor;
}


// Function PieProgressBar.PieProgressBar_C.SetOuterCircleColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            OuterCircleColor               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UPieProgressBar_C::SetOuterCircleColor(const struct FLinearColor& OuterCircleColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetOuterCircleColor");

	UPieProgressBar_C_SetOuterCircleColor_Params fn_params;
	fn_params.OuterCircleColor = OuterCircleColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.GetOuterCircleColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            OuterCircleColor               (Parm, OutParm, IsPlainOldData)

void UPieProgressBar_C::GetOuterCircleColor(struct FLinearColor* OuterCircleColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.GetOuterCircleColor");

	UPieProgressBar_C_GetOuterCircleColor_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (OuterCircleColor != nullptr)
		*OuterCircleColor = fn_params.OuterCircleColor;
}


// Function PieProgressBar.PieProgressBar_C.GetNormalColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NormalColor                    (Parm, OutParm, IsPlainOldData)

void UPieProgressBar_C::GetNormalColor(struct FLinearColor* NormalColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.GetNormalColor");

	UPieProgressBar_C_GetNormalColor_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (NormalColor != nullptr)
		*NormalColor = fn_params.NormalColor;
}


// Function PieProgressBar.PieProgressBar_C.SetNormalColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NormalColor                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UPieProgressBar_C::SetNormalColor(const struct FLinearColor& NormalColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetNormalColor");

	UPieProgressBar_C_SetNormalColor_Params fn_params;
	fn_params.NormalColor = NormalColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.UpdatePercentageArc
// (Public, BlueprintCallable, BlueprintEvent)

void UPieProgressBar_C::UpdatePercentageArc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.UpdatePercentageArc");

	UPieProgressBar_C_UpdatePercentageArc_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.OnPercentageChanged
// (Protected, BlueprintCallable, BlueprintEvent)

void UPieProgressBar_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.OnPercentageChanged");

	UPieProgressBar_C_OnPercentageChanged_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPieProgressBar_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.Tick");

	UPieProgressBar_C_Tick_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPieProgressBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.Construct");

	UPieProgressBar_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UPieProgressBar_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.OnSynchronizeProperties");

	UPieProgressBar_C_OnSynchronizeProperties_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.ExecuteUbergraph_PieProgressBar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPieProgressBar_C::ExecuteUbergraph_PieProgressBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.ExecuteUbergraph_PieProgressBar");

	UPieProgressBar_C_ExecuteUbergraph_PieProgressBar_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
