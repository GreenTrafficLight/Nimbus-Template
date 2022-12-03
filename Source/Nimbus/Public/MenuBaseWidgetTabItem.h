#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidgetTabItem.generated.h"

USTRUCT(BlueprintType)
struct FMenuBaseWidgetTabItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TabText;
    
    NIMBUS_API FMenuBaseWidgetTabItem();
};

