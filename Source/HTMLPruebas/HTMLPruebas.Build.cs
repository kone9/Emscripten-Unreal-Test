// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class HTMLPruebas : ModuleRules
{
	public HTMLPruebas(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HTTP" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

        PublicIncludePaths.AddRange(
            new string[] {
                //"HTMLPruebas/Public",
                "emscripten"
            }
        );

       
        //PrivateIncludePaths.AddRange(
        //    new string[] {
        //        "HTMLPruebas/Private",
        //        "HTMLPruebas/ThirdParty/emscripten"
        //    }
        //);

        //if (Target.Platform == UnrealTargetPlatform.HTML5)
        //{
        //    PublicDefinitions.Add("EMSCRIPTEN=1");
        //}


        // Definir el símbolo EMSCRIPTEN para todo el proyecto
        //if (Target.Platform == UnrealTargetPlatform.HTML5)
        //{
        //    PublicDefinitions.Add("EMSCRIPTEN=1");
        //}

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}


