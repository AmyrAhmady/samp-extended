/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRopes.h"

CRope* CRopes::ms_aRopes = (CRope*)0xB768B8;
int& CRopes::ms_bPlayerControlsCrane = *(int*)0xB76898;


void CRopes::CreateRopeForSwatPed(CVector const& startPos)
{
	((void(__cdecl *)(CVector const&))0x558D10)(startPos);
}
void CRopes::FindPickupHeight(CEntity* entity)
{
	((void(__cdecl *)(CEntity*))0x556760)(entity);
}
int CRopes::FindRope(unsigned int id)
{
	return ((int(__cdecl *)(unsigned int))0x556000)(id);
}
void CRopes::Init()
{
	((void(__cdecl *)())0x555DC0)();
}
bool CRopes::IsCarriedByRope(CEntity* entity)
{
	return ((bool(__cdecl *)(CEntity*))0x555F80)(entity);
}
bool CRopes::RegisterRope(CEntity* ropeId, unsigned int ropeType, CVector startPos, bool bExpires, unsigned char segmentCount, unsigned char flags, CEntity* holder, unsigned int timeExpire)
{
	return ((bool(__cdecl *)(CEntity*, unsigned int, CVector, bool, unsigned char, unsigned char, CEntity*, unsigned int))0x556B40)(ropeId, ropeType, startPos, bExpires, segmentCount, flags, holder, timeExpire);
}
void CRopes::Render()
{
	((void(__cdecl *)())0x556AE0)();
}
void CRopes::SetSpeedOfTopNode(unsigned int ropeId, CVector dirSpeed)
{
	((void(__cdecl *)(unsigned int, CVector))0x555DF0)(ropeId, dirSpeed);
}
void CRopes::Shutdown()
{
	((void(__cdecl *)())0x556B10)();
}
void CRopes::Update()
{
	((void(__cdecl *)())0x558D70)();
}