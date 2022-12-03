#pragma once
#include "CoreMinimal.h"
#include "EMenuSpaceType.h"
#include "Engine/DataTable.h"
#include "ESequenceGroup.h"
#include "EMenuIDs.h"
#include "SequenceMenuDataTable.generated.h"

USTRUCT(BlueprintType)
struct FSequenceMenuDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SequenceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuSpaceType MenuSpaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESequenceGroup SequenceGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuIDs WidgetMenuID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LayerIndex;
    
    NIMBUS_API FSequenceMenuDataTable();
};

