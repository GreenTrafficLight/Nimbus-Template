#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SequenceDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class NIMBUS_API USequenceDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SequenceMenuDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SequenceLinkDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SequenceMenuItemDataTable;
    
    USequenceDataAsset();
};

