#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VariableComparator.generated.h"

UCLASS(Abstract, Blueprintable)
class NIMBUS_API UVariableComparator : public UObject {
    GENERATED_BODY()
public:
    UVariableComparator();
};

