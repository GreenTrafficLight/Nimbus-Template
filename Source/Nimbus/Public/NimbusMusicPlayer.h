#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusMusicPlayer.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class NIMBUS_API UNimbusMusicPlayer : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMusicPlayerOnEndOfMusic);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMusicPlayerOnDuration);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMusicPlayerOnEndOfMusic OnEndOfMusicEventDispather;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMusicPlayerOnDuration OnDurationEventDispather;
    
    UNimbusMusicPlayer();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool Play(const FString& in_EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool Pause(bool NewPause);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static bool IsPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static bool IsPause();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static bool IsEndPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static int32 GetPlayPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static int32 GetDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static void GetAudioSpectrum(TArray<float>& arry);
    
};

