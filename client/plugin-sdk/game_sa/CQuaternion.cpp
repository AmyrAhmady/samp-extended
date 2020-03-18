/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CQuaternion.h"

// Quat to matrix
void CQuaternion::Get(RwMatrix *out)
{
	((void (__thiscall *)(CQuaternion *, RwMatrix *))0x59C080)(this, out);
}

// Quat to euler angles
void CQuaternion::Get(float *x, float *y, float *z)
{
	((void (__thiscall *)(CQuaternion *, float *, float *, float *))0x59C160)(this, x, y, z);
}

// Quat to axis & angle
void CQuaternion::Get(RwV3d *axis, float *angle)
{
	((void (__thiscall *)(CQuaternion *, RwV3d *, float *))0x59C230)(this, axis, angle);
}

// Stores result of quat multiplication
void CQuaternion::Multiply(CQuaternion const& a, CQuaternion const& b)
{
	((void (__thiscall *)(CQuaternion *, CQuaternion const&, CQuaternion const&))0x59C270)(this, a, b);
}

// Spherical linear interpolation
void CQuaternion::Slerp(CQuaternion const& from, CQuaternion const& to, float halftheta, float sintheta_inv, float t)
{
	((void (__thiscall *)(CQuaternion *, CQuaternion const&, CQuaternion const&, float, float, float))0x59C300)(this, from, to, halftheta, sintheta_inv, t);
}

// Quat from matrix
void CQuaternion::Set(RwMatrix  const& m)
{
	((void (__thiscall *)(CQuaternion *, RwMatrix const&))0x59C3E0)(this, m);
}

// Quat from euler angles
void CQuaternion::Set(float x, float y, float z)
{
	((void (__thiscall *)(CQuaternion *, float, float, float))0x59C530)(this, x, y, z);
}

// Quat from axis & angle
void CQuaternion::Set(RwV3d *axis, float angle)
{
	((void (__thiscall *)(CQuaternion *, RwV3d *, float))0x59C600)(this, axis, angle);
}

// Spherical linear interpolation
void CQuaternion::Slerp(CQuaternion const& from, CQuaternion const& to, float t)
{
	((void (__thiscall *)(CQuaternion *, CQuaternion const&, CQuaternion const&, float))0x59C630)(this, from, to, t);
}

// Conjugate of a quat
void CQuaternion::Conjugate()
{
	((void (__thiscall *)(CQuaternion *))0x4D37D0)(this);
}

// Squared length of a quat
float CQuaternion::GetLengthSquared(void)
{
	return ((float (__thiscall *)(CQuaternion *))0x4D12C0)(this);
}

// Add right to the quat
void CQuaternion::operator+=(CQuaternion const& right)
{
	((void (__thiscall*)(CQuaternion *, CQuaternion const&))0x4D12F0)(this, right);
}

// Substract right from the quat
void CQuaternion::operator-=(CQuaternion const& right)
{
	((void (__thiscall*)(CQuaternion *, CQuaternion const&))0x4D1320)(this, right);
}

// Assigns value from other quat
void CQuaternion::operator=(CQuaternion const& right)
{
	((void (__thiscall*)(CQuaternion *, CQuaternion const&))0x4D00C0)(this, right);
}

// Multiplies quat by a floating point value
void CQuaternion::operator*=(float multiplier)
{
	((void (__thiscall*)(CQuaternion *, float))0x4CF9B0)(this, multiplier);
}

// Multiplies quat by a floating point value
void CQuaternion::Scale(float multiplier)
{
	((void (__thiscall*)(CQuaternion *, float))0x4CF9B0)(this, multiplier);
}

// Copies value from other quat
void CQuaternion::Copy(CQuaternion const& from)
{
	((void (__thiscall*)(CQuaternion *, CQuaternion const&))0x4CF9E0)(this, from);
}

// Gets a dot product for quats
void CQuaternion::Dot(CQuaternion const& a)
{
	((void (__thiscall*)(CQuaternion *, CQuaternion const&))0x4CFA00)(this, a);
}

// Normalises a quat
void CQuaternion::Normalise()
{
	((void (__thiscall*)(CQuaternion *))0x4D1610)(this);
}