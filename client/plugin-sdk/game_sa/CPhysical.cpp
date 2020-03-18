/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPhysical.h"

void CPhysical::ProcessEntityCollision(CEntity *entity, CColPoint *point)
{
	((void (__thiscall *)(CPhysical*, CEntity *, CColPoint *))(*(void ***)this)[23])(this, entity, point);
}

// Converted from thiscall void CPhysical::RemoveAndAdd(void) 0x542560
void CPhysical::RemoveAndAdd()
{
	((void (__thiscall *)(CPhysical*))0x542560)(this);
}

// Converted from thiscall void CPhysical::AddToMovingList(void) 0x542800
void CPhysical::AddToMovingList()
{
	((void (__thiscall *)(CPhysical*))0x542800)(this);
}

// Converted from thiscall void CPhysical::RemoveFromMovingList(void) 0x542860
void CPhysical::RemoveFromMovingList()
{
	((void (__thiscall *)(CPhysical*))0x542860)(this);
}

// Converted from thiscall void CPhysical::SetDamagedPieceRecord(float damageIntensity,CEntity *damagingEntity,CColPoint &colPoint,float distanceMult) 0x5428C0
void CPhysical::SetDamagedPieceRecord(float damageIntensity, CEntity* damagingEntity, CColPoint& colPoint, float distanceMult)
{
	((void (__thiscall *)(CPhysical*, float, CEntity*, CColPoint&, float))0x5428C0)(this, damageIntensity, damagingEntity, colPoint, distanceMult);
}

// Converted from thiscall void CPhysical::ApplyMoveForce(CVector force) 0x5429F0
void CPhysical::ApplyMoveForce(CVector force)
{
	((void (__thiscall *)(CPhysical*, CVector))0x5429F0)(this, force);
}

// Converted from thiscall void CPhysical::ApplyTurnForce(CVector dir,CVector velocity) 0x542A50
void CPhysical::ApplyTurnForce(CVector dir, CVector velocity)
{
	((void (__thiscall *)(CPhysical*, CVector, CVector))0x542A50)(this, dir, velocity);
}

// Converted from thiscall void CPhysical::ApplyForce(CVector dir,CVector velocity,bool flag) 0x542B50
void CPhysical::ApplyForce(CVector dir, CVector velocity, bool flag)
{
	((void (__thiscall *)(CPhysical*, CVector, CVector, bool))0x542B50)(this, dir, velocity, flag);
}

// Converted from thiscall CVector CPhysical::GetSpeed(CVector direction) 0x542CE0
CVector CPhysical::GetSpeed(CVector direction)
{
	CVector result;
	((void (__thiscall *)(CPhysical*, CVector*, CVector))0x542CE0)(this, &result, direction);
	return result;
}

// Converted from thiscall void CPhysical::ApplyMoveSpeed(void) 0x542DD0
void CPhysical::ApplyMoveSpeed()
{
	((void (__thiscall *)(CPhysical*))0x542DD0)(this);
}

// Converted from thiscall void CPhysical::ApplyTurnSpeed(void) 0x542E20
void CPhysical::ApplyTurnSpeed()
{
	((void (__thiscall *)(CPhysical*))0x542E20)(this);
}

// Converted from thiscall void CPhysical::ApplyGravity(void) 0x542FE0
void CPhysical::ApplyGravity()
{
	((void (__thiscall *)(CPhysical*))0x542FE0)(this);
}

// Converted from thiscall void CPhysical::ApplyFrictionMoveForce(CVector moveForce) 0x5430A0
void CPhysical::ApplyFrictionMoveForce(CVector moveForce)
{
	((void (__thiscall *)(CPhysical*, CVector))0x5430A0)(this, moveForce);
}

// Converted from thiscall void CPhysical::ApplyFrictionTurnForce(CVector posn,CVector velocity) 0x543100
void CPhysical::ApplyFrictionTurnForce(CVector posn, CVector velocity)
{
	((void (__thiscall *)(CPhysical*, CVector, CVector))0x543100)(this, posn, velocity);
}

// Converted from thiscall void CPhysical::ApplyFrictionForce(CVector posn,CVector velocity) 0x543220
void CPhysical::ApplyFrictionForce(CVector posn, CVector velocity)
{
	((void (__thiscall *)(CPhysical*, CVector, CVector))0x543220)(this, posn, velocity);
}

// Converted from thiscall void CPhysical::SkipPhysics(void) 0x5433B0
void CPhysical::SkipPhysics()
{
	((void (__thiscall *)(CPhysical*))0x5433B0)(this);
}

// Converted from thiscall void CPhysical::AddCollisionRecord(CEntity *collidedEntity) 0x543490
void CPhysical::AddCollisionRecord(CEntity* collidedEntity)
{
	((void (__thiscall *)(CPhysical*, CEntity*))0x543490)(this, collidedEntity);
}

// Converted from thiscall bool CPhysical::GetHasCollidedWith(CEntity *entity) 0x543540
bool CPhysical::GetHasCollidedWith(CEntity* entity)
{
	return ((bool (__thiscall *)(CPhysical*, CEntity*))0x543540)(this, entity);
}

// Converted from thiscall bool CPhysical::GetHasCollidedWithAnyObject(void) 0x543580
bool CPhysical::GetHasCollidedWithAnyObject()
{
	return ((bool (__thiscall *)(CPhysical*))0x543580)(this);
}

// Converted from thiscall bool CPhysical::ApplyCollision(CEntity *entity,CColPoint &colPoint,float &) 0x5435C0
bool CPhysical::ApplyCollision(CEntity* entity, CColPoint& colPoint, float& arg2)
{
	return ((bool (__thiscall *)(CPhysical*, CEntity*, CColPoint&, float&))0x5435C0)(this, entity, colPoint, arg2);
}

// Converted from thiscall bool CPhysical::ApplySoftCollision(CEntity *entity,CColPoint &colPoint,float &) 0x543890
bool CPhysical::ApplySoftCollision(CEntity* entity, CColPoint& colPoint, float& arg2)
{
	return ((bool (__thiscall *)(CPhysical*, CEntity*, CColPoint&, float&))0x543890)(this, entity, colPoint, arg2);
}

// Converted from thiscall bool CPhysical::ApplySpringCollision(float,CVector &,CVector &,float,float,float &) 0x543C90
bool CPhysical::ApplySpringCollision(float arg0, CVector& arg1, CVector& arg2, float arg3, float arg4, float& arg5)
{
	return ((bool (__thiscall *)(CPhysical*, float, CVector&, CVector&, float, float, float&))0x543C90)(this, arg0, arg1, arg2, arg3, arg4, arg5);
}

// Converted from thiscall bool CPhysical::ApplySpringCollisionAlt(float,CVector &,CVector &,float,float,CVector &,float &) 0x543D60
bool CPhysical::ApplySpringCollisionAlt(float arg0, CVector& arg1, CVector& arg2, float arg3, float arg4, CVector& arg5, float& arg6)
{
	return ((bool (__thiscall *)(CPhysical*, float, CVector&, CVector&, float, float, CVector&, float&))0x543D60)(this, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

// Converted from thiscall bool CPhysical::ApplySpringDampening(float,float,CVector &,CVector &,CVector &) 0x543E90
bool CPhysical::ApplySpringDampening(float arg0, float arg1, CVector& arg2, CVector& arg3, CVector& arg4)
{
	return ((bool (__thiscall *)(CPhysical*, float, float, CVector&, CVector&, CVector&))0x543E90)(this, arg0, arg1, arg2, arg3, arg4);
}

// Converted from thiscall bool CPhysical::ApplySpringDampeningOld(float,float,CVector &,CVector &,CVector &) 0x544100
bool CPhysical::ApplySpringDampeningOld(float arg0, float arg1, CVector& arg2, CVector& arg3, CVector& arg4)
{
	return ((bool (__thiscall *)(CPhysical*, float, float, CVector&, CVector&, CVector&))0x544100)(this, arg0, arg1, arg2, arg3, arg4);
}

// Converted from thiscall void CPhysical::RemoveRefsToEntity(CEntity *entity) 0x544280
void CPhysical::RemoveRefsToEntity(CEntity* entity)
{
	((void (__thiscall *)(CPhysical*, CEntity*))0x544280)(this, entity);
}

// Converted from thiscall void CPhysical::DettachEntityFromEntity(float x,float y,float z,bool useCollision) 0x5442F0
void CPhysical::DettachEntityFromEntity(float x, float y, float z, bool useCollision)
{
	((void (__thiscall *)(CPhysical*, float, float, float, bool))0x5442F0)(this, x, y, z, useCollision);
}

// Converted from thiscall void CPhysical::DettachAutoAttachedEntity(void) 0x5446A0
void CPhysical::DettachAutoAttachedEntity()
{
	((void (__thiscall *)(CPhysical*))0x5446A0)(this);
}

// Converted from thiscall float CPhysical::GetLightingFromCol(bool flag) 0x5447B0
float CPhysical::GetLightingFromCol(bool flag)
{
	return ((float (__thiscall *)(CPhysical*, bool))0x5447B0)(this, flag);
}

// Converted from thiscall float CPhysical::GetLightingTotal(void) 0x544850
float CPhysical::GetLightingTotal()
{
	return ((float (__thiscall *)(CPhysical*))0x544850)(this);
}

// Converted from thiscall bool CPhysical::CanPhysicalBeDamaged(eWeaponType weapon,uchar *) 0x5448B0
bool CPhysical::CanPhysicalBeDamaged(eWeaponType weapon, unsigned char* arg1)
{
	return ((bool (__thiscall *)(CPhysical*, eWeaponType, unsigned char*))0x5448B0)(this, weapon, arg1);
}

// Converted from thiscall void CPhysical::ApplyAirResistance(void) 0x544C40
void CPhysical::ApplyAirResistance()
{
	((void (__thiscall *)(CPhysical*))0x544C40)(this);
}

// Converted from thiscall bool CPhysical::ApplyCollisionAlt(CEntity *entity,CColPoint &colPoint,float &,CVector &,CVector &) 0x544D50
bool CPhysical::ApplyCollisionAlt(CEntity* entity, CColPoint& colPoint, float& arg2, CVector& arg3, CVector& arg4)
{
	return ((bool (__thiscall *)(CPhysical*, CEntity*, CColPoint&, float&, CVector&, CVector&))0x544D50)(this, entity, colPoint, arg2, arg3, arg4);
}

// Converted from thiscall bool CPhysical::ApplyFriction(float,CColPoint &colPoint) 0x5454C0
bool CPhysical::ApplyFriction(float arg0, CColPoint& colPoint)
{
	return ((bool (__thiscall *)(CPhysical*, float, CColPoint&))0x5454C0)(this, arg0, colPoint);
}

// Converted from thiscall bool CPhysical::ApplyFriction(CPhysical* physical,float,CColPoint &colPoint) 0x545980
bool CPhysical::ApplyFriction(CPhysical* physical, float arg1, CColPoint& colPoint)
{
	return ((bool (__thiscall *)(CPhysical*, CPhysical*, float, CColPoint&))0x545980)(this, physical, arg1, colPoint);
}

// Converted from thiscall bool CPhysical::ProcessShiftSectorList(int sectorX,int sectorY) 0x546670
bool CPhysical::ProcessShiftSectorList(int sectorX, int sectorY)
{
	return ((bool (__thiscall *)(CPhysical*, int, int))0x546670)(this, sectorX, sectorY);
}

// Converted from stdcall void CPhysical::PlacePhysicalRelativeToOtherPhysical(CPhysical* physical1,CPhysical* physical2,CVector offset) 0x546DB0
void CPhysical::PlacePhysicalRelativeToOtherPhysical(CPhysical* physical1, CPhysical* physical2, CVector offset)
{
	((void (__cdecl *)(CPhysical*, CPhysical*, CVector))0x546DB0)(physical1, physical2, offset);
}

// Converted from thiscall float CPhysical::ApplyScriptCollision(CVector,float,float,CVector*) 0x546ED0
float CPhysical::ApplyScriptCollision(CVector arg0, float arg1, float arg2, CVector* arg3)
{
	return ((float (__thiscall *)(CPhysical*, CVector, float, float, CVector*))0x546ED0)(this, arg0, arg1, arg2, arg3);
}

// Converted from thiscall void CPhysical::PositionAttachedEntity(void) 0x546FF0
void CPhysical::PositionAttachedEntity()
{
	((void (__thiscall *)(CPhysical*))0x546FF0)(this);
}

// Converted from thiscall void CPhysical::ApplySpeed(void) 0x547B80
void CPhysical::ApplySpeed()
{
	((void (__thiscall *)(CPhysical*))0x547B80)(this);
}

// Converted from thiscall void CPhysical::UnsetIsInSafePosition(void) 0x548320
void CPhysical::UnsetIsInSafePosition()
{
	((void (__thiscall *)(CPhysical*))0x548320)(this);
}

// Converted from thiscall void CPhysical::ApplyFriction(void) 0x5483D0
void CPhysical::ApplyFriction()
{
	((void (__thiscall *)(CPhysical*))0x5483D0)(this);
}

// Converted from thiscall bool CPhysical::ApplyCollision(CPhysical* physical,CColPoint &colPoint,float &,float &) 0x548680
bool CPhysical::ApplyCollision(CPhysical* physical, CColPoint& colPoint, float& arg2, float& arg3)
{
	return ((bool (__thiscall *)(CPhysical*, CPhysical*, CColPoint&, float&, float&))0x548680)(this, physical, colPoint, arg2, arg3);
}

// Converted from thiscall bool CPhysical::ApplySoftCollision(CPhysical* physical,CColPoint &colPoint,float &,float &) 0x54A2C0
bool CPhysical::ApplySoftCollision(CPhysical* physical, CColPoint& colPoint, float& arg2, float& arg3)
{
	return ((bool (__thiscall *)(CPhysical*, CPhysical*, CColPoint&, float&, float&))0x54A2C0)(this, physical, colPoint, arg2, arg3);
}

// Converted from thiscall bool CPhysical::ProcessCollisionSectorList(int sectorX,int sectorY) 0x54BA60
bool CPhysical::ProcessCollisionSectorList(int sectorX, int sectorY)
{
	return ((bool (__thiscall *)(CPhysical*, int, int))0x54BA60)(this, sectorX, sectorY);
}

// Converted from thiscall bool CPhysical::ProcessCollisionSectorList_SimpleCar(CRepeatSector *sector) 0x54CFF0
bool CPhysical::ProcessCollisionSectorList_SimpleCar(CRepeatSector* sector)
{
	return ((bool (__thiscall *)(CPhysical*, CRepeatSector*))0x54CFF0)(this, sector);
}

// Converted from thiscall void CPhysical::AttachEntityToEntity(CEntity *entity,CVector offset,CVector rotation) 0x54D570
void CPhysical::AttachEntityToEntity(CEntity* entity, CVector offset, CVector rotation)
{
	((void (__thiscall *)(CPhysical*, CEntity*, CVector, CVector))0x54D570)(this, entity, offset, rotation);
}

// Converted from thiscall void CPhysical::AttachEntityToEntity(CEntity *entity,CVector *offset,RtQuat *rotation) 0x54D690
void CPhysical::AttachEntityToEntity(CEntity* entity, CVector* offset, RtQuat* rotation)
{
	((void (__thiscall *)(CPhysical*, CEntity*, CVector*, RtQuat*))0x54D690)(this, entity, offset, rotation);
}

// Converted from thiscall bool CPhysical::CheckCollision(void) 0x54D920
bool CPhysical::CheckCollision()
{
	return ((bool (__thiscall *)(CPhysical*))0x54D920)(this);
}

// Converted from thiscall bool CPhysical::CheckCollision_SimpleCar(void) 0x54DAB0
bool CPhysical::CheckCollision_SimpleCar()
{
	return ((bool (__thiscall *)(CPhysical*))0x54DAB0)(this);
}