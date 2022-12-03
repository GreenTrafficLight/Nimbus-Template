#pragma once
#include "CoreMinimal.h"
#include "ViewerTargetDestroyedWithWeapon.h"
#include "ViewerTargetDestroyedBase.generated.h"

USTRUCT(BlueprintType)
struct FViewerTargetDestroyedBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FViewerTargetDestroyedWithWeapon> WeaponTargetDestroyed;
    
    NIMBUS_API FViewerTargetDestroyedBase();
};

