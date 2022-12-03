#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_MiniGameCourseAssistant.generated.h"

UENUM(BlueprintType)
enum class EMissionCondition_MiniGameCourseAssistant : uint8 {
    None,
    Outside_Right,
    Outside_Left,
    Outside_Up,
    Outside_Down,
    Outside_RightAndUp,
    Outside_RightAndDown,
    Outside_LeftAndUp,
    Outside_LeftAndDown,
    Over,
    OnCourse,
    OnCourse_OverRotation,
    Reverse,
    GuideInvisible,
    EMissionCondition_MAX UMETA(Hidden),
};

