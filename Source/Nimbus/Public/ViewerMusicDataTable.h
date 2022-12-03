#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ViewerMusicDataTable.generated.h"

USTRUCT(BlueprintType)
struct FViewerMusicDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ViewerMusicID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalizeTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BgmEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BgmLength;
    
    NIMBUS_API FViewerMusicDataTable();
};

