// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA/MethodFactory/FabricaMurosComunes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaMurosComunes() {}
// Cross Module References
	GALAGA_API UClass* Z_Construct_UClass_AFabricaMurosComunes_NoRegister();
	GALAGA_API UClass* Z_Construct_UClass_AFabricaMurosComunes();
	GALAGA_API UClass* Z_Construct_UClass_AFabricaMuros();
	UPackage* Z_Construct_UPackage__Script_GALAGA();
// End Cross Module References
	void AFabricaMurosComunes::StaticRegisterNativesAFabricaMurosComunes()
	{
	}
	UClass* Z_Construct_UClass_AFabricaMurosComunes_NoRegister()
	{
		return AFabricaMurosComunes::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaMurosComunes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaMurosComunes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaMuros,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaMurosComunes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MethodFactory/FabricaMurosComunes.h" },
		{ "ModuleRelativePath", "MethodFactory/FabricaMurosComunes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaMurosComunes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaMurosComunes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaMurosComunes_Statics::ClassParams = {
		&AFabricaMurosComunes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaMurosComunes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaMurosComunes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaMurosComunes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaMurosComunes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaMurosComunes, 2665996511);
	template<> GALAGA_API UClass* StaticClass<AFabricaMurosComunes>()
	{
		return AFabricaMurosComunes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaMurosComunes(Z_Construct_UClass_AFabricaMurosComunes, &AFabricaMurosComunes::StaticClass, TEXT("/Script/GALAGA"), TEXT("AFabricaMurosComunes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaMurosComunes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
