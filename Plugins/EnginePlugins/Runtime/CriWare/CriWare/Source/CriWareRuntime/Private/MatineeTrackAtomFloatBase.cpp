#include "MatineeTrackAtomFloatBase.h"

UMatineeTrackAtomFloatBase::UMatineeTrackAtomFloatBase() {
}

const FString UMatineeTrackAtomFloatBase::GetEdHelperClassName() const
{
	return FString(TEXT("UnrealEd.InterpTrackHelper"));
}

const FString UMatineeTrackAtomFloatBase::GetSlateHelperClassName() const
{
	return FString(TEXT("Matinee.InterpTrackHelper"));
}

#if WITH_EDITORONLY_DATA
UTexture2D* UMatineeTrackAtomFloatBase::GetTrackIcon() const
{
	return TrackIcon;
}
#endif // WITH_EDITORONLY_DATA

FColor UMatineeTrackAtomFloatBase::GetKeyframeColor(int32 KeyIndex) const
{
	if (KeyIndex < 0 || KeyIndex >= FloatTrack.Points.Num())
	{
		return FColor(0, 0, 0);
	}

	if (FloatTrack.Points[KeyIndex].IsCurveKey())
	{
		return FColor(100, 0, 0);
	}
	else if (FloatTrack.Points[KeyIndex].InterpMode == CIM_Linear)
	{
		return FColor(0, 100, 0);
	}
	else
	{
		return FColor(0, 0, 100);
	}
}

