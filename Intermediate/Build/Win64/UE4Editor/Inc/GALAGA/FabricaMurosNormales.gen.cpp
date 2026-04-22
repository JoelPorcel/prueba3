// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA/AbstractFactory/FabricaMurosNormales.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaMurosNormales() {}
// Cross Module References
	GALAGA_API UClass* Z_Construct_UClass_AFabricaMurosNormales_NoRegister();
	GALAGA_API UClass* Z_Construct_UClass_AFabricaMurosNormales();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA();
	GALAGA_API UClass* Z_Construct_UClass_UIFabrica_NoRegister();
// End Cross Module References
	void AFabricaMurosNormales::StaticRegisterNativesAFabricaMurosNormales()
	{
	}
	UClass* Z_Construct_UClass_AFabricaMurosNormales_NoRegister()
	{
		return AFabricaMurosNormales::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaMurosNormales_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaMurosNormales_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaMurosNormales_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbstractFactory/FabricaMurosNormales.h" },
		{ "ModuleRelativePath", "AbstractFactory/FabricaMurosNormales.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFabricaMurosNormales_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIFabrica_NoRegister, (int32)VTABLE_OFFSET(AFabricaMurosNormales, IIFabrica), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaMurosNormales_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaMurosNormales>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaMurosNormales_Statics::ClassParams = {
		&AFabricaMurosNormales::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaMurosNormales_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaMurosNormales_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaMurosNormales()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaMurosNormales_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaMurosNormales, 63813281);
	template<> GALAGA_API UClass* StaticClass<AFabricaMurosNormales>()
	{
		return AFabricaMurosNormales::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaMurosNormales(Z_Construct_UClass_AFabricaMurosNormales, &AFabricaMurosNormales::StaticClass, TEXT("/Script/GALAGA"), TEXT("AFabricaMurosNormales"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaMurosNormales);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
