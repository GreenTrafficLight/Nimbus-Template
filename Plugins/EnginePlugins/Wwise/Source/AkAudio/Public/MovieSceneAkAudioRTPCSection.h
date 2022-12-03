#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "Curves/RichCurve.h"
#include "MovieSceneAkAudioRTPCSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(EditAnywhere)
    FRichCurve FloatCurve;
    
public:
    UMovieSceneAkAudioRTPCSection();
};

