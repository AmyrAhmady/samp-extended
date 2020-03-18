/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

struct PLUGIN_API tBoatHandlingData {
    int m_nVehicleId;
    float m_fThrustY;
    float m_fThrustZ;
    float m_fThrustAppZ;
    float m_fAqPlaneForce;
    float m_fAqPlaneLimit;
    float m_fAqPlaneOffset;
    float m_fWaveAudioMult;
    float m_fLookLRBehindCamHeight;
    CVector m_vecMoveRes;
    CVector m_vecTurnRes;
};

VALIDATE_SIZE(tBoatHandlingData, 0x3C);
