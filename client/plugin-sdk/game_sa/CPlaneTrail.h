/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CPlaneTrail {
public:
    CVector m_avecPosn[16];
    unsigned int m_anTime[16];

    void Init();
    void Render(float intensity);
    void RegisterPoint(CVector point);
};

VALIDATE_SIZE(CPlaneTrail, 0x100);
