#include "MultiplayerScoreCalculator.h"

int32 UMultiplayerScoreCalculator::CalculateShootScore_Implementation(float DamagePercentage, int32 EnemyBasePoint, float CostDifferenceModifier, float PlacementModifier) const {
    return 0;
}

int32 UMultiplayerScoreCalculator::CalculateRankingXP_Implementation(float PlayingTimePercentage, int32 Score, float PlayerNumberModifier) const {
    return 0;
}

int32 UMultiplayerScoreCalculator::CalculateMRP_Implementation(int32 BaseMatchResultReward, int32 ScoreReward, int32 PerformanceReward, float PlayerNumberModifier, float CrashPenaltyModifier, float& OutMRPCoefficient, float& OutScoreCoefficient, float PartsBonus) const {
    return 0;
}

int32 UMultiplayerScoreCalculator::CalculateKillScore_Implementation(int32 EnemyBasePoint, float CostDifferenceModifier, float PlacementModifier) const {
    return 0;
}


int32 UMultiplayerScoreCalculator::CalculateAssistScore_Implementation(float DamagePercentage, int32 EnemyBasePoint) const {
    return 0;
}

UMultiplayerScoreCalculator::UMultiplayerScoreCalculator() {
}

