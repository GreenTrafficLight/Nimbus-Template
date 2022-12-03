#pragma once
#include "CoreMinimal.h"
#include "SystemObject.h"
#include "SystemObjectDummyTarget.generated.h"

class UCurveFloat;
class APlayerPlane;

UCLASS(Abstract, Blueprintable)
class NIMBUS_API ASystemObjectDummyTarget : public ASystemObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBillboardMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DistanceToOwnerCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerPlane* PlayerPlane;
    
public:
    ASystemObjectDummyTarget();
};

