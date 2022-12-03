using UnrealBuildTool;

public class NimbusTarget : TargetRules {
	public NimbusTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"Nimbus",
		});
	}
}
