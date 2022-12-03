#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MultiplayerScoreCalculator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiplayerScoreCalculator : public UObject {
    GENERATED_BODY()
public:
    UMultiplayerScoreCalculator();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 CalculateShootScore(float DamagePercentage, int32 EnemyBasePoint, float CostDifferenceModifier, float PlacementModifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 CalculateRankingXP(float PlayingTimePercentage, int32 Score, float PlayerNumberModifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 CalculateMRP(int32 BaseMatchResultReward, int32 ScoreReward, int32 PerformanceReward, float PlayerNumberModifier, float CrashPenaltyModifier, float& OutMRPCoefficient, float& OutScoreCoefficient, float PartsBonus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 CalculateKillScore(int32 EnemyBasePoint, float CostDifferenceModifier, float PlacementModifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 CalculateCrashScore(int32 CrashedPlaneBasePoint, float PlacementModifier, int32 CrashCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 CalculateAssistScore(float DamagePercentage, int32 EnemyBasePoint) const;
    
};

