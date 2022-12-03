#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGraphicsSettingsWindowsTextureQuality.h"
#include "EGraphicsSettingsWindowsEffectAmount.h"
#include "EGraphicsSettingsWindowsEffectQuality.h"
#include "EGraphicsSettingsWindowsDrawScale.h"
#include "EGraphicsSettingsWindowsShadowQuality.h"
#include "GraphicsSettingsWindowsScreenSetting.h"
#include "EGraphicsSettingsWindowsPreset.h"
#include "EGraphicsSettingsWindowsPostProcessQuality.h"
#include "EGraphicsSettingsWindowsFrameLimit.h"
#include "EGraphicsSettingsWindowsAntiAliasing.h"
#include "GraphicsSettingsWindowsResolution.h"
#include "GraphicsSettingsWindowsBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UGraphicsSettingsWindowsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGraphicsSettingsWindowsBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetWindowsVSyncOn(bool InVSyncOn);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowsTextureQuality(EGraphicsSettingsWindowsTextureQuality InTextureQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowsSSROn(bool InSSROn);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowsShadowQuality(EGraphicsSettingsWindowsShadowQuality InShadowQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowsPreset(EGraphicsSettingsWindowsPreset InPreset);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowsPostProcessQuality(EGraphicsSettingsWindowsPostProcessQuality InPostProcessQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowsMotionBlurOn(bool InMotionBlurOn);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowsFrameLimit(EGraphicsSettingsWindowsFrameLimit InFrameLimit);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowsEffectQuality(EGraphicsSettingsWindowsEffectQuality InEffectQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowsEffectAmount(EGraphicsSettingsWindowsEffectAmount InEffectAmount);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowsDrawScale(EGraphicsSettingsWindowsDrawScale InDrawScale);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowsBloomOn(bool InBloomOn);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowsAntiAliasing(EGraphicsSettingsWindowsAntiAliasing InAntiAliasing);
    
    UFUNCTION(BlueprintCallable)
    static void SaveWindowsSetting();
    
    UFUNCTION(BlueprintCallable)
    static void RevertWindowsScreenSetting();
    
    UFUNCTION(BlueprintCallable)
    static void ResetWindowsSetting();
    
    UFUNCTION(BlueprintCallable)
    static void RequestWindowsScreenSetting(const FGraphicsSettingsWindowsScreenSetting& InScreenSetting);
    
    UFUNCTION(BlueprintCallable)
    static void ReflectWindowsSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsWindowsVSyncOn(bool& OutVSyncOn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsWindowsSSROn(bool& OutSSROn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsWindowsMotionBlurOn(bool& OutMotionBlurOn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsWindowsBloomOn(bool& OutBloomOn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWindowsWindowResolutionArray(TArray<FGraphicsSettingsWindowsResolution>& OutResolutionArray, bool bIsNeedAspect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWindowsTextureQuality(EGraphicsSettingsWindowsTextureQuality& OutTextureQuality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWindowsShadowQuality(EGraphicsSettingsWindowsShadowQuality& OutShadowQuality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWindowsScreenSettingDefault(FGraphicsSettingsWindowsScreenSetting& OutScreenSetting, bool bIsNeedAspect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWindowsScreenSetting(FGraphicsSettingsWindowsScreenSetting& OutScreenSetting, bool bIsNeedAspect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWindowsPreset(EGraphicsSettingsWindowsPreset& OutPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWindowsPostProcessQuality(EGraphicsSettingsWindowsPostProcessQuality& OutPostProcessQuality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWindowsFullScreenResolutionArray(TArray<FGraphicsSettingsWindowsResolution>& OutResolutionArray, bool bIsNeedAspect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWindowsFrameLimit(EGraphicsSettingsWindowsFrameLimit& OutFrameLimit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWindowsEffectQuality(EGraphicsSettingsWindowsEffectQuality& OutEffectQuality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWindowsEffectAmount(EGraphicsSettingsWindowsEffectAmount& OutEffectAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWindowsDrawScale(EGraphicsSettingsWindowsDrawScale& OutDrawScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWindowsBorderlessResolution(FGraphicsSettingsWindowsResolution& OutResolution, bool bIsNeedAspect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWindowsAntiAliasing(EGraphicsSettingsWindowsAntiAliasing& OutAntiAliasing);
    
    UFUNCTION(BlueprintCallable)
    static void ConfirmWindowsScreenSetting();
    
};

