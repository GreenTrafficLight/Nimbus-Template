#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AircraftTreeLinkTable.generated.h"

USTRUCT(BlueprintType)
struct FAircraftTreeLinkTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupSrcID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupDstID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Waypoints;
    
    NIMBUS_API FAircraftTreeLinkTable();
};

