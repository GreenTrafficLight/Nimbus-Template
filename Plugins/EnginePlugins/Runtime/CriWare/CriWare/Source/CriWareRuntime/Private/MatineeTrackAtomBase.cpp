#include "MatineeTrackAtomBase.h"

UMatineeTrackAtomBase::UMatineeTrackAtomBase() {
}

const FString UMatineeTrackAtomBase::GetEdHelperClassName() const
{
	return FString(TEXT("UnrealEd.InterpTrackHelper"));
}

const FString UMatineeTrackAtomBase::GetSlateHelperClassName() const
{
	return FString(TEXT("Matinee.InterpTrackHelper"));
}

#if WITH_EDITORONLY_DATA
UTexture2D* UMatineeTrackAtomBase::GetTrackIcon() const
{
	return TrackIcon;
}
#endif // WITH_EDITORONLY_DATA

FColor UMatineeTrackAtomBase::GetKeyframeColor(int32 KeyIndex) const
{
	return FColor(0, 0, 0);
}

