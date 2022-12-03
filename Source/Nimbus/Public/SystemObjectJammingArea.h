#pragma once
#include "CoreMinimal.h"
#include "SystemObject.h"
#include "SystemObjectJammingArea.generated.h"

UCLASS(Abstract, Blueprintable)
class NIMBUS_API ASystemObjectJammingArea : public ASystemObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
public:
    ASystemObjectJammingArea();
};

