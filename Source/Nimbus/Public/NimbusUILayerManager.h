#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UIIdItem.h"
#include "NimbusUILayerManager.generated.h"

class UWidgetComponent;

UCLASS(Blueprintable)
class NIMBUS_API UNimbusUILayerManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIIdItem> UIIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDisplayLayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidgetComponent*> AllUIs;
    
public:
    UNimbusUILayerManager();
protected:
    UFUNCTION(BlueprintCallable)
    void OnLevelUnloded();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
};

