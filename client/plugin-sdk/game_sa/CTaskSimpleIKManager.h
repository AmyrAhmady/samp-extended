/*
Plugin-SDK (Grand Theft Auto San Andreas) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimpleIKChain.h"


class PLUGIN_API CTaskSimpleIKManager : public CTaskSimple {
protected:
    CTaskSimpleIKManager(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    CTaskSimpleIKChain * m_pIKChainTasks[4];
    bool m_bAborting;
private:
    char _pad[3];
public:

    CTaskSimpleIKManager();
};

VALIDATE_SIZE(CTaskSimpleIKManager, 0x1C);