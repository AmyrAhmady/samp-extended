/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CLocalisation {
public:
    static void Initialise();
    static void SetNormalGame();
    static void SetFrenchGame();
    static void SetGermanGame();
    static bool GermanGame();
    static bool FrenchGame();
    static bool Metric();
    static bool Blood();
    static bool Porn();
    static bool ScreamsFromKills();
    static bool Prostitutes();
    static bool KickingWhenDown();
    static bool ShootLimbs();
    static bool KnockDownPeds();
    static bool KillFrenzy();
    static bool StealFromDeadPed();
    static bool KillPeds();
    static bool PedsOnFire();

    static bool &nastyGame;
    static bool &germanGame;
    static bool &frenchGame;
};