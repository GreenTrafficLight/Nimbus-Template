#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EUIKeys.h"
#include "VRKeyEventActor.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API AVRKeyEventActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKeyRepeated, EUIKeys, Key);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKeyJustPressed, EUIKeys, Key);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeyJustPressed OnKeyJustPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeyRepeated OnKeyRepeated;
    
    AVRKeyEventActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyDown(EUIKeys Key) const;
    
};

