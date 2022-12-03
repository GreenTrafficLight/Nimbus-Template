#pragma once
#include "CoreMinimal.h"
#include "VRMenuBaseWidget.h"
#include "VRDifficultySelectWidget.generated.h"

class UTextBlock;
class UBorder;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRDifficultySelectWidget : public UVRMenuBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutSeconds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* UmgTitleTextVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBorder*> UmgBorderNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBorder*> UmgBorderSelected;
    
public:
    UVRDifficultySelectWidget();
};

