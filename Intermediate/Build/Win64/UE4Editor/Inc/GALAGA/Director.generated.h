// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGA_Director_generated_h
#error "Director.generated.h already included, missing '#pragma once' in Director.h"
#endif
#define GALAGA_Director_generated_h

#define GALAGA_Source_GALAGA_Builder_Director_h_13_SPARSE_DATA
#define GALAGA_Source_GALAGA_Builder_Director_h_13_RPC_WRAPPERS
#define GALAGA_Source_GALAGA_Builder_Director_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define GALAGA_Source_GALAGA_Builder_Director_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADirector(); \
	friend struct Z_Construct_UClass_ADirector_Statics; \
public: \
	DECLARE_CLASS(ADirector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA"), NO_API) \
	DECLARE_SERIALIZER(ADirector)


#define GALAGA_Source_GALAGA_Builder_Director_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADirector(); \
	friend struct Z_Construct_UClass_ADirector_Statics; \
public: \
	DECLARE_CLASS(ADirector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA"), NO_API) \
	DECLARE_SERIALIZER(ADirector)


#define GALAGA_Source_GALAGA_Builder_Director_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADirector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADirector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADirector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADirector(ADirector&&); \
	NO_API ADirector(const ADirector&); \
public:


#define GALAGA_Source_GALAGA_Builder_Director_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADirector(ADirector&&); \
	NO_API ADirector(const ADirector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADirector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADirector)


#define GALAGA_Source_GALAGA_Builder_Director_h_13_PRIVATE_PROPERTY_OFFSET
#define GALAGA_Source_GALAGA_Builder_Director_h_10_PROLOG
#define GALAGA_Source_GALAGA_Builder_Director_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_Source_GALAGA_Builder_Director_h_13_PRIVATE_PROPERTY_OFFSET \
	GALAGA_Source_GALAGA_Builder_Director_h_13_SPARSE_DATA \
	GALAGA_Source_GALAGA_Builder_Director_h_13_RPC_WRAPPERS \
	GALAGA_Source_GALAGA_Builder_Director_h_13_INCLASS \
	GALAGA_Source_GALAGA_Builder_Director_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GALAGA_Source_GALAGA_Builder_Director_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_Source_GALAGA_Builder_Director_h_13_PRIVATE_PROPERTY_OFFSET \
	GALAGA_Source_GALAGA_Builder_Director_h_13_SPARSE_DATA \
	GALAGA_Source_GALAGA_Builder_Director_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GALAGA_Source_GALAGA_Builder_Director_h_13_INCLASS_NO_PURE_DECLS \
	GALAGA_Source_GALAGA_Builder_Director_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_API UClass* StaticClass<class ADirector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GALAGA_Source_GALAGA_Builder_Director_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
