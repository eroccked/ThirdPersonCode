// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonCode/ThirdPersonCodeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonCodeGameMode() {}
// Cross Module References
	THIRDPERSONCODE_API UClass* Z_Construct_UClass_AThirdPersonCodeGameMode_NoRegister();
	THIRDPERSONCODE_API UClass* Z_Construct_UClass_AThirdPersonCodeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonCode();
// End Cross Module References
	void AThirdPersonCodeGameMode::StaticRegisterNativesAThirdPersonCodeGameMode()
	{
	}
	UClass* Z_Construct_UClass_AThirdPersonCodeGameMode_NoRegister()
	{
		return AThirdPersonCodeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPersonCodeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdPersonCodeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCodeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ThirdPersonCodeGameMode.h" },
		{ "ModuleRelativePath", "ThirdPersonCodeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdPersonCodeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonCodeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonCodeGameMode_Statics::ClassParams = {
		&AThirdPersonCodeGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCodeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCodeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThirdPersonCodeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThirdPersonCodeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThirdPersonCodeGameMode, 4193945316);
	template<> THIRDPERSONCODE_API UClass* StaticClass<AThirdPersonCodeGameMode>()
	{
		return AThirdPersonCodeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThirdPersonCodeGameMode(Z_Construct_UClass_AThirdPersonCodeGameMode, &AThirdPersonCodeGameMode::StaticClass, TEXT("/Script/ThirdPersonCode"), TEXT("AThirdPersonCodeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonCodeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
