// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PGAP/PGAPGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePGAPGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PGAP_API UClass* Z_Construct_UClass_APGAPGameMode();
PGAP_API UClass* Z_Construct_UClass_APGAPGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PGAP();
// End Cross Module References

// Begin Class APGAPGameMode
void APGAPGameMode::StaticRegisterNativesAPGAPGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APGAPGameMode);
UClass* Z_Construct_UClass_APGAPGameMode_NoRegister()
{
	return APGAPGameMode::StaticClass();
}
struct Z_Construct_UClass_APGAPGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PGAPGameMode.h" },
		{ "ModuleRelativePath", "PGAPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APGAPGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APGAPGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PGAP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APGAPGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APGAPGameMode_Statics::ClassParams = {
	&APGAPGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APGAPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APGAPGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APGAPGameMode()
{
	if (!Z_Registration_Info_UClass_APGAPGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APGAPGameMode.OuterSingleton, Z_Construct_UClass_APGAPGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APGAPGameMode.OuterSingleton;
}
template<> PGAP_API UClass* StaticClass<APGAPGameMode>()
{
	return APGAPGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APGAPGameMode);
APGAPGameMode::~APGAPGameMode() {}
// End Class APGAPGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_PracticalGameAiProgramming_PGAP_Source_PGAP_PGAPGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APGAPGameMode, APGAPGameMode::StaticClass, TEXT("APGAPGameMode"), &Z_Registration_Info_UClass_APGAPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APGAPGameMode), 3568193265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_PracticalGameAiProgramming_PGAP_Source_PGAP_PGAPGameMode_h_2527100737(TEXT("/Script/PGAP"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_PracticalGameAiProgramming_PGAP_Source_PGAP_PGAPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_PracticalGameAiProgramming_PGAP_Source_PGAP_PGAPGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
