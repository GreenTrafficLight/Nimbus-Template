#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "MultiplayerZone.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API AMultiplayerZone : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActivated;
    
public:
    AMultiplayerZone();
    UFUNCTION(BlueprintCallable)
    void Activate(bool bActive, float Duration);
    
};

