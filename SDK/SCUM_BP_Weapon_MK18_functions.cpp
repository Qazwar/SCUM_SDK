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

// Function BP_Weapon_MK18.BP_Weapon_MK18_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_MK18_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MK18.BP_Weapon_MK18_C.UserConstructionScript");

	ABP_Weapon_MK18_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MK18.BP_Weapon_MK18_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Weapon_MK18_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MK18.BP_Weapon_MK18_C.ReceiveBeginPlay");

	ABP_Weapon_MK18_C_ReceiveBeginPlay_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MK18.BP_Weapon_MK18_C.OnAttachmentAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_MK18_C::OnAttachmentAdded(class AWeapon* sender, class AWeaponAttachment* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MK18.BP_Weapon_MK18_C.OnAttachmentAdded");

	ABP_Weapon_MK18_C_OnAttachmentAdded_Params fn_params;
	fn_params.sender = sender;
	fn_params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MK18.BP_Weapon_MK18_C.OnAttachmentRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_MK18_C::OnAttachmentRemoved(class AWeapon* sender, class AWeaponAttachment* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MK18.BP_Weapon_MK18_C.OnAttachmentRemoved");

	ABP_Weapon_MK18_C_OnAttachmentRemoved_Params fn_params;
	fn_params.sender = sender;
	fn_params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MK18.BP_Weapon_MK18_C.ExecuteUbergraph_BP_Weapon_MK18
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_MK18_C::ExecuteUbergraph_BP_Weapon_MK18(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MK18.BP_Weapon_MK18_C.ExecuteUbergraph_BP_Weapon_MK18");

	ABP_Weapon_MK18_C_ExecuteUbergraph_BP_Weapon_MK18_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
