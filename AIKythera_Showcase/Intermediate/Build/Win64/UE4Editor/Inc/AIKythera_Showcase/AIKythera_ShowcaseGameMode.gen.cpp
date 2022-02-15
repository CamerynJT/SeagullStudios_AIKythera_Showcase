// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIKythera_Showcase/AIKythera_ShowcaseGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIKythera_ShowcaseGameMode() {}
// Cross Module References
	AIKYTHERA_SHOWCASE_API UClass* Z_Construct_UClass_AAIKythera_ShowcaseGameMode_NoRegister();
	AIKYTHERA_SHOWCASE_API UClass* Z_Construct_UClass_AAIKythera_ShowcaseGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AIKythera_Showcase();
// End Cross Module References
	void AAIKythera_ShowcaseGameMode::StaticRegisterNativesAAIKythera_ShowcaseGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAIKythera_ShowcaseGameMode_NoRegister()
	{
		return AAIKythera_ShowcaseGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAIKythera_ShowcaseGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIKythera_ShowcaseGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIKythera_Showcase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIKythera_ShowcaseGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AIKythera_ShowcaseGameMode.h" },
		{ "ModuleRelativePath", "AIKythera_ShowcaseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIKythera_ShowcaseGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIKythera_ShowcaseGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIKythera_ShowcaseGameMode_Statics::ClassParams = {
		&AAIKythera_ShowcaseGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAIKythera_ShowcaseGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIKythera_ShowcaseGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIKythera_ShowcaseGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIKythera_ShowcaseGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIKythera_ShowcaseGameMode, 2381808552);
	template<> AIKYTHERA_SHOWCASE_API UClass* StaticClass<AAIKythera_ShowcaseGameMode>()
	{
		return AAIKythera_ShowcaseGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIKythera_ShowcaseGameMode(Z_Construct_UClass_AAIKythera_ShowcaseGameMode, &AAIKythera_ShowcaseGameMode::StaticClass, TEXT("/Script/AIKythera_Showcase"), TEXT("AAIKythera_ShowcaseGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIKythera_ShowcaseGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
