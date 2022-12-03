#pragma once
#include "CoreMinimal.h"
#include "MultiMenuBaseWidget.h"
#include "UObject/NoExportTypes.h"
#include "MultiHangarSortieSelectWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiHangarSortieSelectWidget : public UMultiMenuBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint32 CountDownTime;
    
    UPROPERTY(EditAnywhere)
    uint32 CooldownSFXTime;
    
    UPROPERTY(EditAnywhere)
    uint32 HostMigrationActionLostTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NormalTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NormalTextGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor RedCostTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GrayTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NoGlow;
    
public:
    UMultiHangarSortieSelectWidget();
};

