#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ShapeComponent.h"
#include "CloudSpheroid.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TRUESKYPLUGIN_API UCloudSpheroid : public UShapeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    FVector SpheroidRadii;
    
public:
    UCloudSpheroid();
    UFUNCTION(BlueprintCallable)
    void SetSpheroidRadii(FVector InSpheroidRadii, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetUnscaledSpheroidRadii() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetShapeScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetScaledSpheroidRadii() const;
    
};

