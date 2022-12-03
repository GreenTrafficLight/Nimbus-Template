#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusSoundPauseManager.generated.h"

class UNimbusSoundReverbManager;

UCLASS(Blueprintable)
class NIMBUS_API UNimbusSoundPauseManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusSoundReverbManager* ReverbManager;
    
public:
    UNimbusSoundPauseManager();
};

