#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "MovieSubtitleWidget.generated.h"

class UTexture2D;
class USubtitleWidget;
class APlayerController;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMovieSubtitleWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultSubtitleColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmblemAnimationFPS;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USubtitleWidget* InGameSubtitleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> EmblemImageTextures;
    
public:
    UMovieSubtitleWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnalyzeAnimationStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnalyzeAnimationShow(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnalyzeAnimationEnd();
    
};

