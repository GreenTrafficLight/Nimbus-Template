#pragma once
#include "CoreMinimal.h"
#include "DebugMenuWidget.h"
#include "DebugMenuPreviewRadioDataTableList.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class NIMBUS_API UDebugMenuPreviewRadioDataTableList : public UDebugMenuWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> FilteredRadioDataTable;
    
public:
    UDebugMenuPreviewRadioDataTableList();
    UFUNCTION(BlueprintCallable)
    static void SetRadioDataTable(const TArray<UDataTable*>& InRadioDataTable);
    
};

