// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA/MethodFactory/FabricaMurosTrampa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaMurosTrampa() {}
// Cross Module References
	GALAGA_API UClass* Z_Construct_UClass_AFabricaMurosTrampa_NoRegister();
	GALAGA_API UClass* Z_Construct_UClass_AFabricaMurosTrampa();
	GALAGA_API UClass* Z_Construct_UClass_AFabricaMuros();
	UPackage* Z_Construct_UPackage__Script_GALAGA();
// End Cross Module References
	void AFabricaMurosTrampa::StaticRegisterNativesAFabricaMurosTrampa()
	{
	}
	UClass* Z_Construct_UClass_AFabricaMurosTrampa_NoRegister()
	{
		return AFabricaMurosTrampa::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaMurosTrampa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaMurosTrampa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaMuros,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaMurosTrampa_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MethodFactory/FabricaMurosTrampa.h" },
		{ "ModuleRelativePath", "MethodFactory/FabricaMurosTrampa.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaMurosTrampa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaMurosTrampa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaMurosTrampa_Statics::ClassParams = {
		&AFabricaMurosTrampa::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaMurosTrampa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaMurosTrampa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaMurosTrampa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaMurosTrampa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaMurosTrampa, 3501111467);
	template<> GALAGA_API UClass* StaticClass<AFabricaMurosTrampa>()
	{
		return AFabricaMurosTrampa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaMurosTrampa(Z_Construct_UClass_AFabricaMurosTrampa, &AFabricaMurosTrampa::StaticClass, TEXT("/Script/GALAGA"), TEXT("AFabricaMurosTrampa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaMurosTrampa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
