#include "RadioTable.h"

FRadioTable::FRadioTable() {
    this->RadioType = (ERadioType)0;
    this->StartDelay = 0.00f;
    this->EndDelay = 0.00f;
    this->QueueLimitLife = 0.00f;
    this->RequeueingWaitTime = 0.00f;
    this->LimitPlayTimes = 0;
    this->PossibilityOfPlay = 0.00f;
    this->Priority = 0;
    this->Subtitle = ERadioSubtitle::Default;
    this->Channel = ERadioChannel::DEFAULT;
    this->Noise = ERadioNoise::ALL;
    this->NoiseSound = ERadioNoiseSound::AWACS;
    this->WarningSound = ERadioWarningSound::NONE;
    this->ComWindow = false;
    this->KeepComWindow = false;
    this->Volume = 0.00f;
    this->CheckAliveSpeaker = false;
    this->CheckAliveKeySpeaker = false;
    this->CheckAliveColleagues = false;
    this->Tension = ERadioTension::NONE;
    this->CheckSpeakerInAllowRange = false;
    this->BlockSubChannel = false;
}

