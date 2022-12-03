#pragma once
#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "MovieSceneAkAudioRTPCSectionData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneAkAudioRTPCSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RTPCName;
    
    UPROPERTY(EditAnywhere)
    FRichCurve RTPCCurve;
    
    AKAUDIO_API FMovieSceneAkAudioRTPCSectionData();
};

