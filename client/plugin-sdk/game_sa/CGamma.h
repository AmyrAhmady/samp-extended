/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CGamma
{
public:
	unsigned int field_0;
	float field_4;
	float field_8;
	float field_C;

	void SetGamma(float arg1, char arg2);
};

VALIDATE_SIZE(CGamma, 0x10);

extern PLUGIN_API CGamma &gamma;