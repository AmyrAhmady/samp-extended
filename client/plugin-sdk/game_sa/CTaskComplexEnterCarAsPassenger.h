/*
Plugin-SDK (Grand Theft Auto San Andreas) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskComplexEnterCar.h"

class PLUGIN_API CTaskComplexEnterCarAsPassenger : public CTaskComplexEnterCar {
protected:
    CTaskComplexEnterCarAsPassenger(plugin::dummy_func_t a) : CTaskComplexEnterCar(a) {}
public:

    CTaskComplexEnterCarAsPassenger(CVehicle* pTargetVehicle, int nTargetSeat, bool bCarryOnAfterFallingOff);

};

VALIDATE_SIZE(CTaskComplexEnterCarAsPassenger, 0x50);
