// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA/Builder/BuilderA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderA() {}
// Cross Module References
	GALAGA_API UClass* Z_Construct_UClass_ABuilderA_NoRegister();
	GALAGA_API UClass* Z_Construct_UClass_ABuilderA();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA();
	GALAGA_API UClass* Z_Construct_UClass_UIBuilder_NoRegister();
// End Cross Module References
	void ABuilderA::StaticRegisterNativesABuilderA()
	{
	}
	UClass* Z_Construct_UClass_ABuilderA_NoRegister()
	{
		return ABuilderA::StaticClass();
	}
	struct Z_Construct_UClass_ABuilderA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilderA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderA_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Builder/BuilderA.h" },
		{ "ModuleRelativePath", "Builder/BuilderA.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuilderA_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIBuilder_NoRegister, (int32)VTABLE_OFFSET(ABuilderA, IIBuilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilderA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilderA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuilderA_Statics::ClassParams = {
		&ABuilderA::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuilderA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilderA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuilderA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilderA, 25658847);
	template<> GALAGA_API UClass* StaticClass<ABuilderA>()
	{
		return ABuilderA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilderA(Z_Construct_UClass_ABuilderA, &ABuilderA::StaticClass, TEXT("/Script/GALAGA"), TEXT("ABuilderA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilderA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
