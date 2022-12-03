#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TargetLockonSeeker.generated.h"

class AGameObject;

UCLASS(Blueprintable)
class NIMBUS_API UTargetLockonSeeker : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* LockonTarget;
    
public:
    UTargetLockonSeeker();
};

