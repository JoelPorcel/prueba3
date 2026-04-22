// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA/MethodFactory/FabricaMurosMovibles.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaMurosMovibles() {}
// Cross Module References
	GALAGA_API UClass* Z_Construct_UClass_AFabricaMurosMovibles_NoRegister();
	GALAGA_API UClass* Z_Construct_UClass_AFabricaMurosMovibles();
	GALAGA_API UClass* Z_Construct_UClass_AFabricaMuros();
	UPackage* Z_Construct_UPackage__Script_GALAGA();
// End Cross Module References
	void AFabricaMurosMovibles::StaticRegisterNativesAFabricaMurosMovibles()
	{
	}
	UClass* Z_Construct_UClass_AFabricaMurosMovibles_NoRegister()
	{
		return AFabricaMurosMovibles::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaMurosMovibles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaMurosMovibles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaMuros,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaMurosMovibles_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MethodFactory/FabricaMurosMovibles.h" },
		{ "ModuleRelativePath", "MethodFactory/FabricaMurosMovibles.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaMurosMovibles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaMurosMovibles>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaMurosMovibles_Statics::ClassParams = {
		&AFabricaMurosMovibles::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFabricaMurosMovibles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaMurosMovibles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaMurosMovibles()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaMurosMovibles_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaMurosMovibles, 2554795795);
	template<> GALAGA_API UClass* StaticClass<AFabricaMurosMovibles>()
	{
		return AFabricaMurosMovibles::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaMurosMovibles(Z_Construct_UClass_AFabricaMurosMovibles, &AFabricaMurosMovibles::StaticClass, TEXT("/Script/GALAGA"), TEXT("AFabricaMurosMovibles"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaMurosMovibles);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
