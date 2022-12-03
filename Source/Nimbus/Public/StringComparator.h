#pragma once
#include "CoreMinimal.h"
#include "VariableComparator.h"
#include "StringComparator.generated.h"

class UStrProperty;

UCLASS(Blueprintable)
class NIMBUS_API UStringComparator : public UVariableComparator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStrProperty* Property;
    
public:
    UStringComparator();
};

