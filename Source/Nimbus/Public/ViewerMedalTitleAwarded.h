#pragma once
#include "CoreMinimal.h"
#include "EMedalTitle.h"
#include "ViewerMedalTitleAwarded.generated.h"

USTRUCT(BlueprintType)
struct FViewerMedalTitleAwarded {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMedalTitle Medal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimesAwarded;
    
    NIMBUS_API FViewerMedalTitleAwarded();
};

