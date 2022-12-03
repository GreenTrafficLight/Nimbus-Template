#include "MatineeTrackAtomSelector.h"

UMatineeTrackAtomSelector::UMatineeTrackAtomSelector() {
}

const FString UMatineeTrackAtomSelector::GetEdHelperClassName() const
{
	return FString(TEXT("UnrealEd.InterpTrackHelper"));
}

const FString UMatineeTrackAtomSelector::GetSlateHelperClassName() const
{
	return FString(TEXT("Matinee.InterpTrackHelper"));
}

#if WITH_EDITORONLY_DATA
UTexture2D* UMatineeTrackAtomSelector::GetTrackIcon() const
{
	return TrackIcon;
}
#endif // WITH_EDITORONLY_DATA

FColor UMatineeTrackAtomSelector::GetKeyframeColor(int32 KeyIndex) const
{
	return FColor(0, 0, 0);
}
