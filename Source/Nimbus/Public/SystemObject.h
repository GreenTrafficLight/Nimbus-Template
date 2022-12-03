#pragma once
#include "CoreMinimal.h"
#include "AIGameObject.h"
#include "SystemObject.generated.h"

UCLASS(Abstract, Blueprintable)
class NIMBUS_API ASystemObject : public AAIGameObject {
    GENERATED_BODY()
public:
    ASystemObject();
};

