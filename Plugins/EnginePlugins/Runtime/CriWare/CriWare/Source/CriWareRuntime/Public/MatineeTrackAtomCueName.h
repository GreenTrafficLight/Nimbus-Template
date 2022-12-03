#pragma once
#include "CoreMinimal.h"
#include "MatineeTrackAtomSoundBase.h"
#include "AtomCueNameTrackKeyframe.h"
#include "MatineeTrackAtomCueName.generated.h"

class USoundAtomCueSheet;

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMatineeTrackAtomCueName : public UMatineeTrackAtomSoundBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AisacList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SelectorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FAtomCueNameTrackKeyframe> KeyframeList;
    
    UMatineeTrackAtomCueName();
};

