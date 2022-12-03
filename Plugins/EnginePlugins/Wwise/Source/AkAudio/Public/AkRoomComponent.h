#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AkRoomComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkRoomComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UAkRoomComponent();
    UFUNCTION(BlueprintCallable)
    void RemoveSpatialAudioRoom();
    
    UFUNCTION(BlueprintCallable)
    void AddSpatialAudioRoom();
    
};

