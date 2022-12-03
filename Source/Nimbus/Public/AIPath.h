#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AIPathPointData.h"
#include "EAIPathControlType.h"
#include "AIPath.generated.h"

class USplineComponent;
class AAIPathPoint;

UCLASS(Abstract, Blueprintable)
class NIMBUS_API AAIPath : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAIPathPoint*> PathPointActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIPathPointData> PathData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIPathControlType ControlType;
    
public:
    AAIPath();
};

