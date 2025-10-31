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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
TIMERPROJC_API UClass* Z_Construct_UClass_ATimer_Enemy();
TIMERPROJC_API UClass* Z_Construct_UClass_ATimer_Enemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_TimerProjc();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATimer_Enemy Function AddSpawnLocation ***********************************
struct Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation_Statics
{
	struct Timer_Enemy_eventAddSpawnLocation_Parms
	{
		FVector NewLocation;
		bool isActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SpawnLocations" },
		{ "ModuleRelativePath", "Timer_Enemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
	static void NewProp_isActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Timer_Enemy_eventAddSpawnLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation_Statics::NewProp_isActive_SetBit(void* Obj)
{
	((Timer_Enemy_eventAddSpawnLocation_Parms*)Obj)->isActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Timer_Enemy_eventAddSpawnLocation_Parms), &Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation_Statics::NewProp_NewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation_Statics::NewProp_isActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATimer_Enemy, nullptr, "AddSpawnLocation", Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation_Statics::Timer_Enemy_eventAddSpawnLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation_Statics::Timer_Enemy_eventAddSpawnLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATimer_Enemy::execAddSpawnLocation)
{
	P_GET_STRUCT(FVector,Z_Param_NewLocation);
	P_GET_UBOOL(Z_Param_isActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	ATimer_Enemy::AddSpawnLocation(Z_Param_NewLocation,Z_Param_isActive);
	P_NATIVE_END;
}
// ********** End Class ATimer_Enemy Function AddSpawnLocation *************************************

// ********** Begin Class ATimer_Enemy Function ClearList ******************************************
struct Z_Construct_UFunction_ATimer_Enemy_ClearList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ClearArray" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This will be used in a button\n" },
#endif
		{ "ModuleRelativePath", "Timer_Enemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will be used in a button" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimer_Enemy_ClearList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATimer_Enemy, nullptr, "ClearList", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimer_Enemy_ClearList_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimer_Enemy_ClearList_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATimer_Enemy_ClearList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimer_Enemy_ClearList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATimer_Enemy::execClearList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	ATimer_Enemy::ClearList();
	P_NATIVE_END;
}
// ********** End Class ATimer_Enemy Function ClearList ********************************************

// ********** Begin Class ATimer_Enemy Function RemoveFromLocation *********************************
struct Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation_Statics
{
	struct Timer_Enemy_eventRemoveFromLocation_Parms
	{
		FVector currentLocation;
		bool isActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RemoveFromLocation" },
		{ "ModuleRelativePath", "Timer_Enemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_currentLocation;
	static void NewProp_isActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation_Statics::NewProp_currentLocation = { "currentLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Timer_Enemy_eventRemoveFromLocation_Parms, currentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation_Statics::NewProp_isActive_SetBit(void* Obj)
{
	((Timer_Enemy_eventRemoveFromLocation_Parms*)Obj)->isActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Timer_Enemy_eventRemoveFromLocation_Parms), &Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation_Statics::NewProp_currentLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation_Statics::NewProp_isActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATimer_Enemy, nullptr, "RemoveFromLocation", Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation_Statics::Timer_Enemy_eventRemoveFromLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation_Statics::Timer_Enemy_eventRemoveFromLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATimer_Enemy::execRemoveFromLocation)
{
	P_GET_STRUCT(FVector,Z_Param_currentLocation);
	P_GET_UBOOL(Z_Param_isActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	ATimer_Enemy::RemoveFromLocation(Z_Param_currentLocation,Z_Param_isActive);
	P_NATIVE_END;
}
// ********** End Class ATimer_Enemy Function RemoveFromLocation ***********************************

// ********** Begin Class ATimer_Enemy *************************************************************
void ATimer_Enemy::StaticRegisterNativesATimer_Enemy()
{
	UClass* Class = ATimer_Enemy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddSpawnLocation", &ATimer_Enemy::execAddSpawnLocation },
		{ "ClearList", &ATimer_Enemy::execClearList },
		{ "RemoveFromLocation", &ATimer_Enemy::execRemoveFromLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATimer_Enemy_AddSpawnLocation, "AddSpawnLocation" }, // 1929379186
		{ &Z_Construct_UFunction_ATimer_Enemy_ClearList, "ClearList" }, // 958846176
		{ &Z_Construct_UFunction_ATimer_Enemy_RemoveFromLocation, "RemoveFromLocation" }, // 2579971983
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimer_Enemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
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
		{ Z_Construct_UClass_ATimer_Enemy, ATimer_Enemy::StaticClass, TEXT("ATimer_Enemy"), &Z_Registration_Info_UClass_ATimer_Enemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimer_Enemy), 3280031590U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_Timers_Console_TimerProjc_Source_TimerProjc_Timer_Enemy_h__Script_TimerProjc_1786383686(TEXT("/Script/TimerProjc"),
	Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_Timers_Console_TimerProjc_Source_TimerProjc_Timer_Enemy_h__Script_TimerProjc_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_Timers_Console_TimerProjc_Source_TimerProjc_Timer_Enemy_h__Script_TimerProjc_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
