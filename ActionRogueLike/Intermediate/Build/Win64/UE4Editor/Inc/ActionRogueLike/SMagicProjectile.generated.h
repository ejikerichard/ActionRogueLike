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
struct FHitResult;
#ifdef ACTIONROGUELIKE_SMagicProjectile_generated_h
#error "SMagicProjectile.generated.h already included, missing '#pragma once' in SMagicProjectile.h"
#endif
#define ACTIONROGUELIKE_SMagicProjectile_generated_h

#define ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_SPARSE_DATA
#define ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorOverlap);


#define ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorOverlap);


#define ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASMagicProjectile(); \
	friend struct Z_Construct_UClass_ASMagicProjectile_Statics; \
public: \
	DECLARE_CLASS(ASMagicProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRogueLike"), NO_API) \
	DECLARE_SERIALIZER(ASMagicProjectile)


#define ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASMagicProjectile(); \
	friend struct Z_Construct_UClass_ASMagicProjectile_Statics; \
public: \
	DECLARE_CLASS(ASMagicProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRogueLike"), NO_API) \
	DECLARE_SERIALIZER(ASMagicProjectile)


#define ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASMagicProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASMagicProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASMagicProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASMagicProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASMagicProjectile(ASMagicProjectile&&); \
	NO_API ASMagicProjectile(const ASMagicProjectile&); \
public:


#define ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASMagicProjectile(ASMagicProjectile&&); \
	NO_API ASMagicProjectile(const ASMagicProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASMagicProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASMagicProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASMagicProjectile)


#define ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ASMagicProjectile, SphereComp); } \
	FORCEINLINE static uint32 __PPO__MovementComp() { return STRUCT_OFFSET(ASMagicProjectile, MovementComp); } \
	FORCEINLINE static uint32 __PPO__EffectComp() { return STRUCT_OFFSET(ASMagicProjectile, EffectComp); }


#define ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_13_PROLOG
#define ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_SPARSE_DATA \
	ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_RPC_WRAPPERS \
	ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_INCLASS \
	ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_SPARSE_DATA \
	ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_INCLASS_NO_PURE_DECLS \
	ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class ASMagicProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRogueLike_Source_ActionRogueLike_Public_SMagicProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
