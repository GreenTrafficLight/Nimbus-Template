#pragma once
#include "CoreMinimal.h"
#include "MatineeTrackAtomBase.h"
#include "MatineeTrackAtomCategoryName.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMatineeTrackAtomCategoryName : public UMatineeTrackAtomBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableVolumeTrack;
    
    UMatineeTrackAtomCategoryName();
};

