/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

struct PLUGIN_API tBikeHandlingData {
    int m_nVehicleId;
    float m_fLeanFwdCOM;
    float m_fLeanFwdForce;
    float m_fLeanBakCOM;
    float m_fLeanBakForce;
    float m_fMaxLean;
    float m_fFullAnimLean;
    float m_fDesLean;
    float m_fSpeedSteer;
    float m_fSlipSteer;
    float m_fNoPlayerCOMz;
    float m_fWheelieAng;
    float m_fStoppieAng;
    float m_fWheelieSteer;
    float m_fWheelieStabMult;
    float m_fStoppieStabMult;
};

VALIDATE_SIZE(tBikeHandlingData, 0x40);
