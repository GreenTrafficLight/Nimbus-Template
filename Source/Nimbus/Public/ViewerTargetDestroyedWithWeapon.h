#pragma once
#include "CoreMinimal.h"
#include "ViewerTargetDestroyedWithWeapon.generated.h"

USTRUCT(BlueprintType)
struct FViewerTargetDestroyedWithWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInRecords;
    
    NIMBUS_API FViewerTargetDestroyedWithWeapon();
};

