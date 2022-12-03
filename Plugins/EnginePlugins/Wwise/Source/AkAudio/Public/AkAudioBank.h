#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkAudioBank.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkAudioBank : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoLoad;
    
    UAkAudioBank();
};

