#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MenuSequenceManager.generated.h"

class USequenceDataAsset;
class UDataTable;
class UNimbusGameInstance;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMenuSequenceManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SequenceMenuDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SequenceLinkDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SequenceMenuItemDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USequenceDataAsset* SequenceDataUpdate02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusGameInstance* GameInstance;
    
public:
    UMenuSequenceManager();
};

