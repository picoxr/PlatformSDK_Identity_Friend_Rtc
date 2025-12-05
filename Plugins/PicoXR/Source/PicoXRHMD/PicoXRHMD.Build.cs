// Copyright PICO Technology Co., Ltd. All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc. in the United States of America and elsewhere.
// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class PICOXRHMD : ModuleRules
{
    public PICOXRHMD(ReadOnlyTargetRules Target) : base(Target)
    {
        var EngineDir = Path.GetFullPath(Target.RelativeEnginePath);

        PrivateIncludePaths.AddRange(
                new[] {
                    Path.Combine(EngineDir, "Source/Runtime/Renderer/Private"),
                    Path.Combine(EngineDir, "Source/Runtime/Renderer/Private"),
                    Path.Combine(EngineDir, "Source/Runtime/OpenGLDrv/Private"),
                    Path.Combine(EngineDir, "Source/Runtime/VulkanRHI/Private"),
                    Path.Combine(EngineDir, "Source/Runtime/Engine/Classes/Components"),
                    Path.Combine(EngineDir, "Source/Runtime/Engine/Classes/Kismet"),
                });

        PrivateIncludePaths.AddRange(
                new[] {
                    "PICOXRInput/Private",
                });

        PublicIncludePathModuleNames.AddRange(
            new[] {
                    "Launch",
                    "ProceduralMeshComponent",
                    "AndroidPermission",
                    "XRBase"
            });

        if (Target.Platform != UnrealTargetPlatform.Win64)
        {
            PrivateIncludePaths.Add(Path.Combine(EngineDir, "Source/Runtime/VulkanRHI/Private/") + Target.Platform);
        }

        PrivateDependencyModuleNames.AddRange(
            new[]
            {
                    "Core",
                    "CoreUObject",
                    "Engine",
                    "InputCore",
                    "RHI",
                    "RHICore",
                    "RenderCore",
                    "Renderer",
                    "Slate",
                    "SlateCore",
                    "ImageWrapper",
                    "MediaAssets",
                    "Analytics",
                    "OpenGLDrv",
                    "InputDevice",
                    "VulkanRHI",
                    "PXRPlugin",
                    "ProceduralMeshComponent",
                    "Projects",
                    "DeveloperSettings",
                    "XRBase"
            }
            );

        PublicDependencyModuleNames.AddRange(
            new[]
           {
                "HeadMountedDisplay",
                "EyeTracker"//
           });

        if (Target.bBuildEditor == true)
        {
            PrivateDependencyModuleNames.Add("UnrealEd");
        }

        AddEngineThirdPartyPrivateStaticDependencies(Target, "OpenGL");

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PublicIncludePaths.AddRange(
                new string[] {
                    Path.Combine(ModuleDirectory, "../ThirdParty/PXRPlugin/PXRPlugin/Include"),
                });
        }
        else if (Target.Platform == UnrealTargetPlatform.Android)
        {
            // Vulkan
            AddEngineThirdPartyPrivateStaticDependencies(Target, "Vulkan");
            
            {
                string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);
                AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(PluginPath, "PICOXR_UPL.xml"));
            }
        }
    }
}
