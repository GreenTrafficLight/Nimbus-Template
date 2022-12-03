#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "EQSimulRenderMode.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TrueSkySequenceActor.generated.h"

class UTexture2D;
class UTrueSkySequenceAsset;
class UTextureRenderTarget2D;
class UTextureRenderTargetCube;
class APointLight;

UCLASS(Blueprintable, NotPlaceable)
class TRUESKYPLUGIN_API ATrueSkySequenceActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTrueSkySequenceAsset* ActiveSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MoonTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CosmicBackgroundTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTargetCube* SkylightCubemapRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* InscatterRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* LossRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* cloudVisibilityRT;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQSimulRenderMode RenderMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownscaleFactor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SVSampling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Brightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimpleCloudShadowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimpleCloudShadowSharpness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimpleCloudShadowRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimpleCloudShadowBase;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VrMultiResRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VrMultiResBlend;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VrMultiResOffset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RaytraceSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MetresPerUnit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Visible;
    
public:
    ATrueSkySequenceActor();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void VolumeQueryResult(int32 CallerId, float Density);
    
    UFUNCTION(BlueprintCallable)
    static void SetTime(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTickTime(float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSunRotation(FRotator R);
    
    UFUNCTION(BlueprintCallable)
    static void SetShadowBase(float Base);
    
    UFUNCTION(BlueprintCallable)
    static void SetPointLightSource(int32 ID, FLinearColor lightColour, float intensity, FVector Pos, float minRadius, float MaxRadius);
    
    UFUNCTION(BlueprintCallable)
    static void SetPointLight(APointLight* Source);
    
    UFUNCTION(BlueprintCallable)
    static void SetMoonRotation(FRotator R);
    
    UFUNCTION(BlueprintCallable)
    static void SetKeyframeInt(int32 KeyframeUid, const FString& Name, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetKeyframeFloat(int32 KeyframeUid, const FString& Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInt(const FString& Name, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloat(const FString& Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBool(const FString& Name, bool Value);
    
    UFUNCTION(BlueprintCallable)
    float GetTime2();
    
    UFUNCTION(BlueprintCallable)
    static float GetTime();
    
    UFUNCTION(BlueprintCallable)
    float GetTickTime();
    
    UFUNCTION(BlueprintCallable)
    static FString GetText(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetSunRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetSunOrMoonRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSunIntensity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetSunColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSkyKeyframeByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetShadowBase();
    
    UFUNCTION(BlueprintCallable)
    static FString GetProfilingText(int32 cpu_level, int32 gpu_level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPreviousSkyKeyframeBeforeTime(float T);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPreviousCloudKeyframeBeforeTime(int32 Layer, float T);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNextSkyKeyframeAfterTime(float T);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNextModifiableSkyKeyframe();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNextModifiableCloudKeyframe(int32 Layer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNextCloudKeyframeAfterTime(int32 Layer, float T);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetMoonRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMoonIntensity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetMoonColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetKeyframeInt(int32 KeyframeUid, const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetKeyframeFloat(int32 KeyframeUid, const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetInt(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloat(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCloudKeyframeByIndex(int32 Layer, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBool(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CloudPointTest(int32 QueryID, FVector Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CloudLineTest(int32 QueryID, FVector StartPos, FVector EndPos);
    
};

