// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGA_GALAGAPawn_generated_h
#error "GALAGAPawn.generated.h already included, missing '#pragma once' in GALAGAPawn.h"
#endif
#define GALAGA_GALAGAPawn_generated_h

#define GALAGA_Source_GALAGA_GALAGAPawn_h_12_SPARSE_DATA
#define GALAGA_Source_GALAGA_GALAGAPawn_h_12_RPC_WRAPPERS
#define GALAGA_Source_GALAGA_GALAGAPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GALAGA_Source_GALAGA_GALAGAPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGALAGAPawn(); \
	friend struct Z_Construct_UClass_AGALAGAPawn_Statics; \
public: \
	DECLARE_CLASS(AGALAGAPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA"), NO_API) \
	DECLARE_SERIALIZER(AGALAGAPawn)


#define GALAGA_Source_GALAGA_GALAGAPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGALAGAPawn(); \
	friend struct Z_Construct_UClass_AGALAGAPawn_Statics; \
public: \
	DECLARE_CLASS(AGALAGAPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA"), NO_API) \
	DECLARE_SERIALIZER(AGALAGAPawn)


#define GALAGA_Source_GALAGA_GALAGAPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGALAGAPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGALAGAPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGALAGAPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGALAGAPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGALAGAPawn(AGALAGAPawn&&); \
	NO_API AGALAGAPawn(const AGALAGAPawn&); \
public:


#define GALAGA_Source_GALAGA_GALAGAPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGALAGAPawn(AGALAGAPawn&&); \
	NO_API AGALAGAPawn(const AGALAGAPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGALAGAPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGALAGAPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGALAGAPawn)


#define GALAGA_Source_GALAGA_GALAGAPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(AGALAGAPawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AGALAGAPawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AGALAGAPawn, CameraBoom); }


#define GALAGA_Source_GALAGA_GALAGAPawn_h_9_PROLOG
#define GALAGA_Source_GALAGA_GALAGAPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_Source_GALAGA_GALAGAPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	GALAGA_Source_GALAGA_GALAGAPawn_h_12_SPARSE_DATA \
	GALAGA_Source_GALAGA_GALAGAPawn_h_12_RPC_WRAPPERS \
	GALAGA_Source_GALAGA_GALAGAPawn_h_12_INCLASS \
	GALAGA_Source_GALAGA_GALAGAPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GALAGA_Source_GALAGA_GALAGAPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_Source_GALAGA_GALAGAPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	GALAGA_Source_GALAGA_GALAGAPawn_h_12_SPARSE_DATA \
	GALAGA_Source_GALAGA_GALAGAPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GALAGA_Source_GALAGA_GALAGAPawn_h_12_INCLASS_NO_PURE_DECLS \
	GALAGA_Source_GALAGA_GALAGAPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_API UClass* StaticClass<class AGALAGAPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GALAGA_Source_GALAGA_GALAGAPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
