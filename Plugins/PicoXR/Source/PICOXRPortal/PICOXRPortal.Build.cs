// Copyright® PICO Technology Co., Ltd. All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc. in the United States of America and elsewhere.
// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class PICOXRPortal : ModuleRules
{
    public PICOXRPortal(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core", "Settings", "UnrealEd", "SettingsEditor", "PICOXRHMD", "GameProjectGeneration"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "Json",
                "UMG",
                "ToolWidgets",
                "UnrealEd", 
                "Blutility",
                "AndroidRuntimeSettings",
                "Projects",
                "Settings",
                "ToolMenus",
                "DeveloperSettings",
                "Json",
                "JsonUtilities",
                "PICOXRMR",
                "PICOXRHMD",
                "PICOXRInput",
                "PICOXRMotionTracking",
            }
        );
        
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            string AppLogThirdPartyDirectory = Path.Combine(ModuleDirectory, "../../Source/ThirdParty/AppLog");
            PublicIncludePaths.Add(Path.Combine(AppLogThirdPartyDirectory, "Include"));
            PublicAdditionalLibraries.Add(Path.Combine(AppLogThirdPartyDirectory, "Lib", "applogrs.dll.lib"));
            PublicDelayLoadDLLs.Add("applogrs.dll");
            RuntimeDependencies.Add(Path.Combine(AppLogThirdPartyDirectory, "Bin", "applogrs.dll"));
        }
    }
}