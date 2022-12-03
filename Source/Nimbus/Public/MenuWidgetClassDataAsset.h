#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "EMenuIDs.h"
#include "MenuWidgetClassDataAsset.generated.h"

class UMenuBaseWidget;

UCLASS(Blueprintable)
class NIMBUS_API UMenuWidgetClassDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMenuIDs, TSubclassOf<UMenuBaseWidget>> ClassTable;
    
    UMenuWidgetClassDataAsset();
};

