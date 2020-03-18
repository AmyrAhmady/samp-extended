/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CStats.h"

tStatMessage *CStats::StatMessage = (tStatMessage*)0xB78200;
char *CStats::LastMissionPassedName = (char*)0xB78A00;
int *CStats::TimesMissionAttempted = (int*)0xB78CC8;
int *CStats::FavoriteRadioStationList = (int*)0xB78E58;
int *CStats::PedsKilledOfThisType = (int*)0xB78E90;
float *CStats::StatReactionValue = (float*)0xB78F10;
int *CStats::StatTypesInt = (int*)0xB79000;
float *CStats::StatTypesFloat = (float*)0xB79380;
short &CStats::m_ThisStatIsABarChart = *(short*)0xB794CC;
unsigned int &CStats::TotalNumStatMessages = *(unsigned int*)0xB794D0;
bool &CStats::bStatUpdateMessageDisplayed = *(bool*)0xB794D4;
unsigned int &CStats::m_SprintStaminaCounter = *(unsigned int*)0xB794D8;
unsigned int &CStats::m_CycleStaminaCounter = *(unsigned int*)0xB794DC;
unsigned int &CStats::m_CycleSkillCounter = *(unsigned int*)0xB794E0;
unsigned int &CStats::m_SwimStaminaCounter = *(unsigned int*)0xB794E4;
unsigned int &CStats::m_SwimUnderWaterCounter = *(unsigned int*)0xB794E8;
unsigned int &CStats::m_DrivingCounter = *(unsigned int*)0xB794EC;
unsigned int &CStats::m_FlyingCounter = *(unsigned int*)0xB794F0;
unsigned int &CStats::m_BoatCounter = *(unsigned int*)0xB794F4;
unsigned int &CStats::m_BikeCounter = *(unsigned int*)0xB794F8;
unsigned int &CStats::m_FatCounter = *(unsigned int*)0xB794FC;
unsigned int &CStats::m_RunningCounter = *(unsigned int*)0xB79500;
unsigned int &CStats::m_WeaponCounter = *(unsigned int*)0xB79504;
unsigned int &CStats::m_DeathCounter = *(unsigned int*)0xB79508;
unsigned int &CStats::m_MaxHealthCounter = *(unsigned int*)0xB7950C;
unsigned int &CStats::m_AddToHealthCounter = *(unsigned int*)0xB79510;
unsigned int &CStats::m_LastWeaponTypeFired = *(unsigned int*)0xB79514;

// Converted from cdecl char* CStats::GetStatID(ushort stat) 0x558DE0
char* CStats::GetStatID(unsigned short stat) {
    return plugin::CallAndReturn<char*, 0x558DE0, unsigned short>(stat);
}

// Converted from cdecl bool CStats::GetStatType(ushort stat) 0x558E30
bool CStats::GetStatType(unsigned short stat) {
    return plugin::CallAndReturn<bool, 0x558E30, unsigned short>(stat);
}

// Converted from cdecl float CStats::GetStatValue(ushort stat) 0x558E40
float CStats::GetStatValue(unsigned short stat) {
    return plugin::CallAndReturn<float, 0x558E40, unsigned short>(stat);
}

// Converted from cdecl char CStats::GetTimesMissionAttempted(uchar missionId) 0x558E70
char CStats::GetTimesMissionAttempted(unsigned char missionId) {
    return plugin::CallAndReturn<char, 0x558E70, unsigned char>(missionId);
}

// Converted from cdecl void CStats::RegisterMissionAttempted(uchar missionId) 0x558E80
void CStats::RegisterMissionAttempted(unsigned char missionId) {
    plugin::Call<0x558E80, unsigned char>(missionId);
}

// Converted from cdecl void CStats::RegisterMissionPassed(uchar missionId) 0x558EA0
void CStats::RegisterMissionPassed(unsigned char missionId) {
    plugin::Call<0x558EA0, unsigned char>(missionId);
}

// Converted from cdecl bool CStats::PopulateFavoriteRadioStationList(void) 0x558EC0
bool CStats::PopulateFavoriteRadioStationList() {
    return plugin::CallAndReturn<bool, 0x558EC0>();
}

// Converted from cdecl int* CStats::GetFullFavoriteRadioStationList(void) 0x558F90
int *CStats::GetFullFavoriteRadioStationList() {
    return plugin::CallAndReturn<int*, 0x558F90>();
}

// Converted from cdecl int CStats::FindMostFavoriteRadioStation(void) 0x558FA0
int CStats::FindMostFavoriteRadioStation() {
    return plugin::CallAndReturn<int, 0x558FA0>();
}

// Converted from cdecl int CStats::FindLeastFavoriteRadioStation(void) 0x559010
int CStats::FindLeastFavoriteRadioStation() {
    return plugin::CallAndReturn<int, 0x559010>();
}

// Converted from cdecl int CStats::FindCriminalRatingNumber(void) 0x559080
int CStats::FindCriminalRatingNumber() {
    return plugin::CallAndReturn<int, 0x559080>();
}

// Converted from cdecl float CStats::GetPercentageProgress(void) 0x5591E0
float CStats::GetPercentageProgress() {
    return plugin::CallAndReturn<float, 0x5591E0>();
}

// Converted from cdecl void CStats::BuildStatLine(char *line, void *pValue1, int metrics, void *pValue2, int type) 0x559230
void CStats::BuildStatLine(char* line, void* pValue1, int metrics, void* pValue2, int type) {
    plugin::Call<0x559230, char*, void*, int, void*, int>(line, pValue1, metrics, pValue2, type);
}

// Converted from cdecl int CStats::ConvertToMins(int value) 0x559540
int CStats::ConvertToMins(int value) {
    return plugin::CallAndReturn<int, 0x559540, int>(value);
}

// Converted from cdecl int CStats::ConvertToSecs(int value) 0x559560
int CStats::ConvertToSecs(int value) {
    return plugin::CallAndReturn<int, 0x559560, int>(value);
}

// Converted from cdecl bool CStats::SafeToShowThisStat(uchar stat) 0x559590
bool CStats::SafeToShowThisStat(unsigned char stat) {
    return plugin::CallAndReturn<bool, 0x559590, unsigned char>(stat);
}

// Converted from cdecl bool CStats::CheckForThreshold(float *pValue, float range) 0x5595F0
bool CStats::CheckForThreshold(float* pValue, float range) {
    return plugin::CallAndReturn<bool, 0x5595F0, float*, float>(pValue, range);
}

// Converted from cdecl bool CStats::IsStatCapped(ushort stat) 0x559630
bool CStats::IsStatCapped(unsigned short stat) {
    return plugin::CallAndReturn<bool, 0x559630, unsigned short>(stat);
}

// Converted from cdecl void CStats::ProcessReactionStatsOnDecrement(uchar stat) 0x559730
void CStats::ProcessReactionStatsOnDecrement(unsigned char stat) {
    plugin::Call<0x559730, unsigned char>(stat);
}

// Converted from cdecl void CStats::CheckForStatsMessage() 0x559760
void CStats::CheckForStatsMessage() {
    plugin::Call<0x559760>();
}

// Converted from cdecl void CStats::LoadStatUpdateConditions(void) 0x559860
void CStats::LoadStatUpdateConditions() {
    plugin::Call<0x559860>();
}

// Converted from cdecl void CStats::LoadActionReactionStats(void) 0x5599B0
void CStats::LoadActionReactionStats() {
    plugin::Call<0x5599B0>();
}

// Converted from cdecl int CStats::FindMaxNumberOfGroupMembers(void) 0x559A50
int CStats::FindMaxNumberOfGroupMembers() {
    return plugin::CallAndReturn<int, 0x559A50>();
}

// Converted from cdecl float CStats::GetFatAndMuscleModifier(eStatModAbilities statMod) 0x559AF0
float CStats::GetFatAndMuscleModifier(eStatModAbilities statMod) {
    return plugin::CallAndReturn<float, 0x559AF0, eStatModAbilities>(statMod);
}

// Converted from cdecl void CStats::DecrementStat(ushort stat, float value) 0x559FA0
void CStats::DecrementStat(unsigned short stat, float value) {
    plugin::Call<0x559FA0, unsigned short, float>(stat, value);
}

// Converted from cdecl void CStats::SetStatValue(ushort stat, float value) 0x55A070
void CStats::SetStatValue(unsigned short stat, float value) {
    plugin::Call<0x55A070, unsigned short, float>(stat, value);
}

// Converted from cdecl void CStats::RegisterFastestTime(int stat, int time) 0x55A0B0
void CStats::RegisterFastestTime(int stat, int time) {
    plugin::Call<0x55A0B0, int, int>(stat, time);
}

// Converted from cdecl void CStats::RegisterBestPosition(int stat, int position) 0x55A160
void CStats::RegisterBestPosition(int stat, int position) {
    plugin::Call<0x55A160, int, int>(stat, position);
}

// Converted from cdecl char* CStats::FindCriminalRatingString(void) 0x55A210
char* CStats::FindCriminalRatingString() {
    return plugin::CallAndReturn<char*, 0x55A210>();
}

// Converted from cdecl int CStats::ConstructStatLine(int, uchar) 0x55A780
int CStats::ConstructStatLine(int arg0, unsigned char arg1) {
    return plugin::CallAndReturn<int, 0x55A780, int, unsigned char>(arg0, arg1);
}

// Converted from cdecl void CStats::ProcessReactionStatsOnIncrement(uchar stat) 0x55B900
void CStats::ProcessReactionStatsOnIncrement(unsigned char stat) {
    plugin::Call<0x55B900, unsigned char>(stat);
}

// Converted from cdecl void CStats::DisplayScriptStatUpdateMessage(uchar state, uint stat, float value) 0x55B980
void CStats::DisplayScriptStatUpdateMessage(unsigned char state, unsigned int stat, float value) {
    plugin::Call<0x55B980, unsigned char, unsigned int, float>(state, stat, value);
}

// Converted from cdecl void CStats::UpdateRespectStat(uchar) 0x55BC50
void CStats::UpdateRespectStat(unsigned char arg0) {
    plugin::Call<0x55BC50, unsigned char>(arg0);
}

// Converted from cdecl void CStats::UpdateSexAppealStat(void) 0x55BF20
void CStats::UpdateSexAppealStat() {
    plugin::Call<0x55BF20>();
}

// Converted from cdecl void CStats::Init(void) 0x55C0C0
void CStats::Init() {
    plugin::Call<0x55C0C0>();
}

// Converted from cdecl void CStats::IncrementStat(ushort stat, float value) 0x55C180
void CStats::IncrementStat(unsigned short stat, float value) {
    plugin::Call<0x55C180, unsigned short, float>(stat, value);
}

// Converted from cdecl void CStats::SetNewRecordStat(ushort stat, float value) 0x55C410
void CStats::SetNewRecordStat(unsigned short stat, float value) {
    plugin::Call<0x55C410, unsigned short, float>(stat, value);
}

// Converted from cdecl void CStats::UpdateFatAndMuscleStats(uint value) 0x55C470
void CStats::UpdateFatAndMuscleStats(unsigned int value) {
    plugin::Call<0x55C470, unsigned int>(value);
}

// Converted from cdecl void CStats::UpdateStatsWhenSprinting(void) 0x55C660
void CStats::UpdateStatsWhenSprinting() {
    plugin::Call<0x55C660>();
}

// Converted from cdecl void CStats::UpdateStatsWhenRunning(void) 0x55C6F0
void CStats::UpdateStatsWhenRunning() {
    plugin::Call<0x55C6F0>();
}

// Converted from cdecl void CStats::UpdateStatsWhenCycling(bool, CBmx *bmx) 0x55C780
void CStats::UpdateStatsWhenCycling(bool arg0, CBmx* bmx) {
    plugin::Call<0x55C780, bool, CBmx*>(arg0, bmx);
}

// Converted from cdecl void CStats::UpdateStatsWhenSwimming(bool, bool) 0x55C990
void CStats::UpdateStatsWhenSwimming(bool arg0, bool arg1) {
    plugin::Call<0x55C990, bool, bool>(arg0, arg1);
}

// Converted from cdecl void CStats::UpdateStatsWhenDriving(CVehicle *vehicle) 0x55CAC0
void CStats::UpdateStatsWhenDriving(CVehicle* vehicle) {
    plugin::Call<0x55CAC0, CVehicle*>(vehicle);
}

// Converted from cdecl void CStats::UpdateStatsWhenFlying(CVehicle *vehicle) 0x55CC00
void CStats::UpdateStatsWhenFlying(CVehicle* vehicle) {
    plugin::Call<0x55CC00, CVehicle*>(vehicle);
}

// Converted from cdecl void CStats::UpdateStatsWhenOnMotorBike(CBike *bike) 0x55CD60
void CStats::UpdateStatsWhenOnMotorBike(CBike* bike) {
    plugin::Call<0x55CD60, CBike*>(bike);
}

// Converted from cdecl void CStats::UpdateStatsWhenWeaponHit(int weaponType) 0x55CEB0
void CStats::UpdateStatsWhenWeaponHit(int weaponType) {
    plugin::Call<0x55CEB0, int>(weaponType);
}

// Converted from cdecl void CStats::UpdateStatsWhenFighting(void) 0x55CFA0
void CStats::UpdateStatsWhenFighting() {
    plugin::Call<0x55CFA0>();
}

// Converted from cdecl void CStats::UpdateStatsOnRespawn(void) 0x55CFC0
void CStats::UpdateStatsOnRespawn() {
    plugin::Call<0x55CFC0>();
}

// Converted from cdecl void CStats::UpdateStatsAddToHealth(uint addToHealth) 0x55D030
void CStats::UpdateStatsAddToHealth(unsigned int addToHealth) {
    plugin::Call<0x55D030, unsigned int>(addToHealth);
}

// Converted from cdecl void CStats::ModifyStat(ushort stat, float value) 0x55D090
void CStats::ModifyStat(unsigned short stat, float value) {
    plugin::Call<0x55D090, unsigned short, float>(stat, value);
}

// Converted from cdecl bool CStats::Save(void) 0x5D3B40
bool CStats::Save() {
    return plugin::CallAndReturn<bool, 0x5D3B40>();
}

// Converted from cdecl bool CStats::Load(void) 0x5D3BF0
bool CStats::Load() {
    return plugin::CallAndReturn<bool, 0x5D3BF0>();
}