#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MovieWidget.generated.h"

class AUIManagerActor;
class UManaComponent;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMovieWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUIManagerActor* UIManagerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UManaComponent* ManaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UmgBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UmgMovieImage;
    
public:
    UMovieWidget();
};

