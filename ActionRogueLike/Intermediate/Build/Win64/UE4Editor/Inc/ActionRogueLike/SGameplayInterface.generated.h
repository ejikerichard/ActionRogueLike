// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef ACTIONROGUELIKE_SGameplayInterface_generated_h
#error "SGameplayInterface.generated.h already included, missing '#pragma once' in SGameplayInterface.h"
#endif
#define ACTIONROGUELIKE_SGameplayInterface_generated_h

#define ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_SPARSE_DATA
#define ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_RPC_WRAPPERS \
	virtual void Interact_Implementation(APawn* InstigatorPawn) {}; \
 \
	DECLARE_FUNCTION(execInteract);


#define ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(APawn* InstigatorPawn) {}; \
 \
	DECLARE_FUNCTION(execInteract);


#define ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_EVENT_PARMS \
	struct SGameplayInterface_eventInteract_Parms \
	{ \
		APawn* InstigatorPawn; \
	};


#define ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_CALLBACK_WRAPPERS
#define ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTIONROGUELIKE_API USGameplayInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGameplayInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTIONROGUELIKE_API, USGameplayInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGameplayInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACTIONROGUELIKE_API USGameplayInterface(USGameplayInterface&&); \
	ACTIONROGUELIKE_API USGameplayInterface(const USGameplayInterface&); \
public:


#define ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTIONROGUELIKE_API USGameplayInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACTIONROGUELIKE_API USGameplayInterface(USGameplayInterface&&); \
	ACTIONROGUELIKE_API USGameplayInterface(const USGameplayInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTIONROGUELIKE_API, USGameplayInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGameplayInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGameplayInterface)


#define ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSGameplayInterface(); \
	friend struct Z_Construct_UClass_USGameplayInterface_Statics; \
public: \
	DECLARE_CLASS(USGameplayInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ActionRogueLike"), ACTIONROGUELIKE_API) \
	DECLARE_SERIALIZER(USGameplayInterface)


#define ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_GENERATED_UINTERFACE_BODY() \
	ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_GENERATED_UINTERFACE_BODY() \
	ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISGameplayInterface() {} \
public: \
	typedef USGameplayInterface UClassType; \
	typedef ISGameplayInterface ThisClass; \
	static void Execute_Interact(UObject* O, APawn* InstigatorPawn); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISGameplayInterface() {} \
public: \
	typedef USGameplayInterface UClassType; \
	typedef ISGameplayInterface ThisClass; \
	static void Execute_Interact(UObject* O, APawn* InstigatorPawn); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_10_PROLOG \
	ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_EVENT_PARMS


#define ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_SPARSE_DATA \
	ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_RPC_WRAPPERS \
	ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_CALLBACK_WRAPPERS \
	ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_SPARSE_DATA \
	ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_CALLBACK_WRAPPERS \
	ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class USGameplayInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRogueLike_Source_ActionRogueLike_Public_SGameplayInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
