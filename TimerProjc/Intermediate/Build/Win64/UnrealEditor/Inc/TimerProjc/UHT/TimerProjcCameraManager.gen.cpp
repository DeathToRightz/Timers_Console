// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimerProjcCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTimerProjcCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
TIMERPROJC_API UClass* Z_Construct_UClass_ATimerProjcCameraManager();
TIMERPROJC_API UClass* Z_Construct_UClass_ATimerProjcCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_TimerProjc();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATimerProjcCameraManager *************************************************
void ATimerProjcCameraManager::StaticRegisterNativesATimerProjcCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATimerProjcCameraManager;
UClass* ATimerProjcCameraManager::GetPrivateStaticClass()
{
	using TClass = ATimerProjcCameraManager;
	if (!Z_Registration_Info_UClass_ATimerProjcCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TimerProjcCameraManager"),
			Z_Registration_Info_UClass_ATimerProjcCameraManager.InnerSingleton,
			StaticRegisterNativesATimerProjcCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ATimerProjcCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ATimerProjcCameraManager_NoRegister()
{
	return ATimerProjcCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATimerProjcCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "TimerProjcCameraManager.h" },
		{ "ModuleRelativePath", "TimerProjcCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimerProjcCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATimerProjcCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_TimerProjc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimerProjcCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimerProjcCameraManager_Statics::ClassParams = {
	&ATimerProjcCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimerProjcCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ATimerProjcCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATimerProjcCameraManager()
{
	if (!Z_Registration_Info_UClass_ATimerProjcCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimerProjcCameraManager.OuterSingleton, Z_Construct_UClass_ATimerProjcCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATimerProjcCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATimerProjcCameraManager);
ATimerProjcCameraManager::~ATimerProjcCameraManager() {}
// ********** End Class ATimerProjcCameraManager ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_Timers_Console_TimerProjc_Source_TimerProjc_TimerProjcCameraManager_h__Script_TimerProjc_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATimerProjcCameraManager, ATimerProjcCameraManager::StaticClass, TEXT("ATimerProjcCameraManager"), &Z_Registration_Info_UClass_ATimerProjcCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimerProjcCameraManager), 1664875326U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_Timers_Console_TimerProjc_Source_TimerProjc_TimerProjcCameraManager_h__Script_TimerProjc_3814413800(TEXT("/Script/TimerProjc"),
	Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_Timers_Console_TimerProjc_Source_TimerProjc_TimerProjcCameraManager_h__Script_TimerProjc_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_Timers_Console_TimerProjc_Source_TimerProjc_TimerProjcCameraManager_h__Script_TimerProjc_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
