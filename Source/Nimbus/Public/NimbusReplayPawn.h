#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/SpectatorPawn.h"
#include "CameraSettings.h"
#include "NimbusReplayPawn.generated.h"

class USkeletalMeshComponent;
class USkeletalMesh;
class UReplayWidget;
class UDataTable;
class UReplayCameraInfoWidget;
class APlayerPlane;

UCLASS(Blueprintable)
class NIMBUS_API ANimbusReplayPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCameraSettingsUpdated, uint8, CameraId, const FCameraSettings&, CameraSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCameraChanged, uint8, CameraId);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* PreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UReplayWidget> ReplayWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UReplayCameraInfoWidget> CameraInfoWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PassCameraSettingsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PassCameraDebugSettingsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PassCameraDefaultSettingsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CameraSettingsTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PreviewMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerPlane* PlayerPlane;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraSettingsUpdated OnCameraSettingsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraChanged OnCameraChanged;
    
public:
    ANimbusReplayPawn();
    UFUNCTION(BlueprintCallable)
    void OnPlayerReposition();
    
};

