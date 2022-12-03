#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "MatineeTrackAtomFloatBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, MinimalAPI)
class UMatineeTrackAtomFloatBase : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:

	virtual const FString	GetEdHelperClassName() const override;

	virtual const FString	GetSlateHelperClassName() const override;

#if WITH_EDITORONLY_DATA
	virtual class UTexture2D* GetTrackIcon() const override;
#endif // WITH_EDITORONLY_DATA

	virtual FColor GetKeyframeColor(int32 KeyIndex) const override;

    UMatineeTrackAtomFloatBase();
};

