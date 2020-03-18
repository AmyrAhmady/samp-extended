/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CPtrNodeDoubleLink {
public:
    void *pItem;
    CPtrNodeDoubleLink *pNext;
    CPtrNodeDoubleLink *pPrev;

    inline CPtrNodeDoubleLink(void *item) : pItem(item) {}

    static void* operator new(unsigned int size);
    static void operator delete(void* data);
};

VALIDATE_SIZE(CPtrNodeDoubleLink, 0xC);