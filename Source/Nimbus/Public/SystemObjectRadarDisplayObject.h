#pragma once
#include "CoreMinimal.h"
#include "SystemObject.h"
#include "SystemObjectRadarDisplayObject.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable)
class NIMBUS_API ASystemObjectRadarDisplayObject : public ASystemObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> DisplayTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationCycleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationInitialDelayRatio;
    
public:
    ASystemObjectRadarDisplayObject();
};

