// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USAttributeComponent;
#ifdef ACTIONROGUELIKE_SAttributeComponent_generated_h
#error "SAttributeComponent.generated.h already included, missing '#pragma once' in SAttributeComponent.h"
#endif
#define ACTIONROGUELIKE_SAttributeComponent_generated_h

#define ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_9_DELEGATE \
struct _Script_ActionRogueLike_eventOnHealthChanged_Parms \
{ \
	AActor* InstigatorActor; \
	USAttributeComponent* OwningComp; \
	float NewHealth; \
	float Delta; \
}; \
static inline void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, AActor* InstigatorActor, USAttributeComponent* OwningComp, float NewHealth, float Delta) \
{ \
	_Script_ActionRogueLike_eventOnHealthChanged_Parms Parms; \
	Parms.InstigatorActor=InstigatorActor; \
	Parms.OwningComp=OwningComp; \
	Parms.NewHealth=NewHealth; \
	Parms.Delta=Delta; \
	OnHealthChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_SPARSE_DATA
#define ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyHealthChange);


#define ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyHealthChange);


#define ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSAttributeComponent(); \
	friend struct Z_Construct_UClass_USAttributeComponent_Statics; \
public: \
	DECLARE_CLASS(USAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRogueLike"), NO_API) \
	DECLARE_SERIALIZER(USAttributeComponent)


#define ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSAttributeComponent(); \
	friend struct Z_Construct_UClass_USAttributeComponent_Statics; \
public: \
	DECLARE_CLASS(USAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRogueLike"), NO_API) \
	DECLARE_SERIALIZER(USAttributeComponent)


#define ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USAttributeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USAttributeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAttributeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAttributeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAttributeComponent(USAttributeComponent&&); \
	NO_API USAttributeComponent(const USAttributeComponent&); \
public:


#define ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAttributeComponent(USAttributeComponent&&); \
	NO_API USAttributeComponent(const USAttributeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAttributeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAttributeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USAttributeComponent)


#define ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(USAttributeComponent, Health); }


#define ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_12_PROLOG
#define ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_SPARSE_DATA \
	ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_RPC_WRAPPERS \
	ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_INCLASS \
	ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_SPARSE_DATA \
	ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_INCLASS_NO_PURE_DECLS \
	ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class USAttributeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRogueLike_Source_ActionRogueLike_Public_SAttributeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
