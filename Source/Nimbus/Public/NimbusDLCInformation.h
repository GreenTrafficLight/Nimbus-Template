#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusDLCInformation.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UNimbusDLCInformation : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDLCsUpdatedDelegate);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DLCDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DLCBaseStringID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCsUpdatedDelegate DLCsUpdatedDelegate;
    
public:
    UNimbusDLCInformation();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDLCOwned(const FString& DLCID) const;
    
};

