#pragma once
#include "CoreMinimal.h"
#include "UIBaseWidget.h"
#include "CursorInfo.h"
#include "MenuForegroundWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMenuForegroundWidget : public UUIBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> UmgStartAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* UmgAcceptAnimation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCursorInfo ClientCursorInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCursorInfo SessionCursorInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCursorInfo RadioMessageCursorInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCursorInfo SortieSelectCursorInfo;
    
public:
    UMenuForegroundWidget();
};

