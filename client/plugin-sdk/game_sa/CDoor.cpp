/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDoor.h"

float &CDoor::DOOR_SPEED_MAX_CAPPED = *(float *)0x8D3950;

// Converted from thiscall bool CDoor::Process(CVehicle *vehicle,CVector &,CVector &,CVector &) 0x6F4040
bool CDoor::Process(CVehicle* vehicle, CVector& arg1, CVector& arg2, CVector& arg3) {
    return plugin::CallMethodAndReturn<bool, 0x6F4040, CDoor *, CVehicle*, CVector&, CVector&, CVector&>(this, vehicle, arg1, arg2, arg3);
}

// Converted from thiscall bool CDoor::ProcessImpact(CVehicle *vehicle,CVector &,CVector &,CVector &) 0x6F4540
bool CDoor::ProcessImpact(CVehicle* vehicle, CVector& arg1, CVector& arg2, CVector& arg3) {
    return plugin::CallMethodAndReturn<bool, 0x6F4540, CDoor *, CVehicle*, CVector&, CVector&, CVector&>(this, vehicle, arg1, arg2, arg3);
}

// Converted from thiscall void CDoor::Open(float openRatio) 0x6F4790
void CDoor::Open(float openRatio) {
    plugin::CallMethod<0x6F4790, CDoor *, float>(this, openRatio);
}

// Converted from thiscall float CDoor::GetAngleOpenRatio(void) 0x6F47E0
float CDoor::GetAngleOpenRatio() {
    return plugin::CallMethodAndReturn<float, 0x6F47E0, CDoor *>(this);
}

// Converted from thiscall bool CDoor::IsClosed(void) 0x6F4800
bool CDoor::IsClosed() {
    return plugin::CallMethodAndReturn<bool, 0x6F4800, CDoor *>(this);
}

// Converted from thiscall bool CDoor::IsFullyOpen(void) 0x6F4820
bool CDoor::IsFullyOpen() {
    return plugin::CallMethodAndReturn<bool, 0x6F4820, CDoor *>(this);
}