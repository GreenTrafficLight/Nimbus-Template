#pragma once
#include "CoreMinimal.h"
#include "VariableComparator.h"
#include "BoolComparator.generated.h"

class UBoolProperty;

UCLASS(Blueprintable)
class NIMBUS_API UBoolComparator : public UVariableComparator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBoolProperty* Property;
    
public:
    UBoolComparator();
};

