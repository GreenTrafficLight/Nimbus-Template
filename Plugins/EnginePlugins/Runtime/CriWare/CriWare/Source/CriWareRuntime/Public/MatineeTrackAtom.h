#pragma once
#include "CoreMinimal.h"
#include "MatineeTrackAtomSoundBase.h"
#include "AtomTrackKeyframe.h"
#include "MatineeTrackAtom.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMatineeTrackAtom : public UMatineeTrackAtomSoundBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AisacList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SelectorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FAtomTrackKeyframe> KeyframeList;
    
    UMatineeTrackAtom();
};

