// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GALAGA_GALAGAProjectile_generated_h
#error "GALAGAProjectile.generated.h already included, missing '#pragma once' in GALAGAProjectile.h"
#endif
#define GALAGA_GALAGAProjectile_generated_h

#define GALAGA_Source_GALAGA_GALAGAProjectile_h_15_SPARSE_DATA
#define GALAGA_Source_GALAGA_GALAGAProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GALAGA_Source_GALAGA_GALAGAProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GALAGA_Source_GALAGA_GALAGAProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGALAGAProjectile(); \
	friend struct Z_Construct_UClass_AGALAGAProjectile_Statics; \
public: \
	DECLARE_CLASS(AGALAGAProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA"), NO_API) \
	DECLARE_SERIALIZER(AGALAGAProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GALAGA_Source_GALAGA_GALAGAProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGALAGAProjectile(); \
	friend struct Z_Construct_UClass_AGALAGAProjectile_Statics; \
public: \
	DECLARE_CLASS(AGALAGAProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA"), NO_API) \
	DECLARE_SERIALIZER(AGALAGAProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GALAGA_Source_GALAGA_GALAGAProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGALAGAProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGALAGAProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGALAGAProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGALAGAProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGALAGAProjectile(AGALAGAProjectile&&); \
	NO_API AGALAGAProjectile(const AGALAGAProjectile&); \
public:


#define GALAGA_Source_GALAGA_GALAGAProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGALAGAProjectile(AGALAGAProjectile&&); \
	NO_API AGALAGAProjectile(const AGALAGAProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGALAGAProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGALAGAProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGALAGAProjectile)


#define GALAGA_Source_GALAGA_GALAGAProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AGALAGAProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGALAGAProjectile, ProjectileMovement); }


#define GALAGA_Source_GALAGA_GALAGAProjectile_h_12_PROLOG
#define GALAGA_Source_GALAGA_GALAGAProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_Source_GALAGA_GALAGAProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GALAGA_Source_GALAGA_GALAGAProjectile_h_15_SPARSE_DATA \
	GALAGA_Source_GALAGA_GALAGAProjectile_h_15_RPC_WRAPPERS \
	GALAGA_Source_GALAGA_GALAGAProjectile_h_15_INCLASS \
	GALAGA_Source_GALAGA_GALAGAProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GALAGA_Source_GALAGA_GALAGAProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_Source_GALAGA_GALAGAProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GALAGA_Source_GALAGA_GALAGAProjectile_h_15_SPARSE_DATA \
	GALAGA_Source_GALAGA_GALAGAProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GALAGA_Source_GALAGA_GALAGAProjectile_h_15_INCLASS_NO_PURE_DECLS \
	GALAGA_Source_GALAGA_GALAGAProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_API UClass* StaticClass<class AGALAGAProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GALAGA_Source_GALAGA_GALAGAProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
