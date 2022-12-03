#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CAConfigurationEntry.h"
#include "ConditionActionDataAsset.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UConditionActionDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 MinId;
    
    UPROPERTY(EditAnywhere)
    uint32 MaxId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCAConfigurationEntry> ConfigurationEntryList;
    
    UConditionActionDataAsset();
};

