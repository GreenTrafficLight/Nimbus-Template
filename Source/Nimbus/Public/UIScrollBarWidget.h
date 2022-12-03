#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UIScrollBarWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UUIScrollBarWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UmgScrollBarTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UmgBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UmgTranstion;
    
    UUIScrollBarWidget();
};

