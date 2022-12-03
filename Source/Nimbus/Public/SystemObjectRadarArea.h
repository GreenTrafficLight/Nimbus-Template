#pragma once
#include "CoreMinimal.h"
#include "SystemObject.h"
#include "SystemObjectRadarArea.generated.h"

UCLASS(Abstract, Blueprintable)
class NIMBUS_API ASystemObjectRadarArea : public ASystemObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
public:
    ASystemObjectRadarArea();
};

