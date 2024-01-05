// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RPGv2 : ModuleRules
{
	public RPGv2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
