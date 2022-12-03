#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IconStatWidgetHandler.generated.h"

USTRUCT(BlueprintType)
struct FIconStatWidgetHandler {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PlaneLightDamageColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PlaneHeavyDamageColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PlaneDefaultColor;
    
public:
    NIMBUS_API FIconStatWidgetHandler();
};

