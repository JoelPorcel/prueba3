// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGA_Muro_generated_h
#error "Muro.generated.h already included, missing '#pragma once' in Muro.h"
#endif
#define GALAGA_Muro_generated_h

#define GALAGA_Source_GALAGA_Muro_h_12_SPARSE_DATA
#define GALAGA_Source_GALAGA_Muro_h_12_RPC_WRAPPERS
#define GALAGA_Source_GALAGA_Muro_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GALAGA_Source_GALAGA_Muro_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMuro(); \
	friend struct Z_Construct_UClass_AMuro_Statics; \
public: \
	DECLARE_CLASS(AMuro, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA"), NO_API) \
	DECLARE_SERIALIZER(AMuro)


#define GALAGA_Source_GALAGA_Muro_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMuro(); \
	friend struct Z_Construct_UClass_AMuro_Statics; \
public: \
	DECLARE_CLASS(AMuro, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA"), NO_API) \
	DECLARE_SERIALIZER(AMuro)


#define GALAGA_Source_GALAGA_Muro_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMuro(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMuro) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMuro); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMuro); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMuro(AMuro&&); \
	NO_API AMuro(const AMuro&); \
public:


#define GALAGA_Source_GALAGA_Muro_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMuro(AMuro&&); \
	NO_API AMuro(const AMuro&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMuro); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMuro); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMuro)


#define GALAGA_Source_GALAGA_Muro_h_12_PRIVATE_PROPERTY_OFFSET
#define GALAGA_Source_GALAGA_Muro_h_9_PROLOG
#define GALAGA_Source_GALAGA_Muro_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_Source_GALAGA_Muro_h_12_PRIVATE_PROPERTY_OFFSET \
	GALAGA_Source_GALAGA_Muro_h_12_SPARSE_DATA \
	GALAGA_Source_GALAGA_Muro_h_12_RPC_WRAPPERS \
	GALAGA_Source_GALAGA_Muro_h_12_INCLASS \
	GALAGA_Source_GALAGA_Muro_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GALAGA_Source_GALAGA_Muro_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_Source_GALAGA_Muro_h_12_PRIVATE_PROPERTY_OFFSET \
	GALAGA_Source_GALAGA_Muro_h_12_SPARSE_DATA \
	GALAGA_Source_GALAGA_Muro_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GALAGA_Source_GALAGA_Muro_h_12_INCLASS_NO_PURE_DECLS \
	GALAGA_Source_GALAGA_Muro_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_API UClass* StaticClass<class AMuro>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GALAGA_Source_GALAGA_Muro_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
