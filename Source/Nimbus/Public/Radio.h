#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Radio.generated.h"

UCLASS(Blueprintable)
class ARadio : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageShow, const FString&, MessageID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageHide, const FString&, MessageID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageEnd, const FString&, MessageID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageBegin, const FString&, MessageID);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMessageBegin OnMessageBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMessageEnd OnMessageEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMessageBegin OnMessageShow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMessageEnd OnMessageHide;
    
    ARadio();
    UFUNCTION(BlueprintCallable)
    void PlayMessage(const FString& MessageID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentSpeaker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentMessageID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentMessage();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllMessages(bool bFireCurrentMessageEndEvent);
    
};

