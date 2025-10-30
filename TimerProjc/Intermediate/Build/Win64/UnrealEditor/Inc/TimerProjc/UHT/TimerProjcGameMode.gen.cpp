// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimerProjcGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTimerProjcGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TIMERPROJC_API UClass* Z_Construct_UClass_ATimerProjcGameMode();
TIMERPROJC_API UClass* Z_Construct_UClass_ATimerProjcGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TimerProjc();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATimerProjcGameMode ******************************************************
void ATimerProjcGameMode::StaticRegisterNativesATimerProjcGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATimerProjcGameMode;
UClass* ATimerProjcGameMode::GetPrivateStaticClass()
{
	using TClass = ATimerProjcGameMode;
	if (!Z_Registration_Info_UClass_ATimerProjcGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TimerProjcGameMode"),
			Z_Registration_Info_UClass_ATimerProjcGameMode.InnerSingleton,
			StaticRegisterNativesATimerProjcGameMode,
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
	return Z_Registration_Info_UClass_ATimerProjcGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ATimerProjcGameMode_NoRegister()
{
	return ATimerProjcGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATimerProjcGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TimerProjcGameMode.h" },
		{ "ModuleRelativePath", "TimerProjcGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimerProjcGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATimerProjcGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TimerProjc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimerProjcGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimerProjcGameMode_Statics::ClassParams = {
	&ATimerProjcGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimerProjcGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATimerProjcGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATimerProjcGameMode()
{
	if (!Z_Registration_Info_UClass_ATimerProjcGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimerProjcGameMode.OuterSingleton, Z_Construct_UClass_ATimerProjcGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATimerProjcGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATimerProjcGameMode);
ATimerProjcGameMode::~ATimerProjcGameMode() {}
// ********** End Class ATimerProjcGameMode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_Timers_Console_TimerProjc_Source_TimerProjc_TimerProjcGameMode_h__Script_TimerProjc_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATimerProjcGameMode, ATimerProjcGameMode::StaticClass, TEXT("ATimerProjcGameMode"), &Z_Registration_Info_UClass_ATimerProjcGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimerProjcGameMode), 3579908577U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_Timers_Console_TimerProjc_Source_TimerProjc_TimerProjcGameMode_h__Script_TimerProjc_151037023(TEXT("/Script/TimerProjc"),
	Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_Timers_Console_TimerProjc_Source_TimerProjc_TimerProjcGameMode_h__Script_TimerProjc_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_Timers_Console_TimerProjc_Source_TimerProjc_TimerProjcGameMode_h__Script_TimerProjc_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
