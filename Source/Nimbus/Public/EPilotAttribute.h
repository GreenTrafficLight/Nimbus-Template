#pragma once
#include "CoreMinimal.h"
#include "EPilotAttribute.generated.h"

UENUM(BlueprintType)
enum class EPilotAttribute : uint8 {
    ATT_Health,
    ATT_BSW_Default,
    ATT_BSW_LowAltitude,
    ATT_BSW_HighAltitude,
    ATT_BSW_Dying,
    ATT_BSW_InClouds,
    ATT_BSW_InCloudsDying,
    ATT_BSW_NearClouds,
    ATT_BSW_NearCloudsDying,
    ATT_ApproachCloudChanceHighHP,
    ATT_ApproachCloudChanceLowHP,
    ATT_CloudSearchRadiusInMeter,
    ATT_CloudSearchAngleInDegree,
    ATT_CloudReactionTimeForEvade,
    ATT_MAX UMETA(Hidden),
};

