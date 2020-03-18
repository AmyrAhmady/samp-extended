/*
Plugin-SDK (Grand Theft Auto San Andreas) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/

#include "CPedIK.h"

// Converted from thiscall void CPedIK::RotateTorso(AnimBlendFrameData *bone,LimbOrientation &orientation,bool flag) 0x5FDDB0 
void CPedIK::RotateTorso(AnimBlendFrameData* bone, LimbOrientation& orientation, bool flag) {
	plugin::CallMethod<0x5FDDB0, CPedIK *, AnimBlendFrameData*, LimbOrientation&, bool>(this, bone, orientation, flag);
}

// Converted from thiscall bool CPedIK::PointGunInDirection(float Z_angle, float arg2 , bool flag , float arg4 ) 0x5FDC00 
bool CPedIK::PointGunInDirection(float Z_angle, float arg2, bool flag, float arg4) {
	return plugin::CallMethodAndReturn<bool, 0x5FDC00, CPedIK *, float, float, bool, float>(this, Z_angle, arg2, flag, arg4);
}

// Converted from thiscall void CPedIK::PointGunAtPosition(CVector const& posn,float arg2)	0x5FDE20 
void CPedIK::PointGunAtPosition(CVector const& posn, float arg2) {
	plugin::CallMethod<0x5FDE20, CPedIK *, CVector const&, float>(this, posn, arg2);
}

// Converted from cdecl RwMatrixTag* CPedIK::GetWorldMatrix(RwFrame *frame, RwMatrixTag *transformMat) 0x5FD8F0 
RwMatrixTag* CPedIK::GetWorldMatrix(RwFrame* frame, RwMatrixTag* transformMat) {
	return plugin::CallAndReturn<RwMatrixTag*, 0x5FD8F0, RwFrame*, RwMatrixTag*>(frame, transformMat);
}

MoveLimbResult CPedIK::MoveLimb(LimbOrientation& TorsoOrien, float yaw, float pitch, LimbMovementInfo &LimbMoveInfo)
{
    return plugin::CallAndReturn<MoveLimbResult, 0x5FDA60, LimbOrientation&, float, float, LimbMovementInfo &>
        (TorsoOrien, yaw, pitch, LimbMoveInfo);
}

MoveLimbResult CPedIK::MoveLimb(LimbOrientation& TorsoOrien, float yaw, float pitch,LimbMovementInfo &LimbMoveInfo,
    float fNormalize)
{
    return plugin::CallAndReturn<MoveLimbResult, 0x5FDB60, LimbOrientation&, float, float, LimbMovementInfo &, float>
        (TorsoOrien, yaw, pitch, LimbMoveInfo, fNormalize);
}

