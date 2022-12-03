#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESoundType.h"
#include "OptionSoundDataTable.generated.h"

USTRUCT(BlueprintType)
struct FOptionSoundDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundType SoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SoundID;
    
    NIMBUS_API FOptionSoundDataTable();
};

