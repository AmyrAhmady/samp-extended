/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CEventGroup {
protected:
    void *vtable;
public:
    class CPed   *m_pPed;
    unsigned int  m_dwCount;
    void         *m_apEvents[16];
};

VALIDATE_SIZE(CEventGroup, 0x4C);