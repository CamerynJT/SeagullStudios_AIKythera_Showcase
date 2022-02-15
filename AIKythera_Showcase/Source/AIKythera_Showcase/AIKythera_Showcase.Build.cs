// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AIKythera_Showcase : ModuleRules
{
	public AIKythera_Showcase(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
