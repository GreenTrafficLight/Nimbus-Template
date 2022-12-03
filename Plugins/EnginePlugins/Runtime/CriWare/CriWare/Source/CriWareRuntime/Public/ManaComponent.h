#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EManaComponentStatus.h"
#include "ManaEventPointInfo.h"
#include "EManaSubtitlesEncoding.h"
#include "EManaFrameAction.h"
#include "ManaComponent.generated.h"

class UManaComponent;
class UManaTexture;
class UManaPlaylist;
class UManaMovie;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UManaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubtitleChanged, FText, Subtitle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStatusChanged, EManaComponentStatus, Status, UManaComponent*, ManaComponent);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnRequestData, UManaComponent*, ManaComponent);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnEventPoint, FManaEventPointInfo, EventPointInfo);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaTexture* Movie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventPoint OnEventPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtitlesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubtitlesChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaSubtitlesEncoding SubtitlesEncoding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubtitleChanged OnSubtitleChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatusChanged OnStatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaFrameAction EndFrameAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestData OnRequestData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UManaPlaylist* Playlist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaylistIndex;
    
public:
    UManaComponent();
    UFUNCTION(BlueprintCallable)
    bool ToIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void StopAndWaitCompletion();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetTexture(UManaTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetFile(const FString& MovieFilePath);
    
    UFUNCTION(BlueprintCallable)
    void SetCachedData(const TArray<uint8>& DataArray);
    
    UFUNCTION(BlueprintCallable)
    void SeekToPosition(int32 FrameNumber);
    
    UFUNCTION(BlueprintCallable)
    void ResetCachedData();
    
    UFUNCTION(BlueprintCallable)
    bool Previous();
    
    UFUNCTION(BlueprintCallable)
    void PreparePlaylistIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Prepare();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    bool Next();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreparing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintCallable)
    float GetVolume();
    
    UFUNCTION(BlueprintCallable)
    float GetTime();
    
    UFUNCTION(BlueprintCallable)
    UManaTexture* GetTexture();
    
    UFUNCTION(BlueprintCallable)
    EManaComponentStatus GetStatus();
    
    UFUNCTION(BlueprintCallable)
    UManaMovie* GetSource();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFrameNumber();
    
    UFUNCTION(BlueprintCallable)
    void EnableSubtitles(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableSeamless(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSubtitlesChannel(int32 Channel);
    
};

