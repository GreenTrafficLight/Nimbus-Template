#pragma once
#include "CoreMinimal.h"
#include "MapChangeTransitionDelayObject.h"
#include "MultiCheckingPrivilegeMapChangeTransitionDelayObject.generated.h"

UCLASS(Blueprintable)
class UMultiCheckingPrivilegeMapChangeTransitionDelayObject : public UMapChangeTransitionDelayObject {
    GENERATED_BODY()
public:
    UMultiCheckingPrivilegeMapChangeTransitionDelayObject();
};

