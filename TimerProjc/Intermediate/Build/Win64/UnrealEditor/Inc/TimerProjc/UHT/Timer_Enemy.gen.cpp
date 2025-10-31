// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Timer_Enemy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTimer_Enemy() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
TIMERPROJC_API UClass* Z_Construct_UClass_ATimer_Enemy();
TIMERPROJC_API UClass* Z_Construct_UClass_ATimer_Enemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_TimerProjc();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATimer_Enemy *************************************************************
void ATimer_Enemy::StaticRegisterNativesATimer_Enemy()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATimer_Enemy;
UClass* ATimer_Enemy::GetPrivateStaticClass()
{
	using TClass = ATimer_Enemy;
	if (!Z_Registration_Info_UClass_ATimer_Enemy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Timer_Enemy"),
			Z_Registration_Info_UClass_ATimer_Enemy.InnerSingleton,
			StaticRegisterNativesATimer_Enemy,
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
	return Z_Registration_Info_UClass_ATimer_Enemy.InnerSingleton;
}
UClass* Z_Construct_UClass_ATimer_Enemy_NoRegister()
{
	return ATimer_Enemy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATimer_Enemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Timer_Enemy.h" },
		{ "ModuleRelativePath", "Timer_Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRadius_MetaData[] = {
		{ "Category", "Enemy Spawner Variables" },
		{ "ModuleRelativePath", "Timer_Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyToSpawn_MetaData[] = {
		{ "Category", "Enemy Spawner Variables" },
		{ "ModuleRelativePath", "Timer_Enemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnRadius;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyToSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimer_Enemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimer_Enemy_Statics::NewProp_SpawnRadius = { "SpawnRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimer_Enemy, SpawnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRadius_MetaData), NewProp_SpawnRadius_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATimer_Enemy_Statics::NewProp_EnemyToSpawn = { "EnemyToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimer_Enemy, EnemyToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyToSpawn_MetaData), NewProp_EnemyToSpawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimer_Enemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimer_Enemy_Statics::NewProp_SpawnRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimer_Enemy_Statics::NewProp_EnemyToSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimer_Enemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATimer_Enemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TimerProjc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimer_Enemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimer_Enemy_Statics::ClassParams = {
	&ATimer_Enemy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATimer_Enemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATimer_Enemy_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimer_Enemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ATimer_Enemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATimer_Enemy()
{
	if (!Z_Registration_Info_UClass_ATimer_Enemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimer_Enemy.OuterSingleton, Z_Construct_UClass_ATimer_Enemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATimer_Enemy.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATimer_Enemy);
ATimer_Enemy::~ATimer_Enemy() {}
// ********** End Class ATimer_Enemy ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_Timers_Console_TimerProjc_Source_TimerProjc_Timer_Enemy_h__Script_TimerProjc_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATimer_Enemy, ATimer_Enemy::StaticClass, TEXT("ATimer_Enemy"), &Z_Registration_Info_UClass_ATimer_Enemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimer_Enemy), 3156630359U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_Timers_Console_TimerProjc_Source_TimerProjc_Timer_Enemy_h__Script_TimerProjc_1162295730(TEXT("/Script/TimerProjc"),
	Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_Timers_Console_TimerProjc_Source_TimerProjc_Timer_Enemy_h__Script_TimerProjc_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_Timers_Console_TimerProjc_Source_TimerProjc_Timer_Enemy_h__Script_TimerProjc_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
