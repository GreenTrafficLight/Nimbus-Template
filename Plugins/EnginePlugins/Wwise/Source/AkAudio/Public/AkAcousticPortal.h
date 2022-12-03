#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AkAcousticPortalState.h"
#include "AkAcousticPortal.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API AAkAcousticPortal : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AkAcousticPortalState InitialState;
    
    AAkAcousticPortal();
    UFUNCTION(BlueprintCallable)
    void OpenPortal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AkAcousticPortalState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void ClosePortal();
    
};

