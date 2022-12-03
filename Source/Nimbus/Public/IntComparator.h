#pragma once
#include "CoreMinimal.h"
#include "VariableComparator.h"
#include "IntComparator.generated.h"

class UIntProperty;

UCLASS(Blueprintable)
class NIMBUS_API UIntComparator : public UVariableComparator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIntProperty* Property;
    
public:
    UIntComparator();
};

