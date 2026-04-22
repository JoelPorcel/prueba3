// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA/MuroMovible.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroMovible() {}
// Cross Module References
	GALAGA_API UClass* Z_Construct_UClass_AMuroMovible_NoRegister();
	GALAGA_API UClass* Z_Construct_UClass_AMuroMovible();
	GALAGA_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_GALAGA();
// End Cross Module References
	void AMuroMovible::StaticRegisterNativesAMuroMovible()
	{
	}
	UClass* Z_Construct_UClass_AMuroMovible_NoRegister()
	{
		return AMuroMovible::StaticClass();
	}
	struct Z_Construct_UClass_AMuroMovible_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroMovible_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroMovible_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuroMovible.h" },
		{ "ModuleRelativePath", "MuroMovible.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroMovible_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroMovible>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroMovible_Statics::ClassParams = {
		&AMuroMovible::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMuroMovible_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroMovible_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroMovible()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroMovible_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroMovible, 1743482406);
	template<> GALAGA_API UClass* StaticClass<AMuroMovible>()
	{
		return AMuroMovible::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroMovible(Z_Construct_UClass_AMuroMovible, &AMuroMovible::StaticClass, TEXT("/Script/GALAGA"), TEXT("AMuroMovible"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroMovible);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
