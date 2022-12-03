#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "Curves/RichCurve.h"
#include "MovieSceneAtomSection.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneAtomSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartOffset;
    
    UPROPERTY(EditAnywhere)
    FRichCurve SoundVolume;
    
    UPROPERTY(EditAnywhere)
    FRichCurve PitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressSubtitles;
    
public:
    UMovieSceneAtomSection();
};

