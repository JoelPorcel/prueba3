// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGA_IBuilder_generated_h
#error "IBuilder.generated.h already included, missing '#pragma once' in IBuilder.h"
#endif
#define GALAGA_IBuilder_generated_h

#define GALAGA_Source_GALAGA_Builder_IBuilder_h_12_SPARSE_DATA
#define GALAGA_Source_GALAGA_Builder_IBuilder_h_12_RPC_WRAPPERS
#define GALAGA_Source_GALAGA_Builder_IBuilder_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GALAGA_Source_GALAGA_Builder_IBuilder_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_API UIBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_API, UIBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_API UIBuilder(UIBuilder&&); \
	GALAGA_API UIBuilder(const UIBuilder&); \
public:


#define GALAGA_Source_GALAGA_Builder_IBuilder_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_API UIBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_API UIBuilder(UIBuilder&&); \
	GALAGA_API UIBuilder(const UIBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_API, UIBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIBuilder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIBuilder)


#define GALAGA_Source_GALAGA_Builder_IBuilder_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIBuilder(); \
	friend struct Z_Construct_UClass_UIBuilder_Statics; \
public: \
	DECLARE_CLASS(UIBuilder, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GALAGA"), GALAGA_API) \
	DECLARE_SERIALIZER(UIBuilder)


#define GALAGA_Source_GALAGA_Builder_IBuilder_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GALAGA_Source_GALAGA_Builder_IBuilder_h_12_GENERATED_UINTERFACE_BODY() \
	GALAGA_Source_GALAGA_Builder_IBuilder_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GALAGA_Source_GALAGA_Builder_IBuilder_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GALAGA_Source_GALAGA_Builder_IBuilder_h_12_GENERATED_UINTERFACE_BODY() \
	GALAGA_Source_GALAGA_Builder_IBuilder_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GALAGA_Source_GALAGA_Builder_IBuilder_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIBuilder() {} \
public: \
	typedef UIBuilder UClassType; \
	typedef IIBuilder ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GALAGA_Source_GALAGA_Builder_IBuilder_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IIBuilder() {} \
public: \
	typedef UIBuilder UClassType; \
	typedef IIBuilder ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GALAGA_Source_GALAGA_Builder_IBuilder_h_9_PROLOG
#define GALAGA_Source_GALAGA_Builder_IBuilder_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_Source_GALAGA_Builder_IBuilder_h_12_SPARSE_DATA \
	GALAGA_Source_GALAGA_Builder_IBuilder_h_12_RPC_WRAPPERS \
	GALAGA_Source_GALAGA_Builder_IBuilder_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GALAGA_Source_GALAGA_Builder_IBuilder_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_Source_GALAGA_Builder_IBuilder_h_12_SPARSE_DATA \
	GALAGA_Source_GALAGA_Builder_IBuilder_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GALAGA_Source_GALAGA_Builder_IBuilder_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_API UClass* StaticClass<class UIBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GALAGA_Source_GALAGA_Builder_IBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
