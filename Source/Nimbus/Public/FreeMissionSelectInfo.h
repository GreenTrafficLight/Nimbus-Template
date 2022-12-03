#pragma once
#include "CoreMinimal.h"
#include "FreeMissionSelectInfo.generated.h"

class UCanvasPanel;
class UImage;
class UTexture2D;

USTRUCT(BlueprintType)
struct FFreeMissionSelectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* UmgMissionPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UmgMissionImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* ThumbnailTexture;
    
    NIMBUS_API FFreeMissionSelectInfo();
};

