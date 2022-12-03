#pragma once
#include "CoreMinimal.h"
#include "OfflineCapture.h"
#include "OfflineCaptureCube.generated.h"

class UTextureCube;

UCLASS(Blueprintable)
class AOfflineCaptureCube : public AOfflineCapture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCube* OutputTextureCube;
    
    AOfflineCaptureCube();
};

