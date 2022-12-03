#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ConditionActionManager.generated.h"

class UNimbusGameInstance;
class UConditionActionDataAsset;

UCLASS(Blueprintable, NotPlaceable)
class NIMBUS_API UConditionActionManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UConditionActionDataAsset*> CADataAssetMap;
    
public:
    UConditionActionManager();
};

