#pragma once
#include "CoreMinimal.h"
#include "GuidePageBlock.generated.h"

class UUserWidget;
class UImage;

USTRUCT(BlueprintType)
struct FGuidePageBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* PageBlockWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UmgImage;
    
    NIMBUS_API FGuidePageBlock();
};

