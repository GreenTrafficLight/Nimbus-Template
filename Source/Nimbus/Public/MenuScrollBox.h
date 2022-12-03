#pragma once
#include "CoreMinimal.h"
#include "UIBaseWidget.h"
#include "MenuScrollBox.generated.h"

class UScrollBox;
class UImage;
class UTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMenuScrollBox : public UUIBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    UMenuScrollBox();
    UFUNCTION(BlueprintCallable)
    void SetMenuScrollBar(UImage* InScrollBar, UImage* InScrollBarBackground);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuBox(UTextBlock* InText, UScrollBox* InScrollBox);
    
    UFUNCTION(BlueprintCallable)
    void RemoveChildAt(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetChildAt(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearContent();
    
    UFUNCTION(BlueprintCallable)
    void AddChild(UWidget* InWidget);
    
};

