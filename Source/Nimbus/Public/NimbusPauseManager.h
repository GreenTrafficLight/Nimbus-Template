#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusPauseManager.generated.h"

class UNimbusSoundPauseManager;
class UNimbusGarbageCollectManager;

UCLASS(Blueprintable)
class NIMBUS_API UNimbusPauseManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusSoundPauseManager* SoundPauseManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusGarbageCollectManager* GarbageCollectManager;
    
public:
    UNimbusPauseManager();
};

