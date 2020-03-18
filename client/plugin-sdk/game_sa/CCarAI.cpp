/*
Plugin-SDK (Grand Theft Auto San Andreas) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/

#include "CCarAI.h"

// Converted from cdecl void CCarAI::BackToCruisingIfNoWantedLevel(CVehicle *pVehicle) 0x41BFA0
void CCarAI::BackToCruisingIfNoWantedLevel(CVehicle* pVehicle) {
	plugin::Call<0x41BFA0, CVehicle*>(pVehicle);
}

// Converted from cdecl void CCarAI::CarHasReasonToStop(CVehicle *pVehicle) 0x41C050
void CCarAI::CarHasReasonToStop(CVehicle* pVehicle) {
	plugin::Call<0x41C050, CVehicle*>(pVehicle);
}

// Converted from cdecl void CCarAI::AddPoliceCarOccupants(CVehicle *pVehicle,bool arg2) 0x41C070
void CCarAI::AddPoliceCarOccupants(CVehicle* pVehicle, bool arg2) {
	plugin::Call<0x41C070, CVehicle*, bool>(pVehicle, arg2);
}

// Converted from cdecl void CCarAI::AddAmbulanceOccupants(CVehicle *pVehicle) 0x41C4A0
void CCarAI::AddAmbulanceOccupants(CVehicle* pVehicle) {
	plugin::Call<0x41C4A0, CVehicle*>(pVehicle);
}

// Converted from cdecl void CCarAI::AddFiretruckOccupants(CVehicle *pVehicle) 0x41C600
void CCarAI::AddFiretruckOccupants(CVehicle* pVehicle) {
	plugin::Call<0x41C600, CVehicle*>(pVehicle);
}

// Converted from cdecl void CCarAI::TellOccupantsToLeaveCar(CVehicle *pVehicle) 0x41C760
void CCarAI::TellOccupantsToLeaveCar(CVehicle* pVehicle) {
	plugin::Call<0x41C760, CVehicle*>(pVehicle);
}

// Converted from cdecl void CCarAI::TellCarToFollowOtherCar(CVehicle *pVehicle1,CVehicle *pVehicle2,float radius) 0x41C960
void CCarAI::TellCarToFollowOtherCar(CVehicle* pVehicle1, CVehicle* pVehicle2, float radius) {
	plugin::Call<0x41C960, CVehicle*, CVehicle*, float>(pVehicle1, pVehicle2, radius);
}

// Converted from cdecl char CCarAI::FindPoliceBikeMissionForWantedLevel(void) 0x41CA40 // return 0x2B
char CCarAI::FindPoliceBikeMissionForWantedLevel() {
	return plugin::CallAndReturn<char, 0x41CA40>();
}

// Converted from cdecl char CCarAI::FindPoliceBoatMissionForWantedLevel(void) 0x41CA50
char CCarAI::FindPoliceBoatMissionForWantedLevel() {
	return plugin::CallAndReturn<char, 0x41CA50>();
}

// Converted from cdecl int CCarAI::FindPoliceCarSpeedForWantedLevel(CVehicle *pVehicle) 0x41CAA0
int CCarAI::FindPoliceCarSpeedForWantedLevel(CVehicle* pVehicle) {
	return plugin::CallAndReturn<int, 0x41CAA0, CVehicle*>(pVehicle);
}

// Converted from cdecl float CCarAI::GetCarToGoToCoors(CVehicle *pVehicle1,CVector *pVector,int drivingStyle,bool bSpeedLimit20) 0x41CE30
float CCarAI::GetCarToGoToCoors(CVehicle* pVehicle1, CVector* pVector, int drivingStyle, bool bSpeedLimit20) {
	return plugin::CallAndReturn<float, 0x41CE30, CVehicle*, CVector*, int, bool>(pVehicle1, pVector, drivingStyle, bSpeedLimit20);
}

// Converted from cdecl float CCarAI::GetCarToParkAtCoors(CVehicle *pVehicle,CVector *pVector) 0x41D350
float CCarAI::GetCarToParkAtCoors(CVehicle* pVehicle, CVector* pVector) {
	return plugin::CallAndReturn<float, 0x41D350, CVehicle*, CVector*>(pVehicle, pVector);
}

// Converted from cdecl void CCarAI::MellowOutChaseSpeed(CVehicle *pVehicle) 0x41D3D0
void CCarAI::MellowOutChaseSpeed(CVehicle* pVehicle) {
	plugin::Call<0x41D3D0, CVehicle*>(pVehicle);
}

// Converted from cdecl void CCarAI::MakeWayForCarWithSiren(CVehicle *pVehicle) 0x41D660
void CCarAI::MakeWayForCarWithSiren(CVehicle* pVehicle) {
	plugin::Call<0x41D660, CVehicle*>(pVehicle);
}

// Converted from cdecl void CCarAI::UpdateCarAI(CVehicle *pVehicle) 0x41DA30
void CCarAI::UpdateCarAI(CVehicle* pVehicle) {
	plugin::Call<0x41DA30, CVehicle*>(pVehicle);
}

// Converted from cdecl char CCarAI::FindPoliceCarMissionForWantedLevel(void) 0x41C9D0
char CCarAI::FindPoliceCarMissionForWantedLevel() {
	return plugin::CallAndReturn<char, 0x41C9D0>();
}

