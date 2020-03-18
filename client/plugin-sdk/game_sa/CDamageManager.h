/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CAutomobile;

enum PLUGIN_API eDamageState {
    DAMSTATE_OK = 0,
    DAMSTATE_OPENED = 1,
    DAMSTATE_DAMAGED = 2,
    DAMSTATE_OPENED_DAMAGED = 3,
    DAMSTATE_NOTPRESENT = 4
};

enum PLUGIN_API tComponent {
    COMPONENT_WHEEL_LF = 1,
    COMPONENT_WHEEL_RF = 2,
    COMPONENT_WHEEL_LR = 3,
    COMPONENT_WHEEL_RR = 4,
    COMPONENT_BONNET = 5,
    COMPONENT_BOOT = 6,
    COMPONENT_DOOR_LF = 7,
    COMPONENT_DOOR_RF = 8,
    COMPONENT_DOOR_LR = 9,
    COMPONENT_DOOR_RR = 10,
    COMPONENT_WING_LF = 11,
    COMPONENT_WING_RF = 12,
    COMPONENT_WING_LR = 13,
    COMPONENT_WING_RR = 14,
    COMPONENT_WINDSCREEN = 15,
    COMPONENT_BUMP_FRONT = 16,
    COMPONENT_BUMP_REAR = 17
};

enum PLUGIN_API tComponentGroup {
    COMPGROUP_PANEL = 0,
    COMPGROUP_WHEEL = 1,
    COMPGROUP_DOOR = 2,
    COMPGROUP_BONNET = 3,
    COMPGROUP_BOOT = 4,
    COMPGROUP_LIGHT = 5,
    COMPGROUP_NA = 6
};

enum PLUGIN_API eWheels {
    WHEEL_FRONT_LEFT = 0,
    WHEEL_REAR_LEFT = 1,
    WHEEL_FRONT_RIGHT = 2,
    WHEEL_REAR_RIGHT = 3
};

enum PLUGIN_API ePanels {
    WING_FRONT_LEFT = 0,
    WING_FRONT_RIGHT = 1,
    WINDSCREEN = 4,
    BUMP_FRONT = 5,
    BUMP_REAR = 6
};

enum PLUGIN_API eDoors {
    BONNET = 0,
    BOOT = 1,
    DOOR_FRONT_LEFT = 2,
    DOOR_FRONT_RIGHT = 3,
    DOOR_REAR_LEFT = 4,
    DOOR_REAR_RIGHT = 5
};

enum PLUGIN_API eLights {
    LIGHT_FRONT_LEFT = 0,
    LIGHT_FRONT_RIGHT = 1,
    LIGHT_REAR_RIGHT = 2,
    LIGHT_REAR_LEFT = 3
};

class PLUGIN_API CDamageManager {
public:
    float m_fWheelDamageEffect;
    unsigned char m_nEngineStatus;
    union {
        unsigned char m_anWheelsStatus[4];
        struct {
            unsigned char m_nRightRearWheelsStatus;
            unsigned char m_nRightFrontWheelsStatus;
            unsigned char m_nLeftRearWheelsStatus;
            unsigned char m_nLeftFrontWheelsStatus;
        };
    };
    union {
        unsigned char m_anDoorsStatus[6];
        struct {
            unsigned char m_nBonnetStatus;
            unsigned char m_nBootStatus;
            unsigned char m_nLeftFrontDoorStatus;
            unsigned char m_nRightFrontDoorStatus;
            unsigned char m_nLeftRearDoorStatus;
            unsigned char m_nRightRearDoorStatus;
        };
    };
    union {
        unsigned int m_nLightsStatus;
        struct {
            unsigned int m_nLeftFrontLightStatus : 2;
            unsigned int m_nRightFrontLightStatus : 2;
            unsigned int m_nRightRearLightStatus : 2;
            unsigned int m_nLeftRearLightStatus : 2;
        };
    };
    unsigned int m_nPanelsStatus;

    //funcs

    // damageCompId - eLights/ePanel/... id for this component
    bool GetComponentGroup(tComponent component, tComponentGroup* group, unsigned char* damageCompId);
    void ResetDamageStatus();
    void SetLightStatus(eLights light, unsigned int status);
    unsigned int GetLightStatus(eLights light);
    void SetPanelStatus(int panel, unsigned int status);
    unsigned int GetPanelStatus(int arg0);
    void SetWheelStatus(int wheel, unsigned int status);
    unsigned int GetWheelStatus(int wheel);
    void SetDoorStatus(eDoors door, unsigned int status);
    void SetDoorStatus(int doorNodeIndex, unsigned int status);
    unsigned int GetDoorStatus(int doorNodeIndex);
    unsigned int GetDoorStatus(eDoors door);
    // Status is a value between 0-250
    void SetEngineStatus(unsigned int status);
    // Status is a value between 0-250
    unsigned int GetEngineStatus();
    void SetAeroplaneCompStatus(int component, unsigned int status);
    unsigned int GetAeroplaneCompStatus(int component);
    // damageCompId - eLights/ePanel/... id for this component
    bool ProgressDoorDamage(unsigned char damageCompId, CAutomobile* car);
    // Empty function
    bool ProgressEngineDamage(float arg0);
    // Set next level of damage to panel
    bool ProgressPanelDamage(unsigned char panel);
    // Set next level of damage to panel
    bool ProgressWheelDamage(unsigned char wheel);
    // Set next level of damage to aeroplane component
    bool ProgressAeroplaneDamage(unsigned char component);
    bool ApplyDamage(CAutomobile* car, tComponent component, float intensity, float arg3);
    void FuckCarCompletely(bool skipWheels);
    // returns -1 if no node for this panel
    int GetCarNodeIndexFromPanel(ePanels panel);
    // returns -1 if no node for this door
    int GetCarNodeIndexFromDoor(eDoors door);
    void Reset();
};

VALIDATE_SIZE(CDamageManager, 0x18);
