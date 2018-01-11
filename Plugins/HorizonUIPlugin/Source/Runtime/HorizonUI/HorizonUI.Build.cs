// Crated by dorgon, All Rights Reserved.
// email: dorgonman@hotmail.com
// blog: dorgon.horizon-studio.net

using System;
using System.IO;
using UnrealBuildTool;

public class HorizonUI : ModuleRules
{

   
    public HorizonUI(ReadOnlyTargetRules Target)
        : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;


       // MinFilesUsingPrecompiledHeaderOverride = 1;
        //bFasterWithoutUnity = true;
        PublicIncludePaths.AddRange(
			new string[] {
                "Runtime/HorizonUI/Public",
				
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
                "Runtime/HorizonUI/Private",
				// ... add other private include paths required here ...
			}
			);




        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore", "UMG", "Paper2D" });
        PrivateDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
        PrivateDependencyModuleNames.AddRange(new string[] { "ImageWrapper", "XmlParser" });


        DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

    }
}
