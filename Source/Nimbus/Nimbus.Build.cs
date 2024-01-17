using UnrealBuildTool;

public class Nimbus : ModuleRules {
    public Nimbus(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnimGraphRuntime",
            "AnimationCore",
            "BlueprintGraph",
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "MovieScene",
            "MovieSceneTracks",
            "ProceduralMeshComponent",
            "Slate",
            "SlateCore",
            "UMG",
            "UnrealEd",
            "RenderCore",
        });
    }
}
