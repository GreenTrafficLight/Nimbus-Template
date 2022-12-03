#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "SoundAtomCueSheet.generated.h"

class USoundAtomCueSheet;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API USoundAtomCueSheet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Contains;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AcbFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAwbDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath AwbDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CueSheetName;
    
    USoundAtomCueSheet();
    UFUNCTION(BlueprintCallable)
    static void ReleaseAcb(FName AcbName);
    
    UFUNCTION(BlueprintCallable)
    static USoundAtomCueSheet* LoadAcb(FName AcbName);
    
    UFUNCTION(BlueprintCallable)
    static void DetachDspBusSetting();
    
    UFUNCTION(BlueprintCallable)
    static void AttachDspBusSetting(const FString& SettingName);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyDspBusSnapshot(const FString& SnapshotName, int32 Milliseconds);
    
};

