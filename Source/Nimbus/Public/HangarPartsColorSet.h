#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HangarPartsColorSet.generated.h"

USTRUCT(BlueprintType)
struct FHangarPartsColorSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GaugeBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GaugeArms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GaugeMisc;
    
    NIMBUS_API FHangarPartsColorSet();
};

