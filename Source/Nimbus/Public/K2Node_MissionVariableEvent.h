#pragma once
#include "VariableCondition.h"
#include "K2Node_Event.h"
#include "K2Node_MissionVariableEvent.generated.h"

UCLASS()
class NIMBUS_API UK2Node_MissionVariableEvent : public UK2Node_Event
{
	GENERATED_UCLASS_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "YourCategory")
		FVariableCondition VariableCondition;

	//~ Begin UObject Interface
	virtual void Serialize(FArchive& Ar) override;
	//~ End UObject Interface

		//~ Begin EdGraphNode Interface
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	//~ End EdGraphNode Interface

	//~ Begin UK2Node Interface
	virtual UClass* GetDynamicBindingClass() const override;
	virtual void RegisterDynamicBinding(UDynamicBlueprintBinding* BindingObject) const override;
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual bool ShouldShowNodeProperties() const override { return true; }
	//~ End UK2Node Interface

	void Initialize(const FVariableCondition VariableCondition);

public:
	/** Constructing FText strings can be costly, so we cache the node's tooltip */
	FNodeTextCache CachedTooltip;

private:
	static int32 Counter;

};