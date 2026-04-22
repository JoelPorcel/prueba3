// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGA_IFabrica_generated_h
#error "IFabrica.generated.h already included, missing '#pragma once' in IFabrica.h"
#endif
#define GALAGA_IFabrica_generated_h

#define GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_SPARSE_DATA
#define GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_RPC_WRAPPERS
#define GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_API UIFabrica(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIFabrica) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_API, UIFabrica); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIFabrica); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_API UIFabrica(UIFabrica&&); \
	GALAGA_API UIFabrica(const UIFabrica&); \
public:


#define GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_API UIFabrica(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_API UIFabrica(UIFabrica&&); \
	GALAGA_API UIFabrica(const UIFabrica&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_API, UIFabrica); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIFabrica); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIFabrica)


#define GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIFabrica(); \
	friend struct Z_Construct_UClass_UIFabrica_Statics; \
public: \
	DECLARE_CLASS(UIFabrica, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GALAGA"), GALAGA_API) \
	DECLARE_SERIALIZER(UIFabrica)


#define GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_GENERATED_UINTERFACE_BODY() \
	GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_GENERATED_UINTERFACE_BODY() \
	GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIFabrica() {} \
public: \
	typedef UIFabrica UClassType; \
	typedef IIFabrica ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIFabrica() {} \
public: \
	typedef UIFabrica UClassType; \
	typedef IIFabrica ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_10_PROLOG
#define GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_SPARSE_DATA \
	GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_RPC_WRAPPERS \
	GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_SPARSE_DATA \
	GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_API UClass* StaticClass<class UIFabrica>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GALAGA_Source_GALAGA_AbstractFactory_IFabrica_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
