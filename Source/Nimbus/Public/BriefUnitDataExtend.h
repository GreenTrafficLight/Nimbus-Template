#pragma once
#include "CoreMinimal.h"
#include "BriefUnitDataTableRow.h"
#include "BriefUnitDataIcon3D.h"
#include "BriefUnitDataExtend.generated.h"

USTRUCT(BlueprintType)
struct FBriefUnitDataExtend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBriefUnitDataTableRow Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBriefUnitDataIcon3D Icon3D;
    
    NIMBUS_API FBriefUnitDataExtend();
};

