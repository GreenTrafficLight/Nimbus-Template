#pragma once
#include "CoreMinimal.h"
#include "ERankTitle.generated.h"

UENUM(BlueprintType)
enum class ERankTitle : uint8 {
    Airman,
    AirmanFirstClass,
    SeniorAirman,
    Sergeant,
    StaffSergeant,
    MasterSergeant,
    SeniorMasterSergeant,
    ChiefMasterSergeant,
    FirstSergeant,
    WarrantOfficer,
    SecondLieutenant,
    FirstLieutenant,
    Captain,
    Major,
    LieutenantColonel,
    Colonel,
    BrigadierGeneral,
    MajorGeneral,
    LieutenantGeneral,
    General,
    CommanderInChief,
    Count,
};

