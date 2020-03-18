/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskComplex.h"
#include "CTaskSimpleFacial.h"

class PLUGIN_API CTaskComplexFacial : public CTaskComplex {
protected:
    CTaskComplexFacial(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    bool m_bNotPlayer;
    bool m_bStarted;
    bool m_bIsAborting;
    eFacialExpression m_nFacialExpression1;
    int m_nDuration1;
    eFacialExpression m_nFacialExpression2;
    int m_nDuration2;

    CTaskComplexFacial();
};

VALIDATE_SIZE(CTaskComplexFacial, 0x20);

