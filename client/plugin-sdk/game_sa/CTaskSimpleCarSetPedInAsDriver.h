/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CVehicle.h"
#include "CTaskUtilityLineUpPedWithCar.h"

class PLUGIN_API CTaskSimpleCarSetPedInAsDriver : public CTaskSimple {
protected:
    CTaskSimpleCarSetPedInAsDriver(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    bool m_bIsFinished;
private:
    char _pad[3];
public:
    CAnimBlendAssociation* m_pAnim;
    CVehicle * m_pTargetVehicle;
    CTaskUtilityLineUpPedWithCar* m_pUtility;
    bool m_bWarpingInToCar;
    unsigned char m_nDoorFlagsToClear;
    unsigned char m_nNumGettingInToClear;
private:
    char _pad2[1];
public:

    CTaskSimpleCarSetPedInAsDriver(CVehicle *pTargetVehicle, CTaskUtilityLineUpPedWithCar *pUtility);


};

VALIDATE_SIZE(CTaskSimpleCarSetPedInAsDriver, 0x1C);
