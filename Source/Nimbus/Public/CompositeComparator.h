#pragma once
#include "CoreMinimal.h"
#include "VariableComparator.h"
#include "CompositeComparator.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UCompositeComparator : public UVariableComparator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVariableComparator*> ChildComparators;
    
public:
    UCompositeComparator();
};

