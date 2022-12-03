#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EUIKeys.h"
#include "VRSimpleUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRSimpleUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKeyRepeated, EUIKeys, Key);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKeyJustPressed, EUIKeys, Key);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeyJustPressed OnKeyJustPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeyRepeated OnKeyRepeated;
    
    UVRSimpleUserWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyDown(EUIKeys Key) const;
    
};

