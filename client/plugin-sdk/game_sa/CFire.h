/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"
#include "FxSystem_c.h"

class PLUGIN_API CFire {
public:
    struct {
        unsigned char bActive : 1;
        unsigned char bCreatedByScript : 1;
        unsigned char bMakesNoise : 1;
        unsigned char bBeingExtinguished : 1;
        unsigned char bFirstGeneration : 1;
    } m_nFlags;
private:
    char _pad0;
public:
    short m_nScriptReferenceIndex;
    CVector m_vecPosition;
    CEntity *m_pEntityTarget;
    CEntity *m_pEntityCreator;
    unsigned int m_nTimeToBurn;
    float m_fStrength;
    char m_nNumGenerationsAllowed;
    unsigned char m_nRemovalDist;
private:
    char _pad1[2];
public:
    FxSystem_c *m_pFxSystem;

    CFire();
    ~CFire();
    void Initialise();
    void CreateFxSysForStrength(RwV3d* point, RwMatrixTag* matrix);
    void Extinguish();
    void ProcessFire();
};

VALIDATE_SIZE(CFire, 0x28);