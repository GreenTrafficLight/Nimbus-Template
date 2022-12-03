#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HangarCameraNonAnimSettings.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FHangarCameraNonAnimSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* RotationCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FocusOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveMaxTime;
    
    NIMBUS_API FHangarCameraNonAnimSettings();
};

