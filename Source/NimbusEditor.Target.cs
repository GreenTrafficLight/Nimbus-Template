using UnrealBuildTool;

public class NimbusEditorTarget : TargetRules {
	public NimbusEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		ExtraModuleNames.AddRange(new string[] {
			"Nimbus",
		});
	}
}
