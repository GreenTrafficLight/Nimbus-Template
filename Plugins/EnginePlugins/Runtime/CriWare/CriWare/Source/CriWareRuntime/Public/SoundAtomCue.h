#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SoundAtomCue.generated.h"

class USoundAtomCueSheet;

UCLASS(Blueprintable, EditInlineNew)
class CRIWARERUNTIME_API USoundAtomCue : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CueName;
    
    USoundAtomCue();
    UFUNCTION(BlueprintCallable)
    FString GetUserData();
    
    UFUNCTION(BlueprintCallable)
    int32 GetLength();
    
};

