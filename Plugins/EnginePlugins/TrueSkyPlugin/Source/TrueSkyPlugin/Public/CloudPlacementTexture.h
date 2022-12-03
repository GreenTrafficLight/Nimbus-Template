#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ShapeComponent.h"
#include "CloudPlacementTexture.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCloudPlacementTexture : public UShapeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CloudMapTexture;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    FVector BoxExtent;
    
public:
    UCloudPlacementTexture();
    UFUNCTION(BlueprintCallable)
    void SetBoxExtent(FVector InBoxExtent, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetUnscaledBoxExtent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetScaledBoxExtent() const;
    
};

