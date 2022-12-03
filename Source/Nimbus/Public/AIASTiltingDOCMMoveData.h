#pragma once
#include "CoreMinimal.h"
#include "AIASTiltingDOCMMoveData.generated.h"

class AAIGameObject;
class UCurveVector;

USTRUCT(BlueprintType)
struct FAIASTiltingDOCMMoveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIGameObject* MoveObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveVector* LocationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveVector* RotationCurve;
    
    NIMBUS_API FAIASTiltingDOCMMoveData();
};

