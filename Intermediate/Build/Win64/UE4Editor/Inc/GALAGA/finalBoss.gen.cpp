// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA/finalBoss.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefinalBoss() {}
// Cross Module References
	GALAGA_API UClass* Z_Construct_UClass_AfinalBoss_NoRegister();
	GALAGA_API UClass* Z_Construct_UClass_AfinalBoss();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AfinalBoss::StaticRegisterNativesAfinalBoss()
	{
	}
	UClass* Z_Construct_UClass_AfinalBoss_NoRegister()
	{
		return AfinalBoss::StaticClass();
	}
	struct Z_Construct_UClass_AfinalBoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instancia_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instancia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_naveMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_naveMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AfinalBoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AfinalBoss_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "finalBoss.h" },
		{ "ModuleRelativePath", "finalBoss.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AfinalBoss_Statics::NewProp_Instancia_MetaData[] = {
		{ "ModuleRelativePath", "finalBoss.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AfinalBoss_Statics::NewProp_Instancia = { "Instancia", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AfinalBoss, Instancia), Z_Construct_UClass_AfinalBoss_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AfinalBoss_Statics::NewProp_Instancia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AfinalBoss_Statics::NewProp_Instancia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AfinalBoss_Statics::NewProp_naveMesh_MetaData[] = {
		{ "Category", "finalBoss" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "finalBoss.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AfinalBoss_Statics::NewProp_naveMesh = { "naveMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AfinalBoss, naveMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AfinalBoss_Statics::NewProp_naveMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AfinalBoss_Statics::NewProp_naveMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AfinalBoss_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AfinalBoss_Statics::NewProp_Instancia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AfinalBoss_Statics::NewProp_naveMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AfinalBoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AfinalBoss>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AfinalBoss_Statics::ClassParams = {
		&AfinalBoss::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AfinalBoss_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AfinalBoss_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AfinalBoss_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AfinalBoss_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AfinalBoss()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AfinalBoss_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AfinalBoss, 1890714667);
	template<> GALAGA_API UClass* StaticClass<AfinalBoss>()
	{
		return AfinalBoss::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AfinalBoss(Z_Construct_UClass_AfinalBoss, &AfinalBoss::StaticClass, TEXT("/Script/GALAGA"), TEXT("AfinalBoss"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AfinalBoss);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
