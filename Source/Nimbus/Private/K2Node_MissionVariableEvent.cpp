#include "K2Node_MissionVariableEvent.h"

#include "CompilerResultsLog.h"
#include "EdGraphSchema_K2.h"
#include "EditorCategoryUtils.h"
#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintEditorUtils.h"
#include "BlueprintNodeSpawner.h"
#include "MissionVaraibleDelegateBinding.h"

#define LOCTEXT_NAMESPACE "UK2Node_MissionVariableEvent"

//int32 UK2Node_MissionVariableEvent::Counter = 0;

UK2Node_MissionVariableEvent::UK2Node_MissionVariableEvent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UK2Node_MissionVariableEvent::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);
}

void UK2Node_MissionVariableEvent::Initialize(const FVariableCondition InVariableCondition)
{
	VariableCondition = InVariableCondition;
	CustomFunctionName = FName(*FString::Printf(TEXT("MissionVariableEvt_%s"), *GetName()));
	//CustomFunctionName = FName(*FString::Printf(TEXT("MissionVariableEvt_K2Node_MissionVariableEvent_%d"), Counter));
}

FText UK2Node_MissionVariableEvent::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return NSLOCTEXT("K2Node", "Mission_Variable_Event", "Event Mission Variable");
}

void UK2Node_MissionVariableEvent::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{

	auto SetupCustomEventNodeLambda = [](UEdGraphNode* NewNode, bool bIsTemplateNode, FVariableCondition InVariableCondition)
	{
		UK2Node_MissionVariableEvent* EventNode = CastChecked<UK2Node_MissionVariableEvent>(NewNode);
		EventNode->Initialize(InVariableCondition);
	};

	UClass* ActionKey = GetClass();
	if (ActionRegistrar.IsOpenForRegistration(ActionKey))
	{
		UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
		check(NodeSpawner);

		NodeSpawner->CustomizeNodeDelegate = UBlueprintNodeSpawner::FCustomizeNodeDelegate::CreateStatic(SetupCustomEventNodeLambda, VariableCondition);
		ActionRegistrar.AddBlueprintAction(ActionKey, NodeSpawner);
	}
}

UClass* UK2Node_MissionVariableEvent::GetDynamicBindingClass() const
{
	return UMissionVaraibleDelegateBinding::StaticClass();
}

void UK2Node_MissionVariableEvent::RegisterDynamicBinding(UDynamicBlueprintBinding* BindingObject) const
{
	UMissionVaraibleDelegateBinding* MissionVaraibleBindingObject = CastChecked<UMissionVaraibleDelegateBinding>(BindingObject);

	FBlueprintMissionVariableDelegateBinding Binding;
	Binding.VariableCondition = VariableCondition;
	//Binding.FunctionNameToBind = FName(*FString::Printf(TEXT("MissionVariableEvt_K2Node_MissionVariableEvent_%d"), MissionVaraibleBindingObject->MissionVariableDelegateBindings.Num()));
	Binding.FunctionNameToBind = CustomFunctionName;
	//Counter = MissionVaraibleBindingObject->MissionVariableDelegateBindings.Num();

	MissionVaraibleBindingObject->MissionVariableDelegateBindings.Add(Binding);
}

#undef LOCTEXT_NAMESPACE