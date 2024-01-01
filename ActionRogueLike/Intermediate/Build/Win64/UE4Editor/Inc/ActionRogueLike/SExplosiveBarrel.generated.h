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
#ifdef ACTIONROGUELIKE_SExplosiveBarrel_generated_h
#error "SExplosiveBarrel.generated.h already included, missing '#pragma once' in SExplosiveBarrel.h"
#endif
#define ACTIONROGUELIKE_SExplosiveBarrel_generated_h

#define ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_SPARSE_DATA
#define ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorHit);


#define ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorHit);


#define ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASExplosiveBarrel(); \
	friend struct Z_Construct_UClass_ASExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ASExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRogueLike"), NO_API) \
	DECLARE_SERIALIZER(ASExplosiveBarrel)


#define ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASExplosiveBarrel(); \
	friend struct Z_Construct_UClass_ASExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ASExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRogueLike"), NO_API) \
	DECLARE_SERIALIZER(ASExplosiveBarrel)


#define ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASExplosiveBarrel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASExplosiveBarrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASExplosiveBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASExplosiveBarrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASExplosiveBarrel(ASExplosiveBarrel&&); \
	NO_API ASExplosiveBarrel(const ASExplosiveBarrel&); \
public:


#define ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASExplosiveBarrel(ASExplosiveBarrel&&); \
	NO_API ASExplosiveBarrel(const ASExplosiveBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASExplosiveBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASExplosiveBarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASExplosiveBarrel)


#define ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASExplosiveBarrel, MeshComp); } \
	FORCEINLINE static uint32 __PPO__ForceComp() { return STRUCT_OFFSET(ASExplosiveBarrel, ForceComp); }


#define ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_14_PROLOG
#define ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_SPARSE_DATA \
	ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_RPC_WRAPPERS \
	ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_INCLASS \
	ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_SPARSE_DATA \
	ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_INCLASS_NO_PURE_DECLS \
	ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class ASExplosiveBarrel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRogueLike_Source_ActionRogueLike_Public_SExplosiveBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
