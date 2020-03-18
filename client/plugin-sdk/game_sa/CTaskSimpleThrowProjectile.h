/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CAnimBlendAssociation.h"
#include "CEntity.h"

class PLUGIN_API CTaskSimpleThrowProjectile : public CTaskSimple {
protected:
    CTaskSimpleThrowProjectile(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    bool m_bIsAborting;
    bool m_bFinished;
    bool m_bStarted;
private:
    char pad;
public:
    CAnimBlendAssociation *m_pAnim;
    CEntity *m_pTarget;
    CVector m_vecPosition;
    unsigned int m_nStartTime;

    CTaskSimpleThrowProjectile(CEntity* pTarget, CVector Posn);
};

VALIDATE_SIZE(CTaskSimpleThrowProjectile, 0x24);