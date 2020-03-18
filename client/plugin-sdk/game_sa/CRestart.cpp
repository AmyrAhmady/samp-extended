/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRestart.h"

bool &CRestart::bOverrideRespawnBasePointForMission = *(bool *)0xA43248;
CVector *CRestart::OverrideRespawnBasePointForMission = (CVector *)0xA4342C;
float &CRestart::OverrideHeading = *(float *)0xA43260;
bool &CRestart::bOverrideRestart = *(bool *)0xA43264;
CVector *CRestart::OverridePosition = (CVector *)0xA43408;

short &CRestart::NumberOfPoliceRestarts = *(short *)0xA43268;
int &CRestart::PoliceRestartWhenToUse = *(int *)0xA43270;
float &CRestart::PoliceRestartHeadings = *(float *)0xA43298;
CVector *CRestart::PoliceRestartPoints = (CVector *)0xA43390;

short &CRestart::NumberOfHospitalRestarts = *(short *)0xA4326C;
int &CRestart::HospitalRestartWhenToUse = *(int *)0xA432C0;
float &CRestart::HospitalRestartHeadings = *(float *)0xA432E8;
CVector *CRestart::HospitalRestartPoints = (CVector *)0xA43318;

void CRestart::AddHospitalRestartPoint(CVector const &point, float angle, int townId)
{
	((void(__cdecl *)(CVector const&, float, int))0x460730)(point, angle, townId);
}
void CRestart::AddPoliceRestartPoint(CVector const &point, float angle, int townId)
{
	((void(__cdecl *)(CVector const&, float, int))0x460780)(point, angle, townId);
}
void CRestart::CancelOverrideRestart()
{
	((void(__cdecl *)())0x460800)();
}
void CRestart::ClearRespawnPointForDurationOfMission()
{
	((void(__cdecl *)())0x460840)();
}
void CRestart::FindClosestHospitalRestartPoint(CVector point, CVector *storedPoint, float *storedAngle)
{
	((void(__cdecl *)(CVector, CVector*, float*))0x460A50)(point, storedPoint, storedAngle);
}
void CRestart::FindClosestPoliceRestartPoint(CVector point, CVector *storedPoint, float *storedAngle)
{
	((void(__cdecl *)(CVector, CVector*, float*))0x460850)(point, storedPoint, storedAngle);
}
void CRestart::Initialise()
{
	((void(__cdecl *)())0x460630)();
}
void CRestart::Load()
{
	((void(__cdecl *)())0x5D3770)();
}
void CRestart::OverrideNextRestart(CVector const& point, float angle)
{
	((void(__cdecl *)(CVector const&, float))0x4607D0)(point, angle);
}

/*
void CRestart::Save()
{
	((void(__cdecl *)())0x460780)();
}

void CRestart::SetRespawnPointForDurationOfMission(CVector point)
{
	((void(__cdecl *)())0x460780)();
}
*/