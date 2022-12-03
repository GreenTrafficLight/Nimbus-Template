#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FullscreenMovieWidget.generated.h"

class AUIManagerActor;
class UImage;
class UMovieSubtitleWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UFullscreenMovieWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUIManagerActor* UIManagerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UmgBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UmgMovieImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMovieSubtitleWidget* UmgMovieSubtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* UmgLoadIcon;
    
public:
    UFullscreenMovieWidget();
};

