#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusReplayDataManager.generated.h"

class UNimbusReplayDataBuffer;
class UNimbusGameInstance;

UCLASS(Blueprintable)
class UNimbusReplayDataManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusReplayDataBuffer* DataBuffer;
    
public:
    UNimbusReplayDataManager();
};

