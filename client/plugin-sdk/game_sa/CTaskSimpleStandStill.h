/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CTaskTimer.h"

class PLUGIN_API CTaskSimpleStandStill : public CTaskSimple {
protected:
    CTaskSimpleStandStill(plugin::dummy_func_t a) : CTaskSimple(a),m_timer(a) {}
public:
    int m_nTime;
    CTaskTimer m_timer;
    bool m_bLooped;
    bool m_bUseAnimIdleStance;
private:
    char _pad[2];
public:
    float m_fBlendData;


	CTaskSimpleStandStill(int nTime, bool Looped, bool bUseAnimIdleStance, float fBlendData);
};

VALIDATE_SIZE(CTaskSimpleStandStill, 0x20);