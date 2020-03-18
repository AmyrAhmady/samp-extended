/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CPathFind.h"
#include "eCarMission.h"

enum eCarDrivingStyle : char
{
    DRIVINGSTYLE_STOP_FOR_CARS,
    DRIVINGSTYLE_SLOW_DOWN_FOR_CARS,
    DRIVINGSTYLE_AVOID_CARS,
    DRIVINGSTYLE_PLOUGH_THROUGH,
    DRIVINGSTYLE_STOP_FOR_CARS_IGNORE_LIGHTS
};

class PLUGIN_API CAutoPilot {
public:
    CNodeAddress         m_currentAddress;
    CNodeAddress         m_startingRouteNode;
    CNodeAddress field_8;
    int field_C;
    unsigned int         m_nSpeedScaleFactor;
    CCarPathLinkAddress  m_nCurrentPathNodeInfo;
    CCarPathLinkAddress  m_nNextPathNodeInfo;
    CCarPathLinkAddress  m_nPreviousPathNodeInfo;
    char field_1A[2];
    unsigned int         m_nTimeToStartMission;
    unsigned int         m_nTimeSwitchedToRealPhysics;
    char field_24;
    char _smthCurr;
    char _smthNext;
    char                 m_nCurrentLane;
    char                 m_nNextLane;
    eCarDrivingStyle                 m_nCarDrivingStyle;
    eCarMission                 m_nCarMission;
    char                 m_nTempAction;
    unsigned int         m_nTempActionTime;
    unsigned int _someStartTime;
    char field_34;
    char field_35;
    char field_36[2];
    float field_38;
    float                m_fMaxTrafficSpeed;
    char m_nCruiseSpeed;
    char field_41;
    char field_42[2];
    float field_44;
    char field_48[1];
    char heliThrustPower;
    char field_4A;
    unsigned char        m_nCarCtrlFlags;
    char field_4C;
    char                 m_nStraightLineDistance;
    char field_4E;
    char field_4F;
    char field_50;
    char field_51;
    char field_52[10];
    CVector              m_vecDestinationCoors;
    CNodeAddress         m_aPathFindNodesInfo[8];
    unsigned short       m_nPathFindNodesCount;
    char field_8A[2];
    class CVehicle      *m_pTargetCar;
    class CEntity       *m_pCarWeMakingSlowDownFor;
    char field_94;
    char field_95;
    short field_96;
};

VALIDATE_SIZE(CAutoPilot, 0x98);
