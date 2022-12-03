#pragma once
#include "CoreMinimal.h"
#include "TunnelEventVolume.h"
#include "TunnelMoveForcedVolume.generated.h"

class USphereComponent;
class UArrowComponent;

UCLASS(Blueprintable)
class NIMBUS_API ATunnelMoveForcedVolume : public ATunnelEventVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* MoveTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* AngleArrowComponentL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* AngleArrowComponentR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* AngleArrowComponentU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* AngleArrowComponentD;
    
    ATunnelMoveForcedVolume();
};

