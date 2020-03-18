/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CReference.h"

#define MAX_NUM_REFERENCES 3000

class PLUGIN_API CReferences
{
public:
	// count: MAX_NUM_REFERENCES (3000)
	static CReference *aRefs;
	static CReference **pEmptyList;

	static void Init();
	static unsigned int ListSize(CReference *ref);
	static void RemoveReferencesToPlayer();
	static void PruneAllReferencesInWorld();
};
