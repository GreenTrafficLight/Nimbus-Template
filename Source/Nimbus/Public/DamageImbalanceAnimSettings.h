#pragma once
#include "CoreMinimal.h"
#include "ImbalanceAnimCurveData.h"
#include "DamageImbalanceAnimSettings.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FDamageImbalanceAnimSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableImbalance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveVector*> GunDamageAnimCurveDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveVector*> MissileDamageAnimCurveDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FImbalanceAnimCurveData> AnimCurveDataList;
    
    NIMBUS_API FDamageImbalanceAnimSettings();
};

