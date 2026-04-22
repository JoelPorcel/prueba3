// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGA_BuilderA_generated_h
#error "BuilderA.generated.h already included, missing '#pragma once' in BuilderA.h"
#endif
#define GALAGA_BuilderA_generated_h

#define GALAGA_Source_GALAGA_Builder_BuilderA_h_15_SPARSE_DATA
#define GALAGA_Source_GALAGA_Builder_BuilderA_h_15_RPC_WRAPPERS
#define GALAGA_Source_GALAGA_Builder_BuilderA_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define GALAGA_Source_GALAGA_Builder_BuilderA_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuilderA(); \
	friend struct Z_Construct_UClass_ABuilderA_Statics; \
public: \
	DECLARE_CLASS(ABuilderA, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA"), NO_API) \
	DECLARE_SERIALIZER(ABuilderA) \
	virtual UObject* _getUObject() const override { return const_cast<ABuilderA*>(this); }


#define GALAGA_Source_GALAGA_Builder_BuilderA_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABuilderA(); \
	friend struct Z_Construct_UClass_ABuilderA_Statics; \
public: \
	DECLARE_CLASS(ABuilderA, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA"), NO_API) \
	DECLARE_SERIALIZER(ABuilderA) \
	virtual UObject* _getUObject() const override { return const_cast<ABuilderA*>(this); }


#define GALAGA_Source_GALAGA_Builder_BuilderA_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuilderA(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuilderA) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuilderA); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuilderA); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuilderA(ABuilderA&&); \
	NO_API ABuilderA(const ABuilderA&); \
public:


#define GALAGA_Source_GALAGA_Builder_BuilderA_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuilderA(ABuilderA&&); \
	NO_API ABuilderA(const ABuilderA&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuilderA); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuilderA); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABuilderA)


#define GALAGA_Source_GALAGA_Builder_BuilderA_h_15_PRIVATE_PROPERTY_OFFSET
#define GALAGA_Source_GALAGA_Builder_BuilderA_h_12_PROLOG
#define GALAGA_Source_GALAGA_Builder_BuilderA_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_Source_GALAGA_Builder_BuilderA_h_15_PRIVATE_PROPERTY_OFFSET \
	GALAGA_Source_GALAGA_Builder_BuilderA_h_15_SPARSE_DATA \
	GALAGA_Source_GALAGA_Builder_BuilderA_h_15_RPC_WRAPPERS \
	GALAGA_Source_GALAGA_Builder_BuilderA_h_15_INCLASS \
	GALAGA_Source_GALAGA_Builder_BuilderA_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GALAGA_Source_GALAGA_Builder_BuilderA_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_Source_GALAGA_Builder_BuilderA_h_15_PRIVATE_PROPERTY_OFFSET \
	GALAGA_Source_GALAGA_Builder_BuilderA_h_15_SPARSE_DATA \
	GALAGA_Source_GALAGA_Builder_BuilderA_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GALAGA_Source_GALAGA_Builder_BuilderA_h_15_INCLASS_NO_PURE_DECLS \
	GALAGA_Source_GALAGA_Builder_BuilderA_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_API UClass* StaticClass<class ABuilderA>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GALAGA_Source_GALAGA_Builder_BuilderA_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
