// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Imortals : ModuleRules
{
	public Imortals(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
