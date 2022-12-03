#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TeamDeathMatchResult.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UTeamDeathMatchResult : public UUserWidget {
    GENERATED_BODY()
public:
    UTeamDeathMatchResult();
    UFUNCTION(BlueprintCallable)
    void DisplayResults(const TArray<FString>& Team1PlayerNames, const TArray<int32>& Team1PlayerScores, const TArray<FString>& Team2PlayerNames, const TArray<int32>& Team2PlayerScores, int32 Team1Score, int32 Team2Score, int32 LocalTeamIndex);
    
};

