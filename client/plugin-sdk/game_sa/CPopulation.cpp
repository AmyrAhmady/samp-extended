/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPopulation.h"

float                     &CPopulation::PedDensityMultiplier           = *(float                   *)0x8D2530;
int                       &CPopulation::m_AllRandomPedsThisType        = *(int                     *)0x8D2534;
unsigned int              &CPopulation::MaxNumberOfPedsInUse           = *(unsigned int            *)0x8D2538;
unsigned int              &CPopulation::NumberOfPedsInUseInterior      = *(unsigned int            *)0x8D253C;
tPedGroupTranslationData  *CPopulation::m_TranslationArray             =  (tPedGroupTranslationData*)0x8D2540;
CLoadedCarGroup           &CPopulation::m_LoadedBoats                  = *(CLoadedCarGroup         *)0xC0E998;
CLoadedCarGroup           &CPopulation::m_InAppropriateLoadedCars      = *(CLoadedCarGroup         *)0xC0E9C8;
CLoadedCarGroup           &CPopulation::m_AppropriateLoadedCars        = *(CLoadedCarGroup         *)0xC0E9F8;
CLoadedCarGroup           *CPopulation::m_LoadedGangCars               =  (CLoadedCarGroup         *)0xC0EA28;
bool                      &CPopulation::bZoneChangeHasHappened         = *(bool                    *)0xC0EC22;
unsigned char             &CPopulation::m_CountDownToPedsAtStart       = *(unsigned char           *)0xC0EC23;
unsigned int              &CPopulation::ms_nTotalMissionPeds           = *(unsigned int            *)0xC0EC24;
unsigned int              &CPopulation::ms_nTotalPeds                  = *(unsigned int            *)0xC0EC28;
unsigned int              &CPopulation::ms_nTotalGangPeds              = *(unsigned int            *)0xC0EC2C;
unsigned int              &CPopulation::ms_nTotalCivPeds               = *(unsigned int            *)0xC0EC30;
unsigned int              &CPopulation::ms_nTotalCarPassengerPeds      = *(unsigned int            *)0xC0EC34;
unsigned int              &CPopulation::ms_nNumDealers                 = *(unsigned int            *)0xC0EC38;
unsigned int              *CPopulation::ms_nNumGang                    =  (unsigned int            *)0xC0EC3C;
unsigned int              &CPopulation::ms_nNumEmergency               = *(unsigned int            *)0xC0EC64;
unsigned int              &CPopulation::ms_nNumCop                     = *(unsigned int            *)0xC0EC68;
unsigned int              &CPopulation::ms_nNumCivFemale               = *(unsigned int            *)0xC0EC6C;
unsigned int              &CPopulation::ms_nNumCivMale                 = *(unsigned int            *)0xC0EC70;
unsigned short            *CPopulation::m_nNumCarsInGroup              =  (unsigned short          *)0xC0EC78;
unsigned short            *CPopulation::m_nNumPedsInGroup              =  (unsigned short          *)0xC0ECC0;
short                     (*CPopulation::m_CarGroups)[23]              =  (short             (*)[23])0xC0ED38;
short                     (*CPopulation::m_PedGroups)[21]              =  (short             (*)[21])0xC0F358;
bool                      &CPopulation::m_bDontCreateRandomGangMembers = *(bool                    *)0xC0FCB2;
bool                      &CPopulation::m_bOnlyCreateRandomGangMembers = *(bool                    *)0xC0FCB3;
bool                      &CPopulation::m_bDontCreateRandomCops        = *(bool                    *)0xC0FCB4;
bool                      &CPopulation::m_bMoreCarsAndFewerPeds        = *(bool                    *)0xC0FCB5;
bool                      &CPopulation::bInPoliceStation               = *(bool                    *)0xC0FCB6;
unsigned int              &CPopulation::NumMiamiViceCops               = *(unsigned int            *)0xC0FCB8;
unsigned int              &CPopulation::CurrentWorldZone               = *(unsigned int            *)0xC0FCBC;

// Converted from cdecl int CPopulation::FindPedRaceFromName(char *modelName) 0x5B6D40
int CPopulation::FindPedRaceFromName(char* modelName) {
    return ((int(__cdecl *)(char*))0x5B6D40)(modelName);
}

// Converted from cdecl void CPopulation::LoadPedGroups(void) 0x5BCFE0
void CPopulation::LoadPedGroups() {
    ((void(__cdecl *)())0x5BCFE0)();
}

// Converted from cdecl void CPopulation::LoadCarGroups(void) 0x5BD1A0
void CPopulation::LoadCarGroups() {
    ((void(__cdecl *)())0x5BD1A0)();
}

// Converted from cdecl void CPopulation::Initialise(void) 0x610E10
void CPopulation::Initialise() {
    ((void(__cdecl *)())0x610E10)();
}

// Converted from cdecl void CPopulation::Shutdown(void) 0x610EC0
void CPopulation::Shutdown() {
    ((void(__cdecl *)())0x610EC0)();
}

// Converted from cdecl float CPopulation::FindDummyDistForModel(int modelIndex) 0x610ED0
float CPopulation::FindDummyDistForModel(int modelIndex) {
    return ((float(__cdecl *)(int))0x610ED0)(modelIndex);
}

// Converted from cdecl float CPopulation::FindPedDensityMultiplierCullZone(void) 0x610F00
float CPopulation::FindPedDensityMultiplierCullZone() {
    return ((float(__cdecl *)())0x610F00)();
}

// Converted from cdecl void CPopulation::RemovePed(CPed *ped) 0x610F20
void CPopulation::RemovePed(CPed* ped) {
    ((void(__cdecl *)(CPed*))0x610F20)(ped);
}

// Converted from cdecl int CPopulation::ChoosePolicePedOccupation(void) 0x610F40
int CPopulation::ChoosePolicePedOccupation() {
    return ((int(__cdecl *)())0x610F40)();
}

// Converted from cdecl bool CPopulation::ArePedStatsCompatible(int statType1,int statType2) 0x610F50
bool CPopulation::ArePedStatsCompatible(int statType1, int statType2) {
    return ((bool(__cdecl *)(int, int))0x610F50)(statType1, statType2);
}

// Converted from cdecl bool CPopulation::PedMICanBeCreatedAtAttractor(int modelIndex) 0x6110C0
bool CPopulation::PedMICanBeCreatedAtAttractor(int modelIndex) {
    return ((bool(__cdecl *)(int))0x6110C0)(modelIndex);
}

// Converted from cdecl bool CPopulation::PedMICanBeCreatedAtThisAttractor(int modelIndex,char *attrName) 0x6110E0
bool CPopulation::PedMICanBeCreatedAtThisAttractor(int modelIndex, char* attrName) {
    return ((bool(__cdecl *)(int, char*))0x6110E0)(modelIndex, attrName);
}

// Converted from cdecl bool CPopulation::PedMICanBeCreatedInInterior(int modelIndex) 0x611450
bool CPopulation::PedMICanBeCreatedInInterior(int modelIndex) {
    return ((bool(__cdecl *)(int))0x611450)(modelIndex);
}

// Converted from cdecl bool CPopulation::IsMale(int modelIndex) 0x611470
bool CPopulation::IsMale(int modelIndex) {
    return ((bool(__cdecl *)(int))0x611470)(modelIndex);
}

// Converted from cdecl bool CPopulation::IsFemale(int modelIndex) 0x611490
bool CPopulation::IsFemale(int modelIndex) {
    return ((bool(__cdecl *)(int))0x611490)(modelIndex);
}

// Converted from cdecl bool CPopulation::IsSecurityGuard(ePedType pedType) 0x6114B0
bool CPopulation::IsSecurityGuard(ePedType pedType) {
    return ((bool(__cdecl *)(ePedType))0x6114B0)(pedType);
}

// Converted from cdecl bool CPopulation::IsSkateable(CVector const&point) 0x6114C0
bool CPopulation::IsSkateable(CVector const& point) {
    return ((bool(__cdecl *)(CVector const&))0x6114C0)(point);
}

// Converted from cdecl void CPopulation::ChooseGangOccupation(int) 0x611550
void CPopulation::ChooseGangOccupation(int arg0) {
    ((void(__cdecl *)(int))0x611550)(arg0);
}

// Converted from cdecl CPed* CPopulation::AddExistingPedInCar(CPed *ped,CVehicle *vehicle) 0x611560
CPed* CPopulation::AddExistingPedInCar(CPed* ped, CVehicle* vehicle) {
    return ((CPed*(__cdecl *)(CPed*, CVehicle*))0x611560)(ped, vehicle);
}

// Converted from cdecl void CPopulation::UpdatePedCount(CPed *ped,uchar updateState) 0x611570
void CPopulation::UpdatePedCount(CPed* ped, unsigned char updateState) {
    ((void(__cdecl *)(CPed*, unsigned char))0x611570)(ped, updateState);
}

// Converted from cdecl void CPopulation::MoveCarsAndPedsOutOfAbandonedZones(void) 0x6116A0
void CPopulation::MoveCarsAndPedsOutOfAbandonedZones() {
    ((void(__cdecl *)())0x6116A0)();
}

// Converted from cdecl void CPopulation::DealWithZoneChange(eLevelName,eLevelName,bool) 0x6116B0
void CPopulation::DealWithZoneChange(eLevelName arg0, eLevelName arg1, bool arg2) {
    ((void(__cdecl *)(eLevelName, eLevelName, bool))0x6116B0)(arg0, arg1, arg2);
}

// Converted from cdecl float CPopulation::PedCreationDistMultiplier(void) 0x6116C0
float CPopulation::PedCreationDistMultiplier() {
    return ((float(__cdecl *)())0x6116C0)();
}

// Converted from cdecl bool CPopulation::IsSunbather(int modelIndex) 0x611760
bool CPopulation::IsSunbather(int modelIndex) {
    return ((bool(__cdecl *)(int))0x611760)(modelIndex);
}

// Converted from cdecl bool CPopulation::CanSolicitPlayerOnFoot(int modelIndex) 0x611780
bool CPopulation::CanSolicitPlayerOnFoot(int modelIndex) {
    return ((bool(__cdecl *)(int))0x611780)(modelIndex);
}

// Converted from cdecl bool CPopulation::CanSolicitPlayerInCar(int modelIndex) 0x611790
bool CPopulation::CanSolicitPlayerInCar(int modelIndex) {
    return ((bool(__cdecl *)(int))0x611790)(modelIndex);
}

// Converted from cdecl bool CPopulation::CanJeerAtStripper(int modelIndex) 0x6117B0
bool CPopulation::CanJeerAtStripper(int modelIndex) {
    return ((bool(__cdecl *)(int))0x6117B0)(modelIndex);
}

// Converted from cdecl void CPopulation::PlaceGangMembers(ePedType pedType,int,CVector const&posn) 0x6117D0
void CPopulation::PlaceGangMembers(ePedType pedType, int arg1, CVector const& posn) {
    ((void(__cdecl *)(ePedType, int, CVector const&))0x6117D0)(pedType, arg1, posn);
}

// Converted from cdecl void CPopulation::LoadSpecificDriverModelsForCar(int carModelIndex) 0x6117F0
void CPopulation::LoadSpecificDriverModelsForCar(int carModelIndex) {
    ((void(__cdecl *)(int))0x6117F0)(carModelIndex);
}

// Converted from cdecl int CPopulation::FindSpecificDriverModelForCar_ToUse(int carModelIndex) 0x611900
int CPopulation::FindSpecificDriverModelForCar_ToUse(int carModelIndex) {
    return ((int(__cdecl *)(int))0x611900)(carModelIndex);
}

// Converted from cdecl void CPopulation::RemoveSpecificDriverModelsForCar(int carModelIndex) 0x6119D0
void CPopulation::RemoveSpecificDriverModelsForCar(int carModelIndex) {
    ((void(__cdecl *)(int))0x6119D0)(carModelIndex);
}

// Converted from cdecl bool CPopulation::IsCorrectTimeOfDayForEffect(C2dEffect const*effect) 0x611B20
bool CPopulation::IsCorrectTimeOfDayForEffect(C2dEffect const* effect) {
    return ((bool(__cdecl *)(C2dEffect const*))0x611B20)(effect);
}

// Converted from cdecl float CPopulation::FindCarMultiplierMotorway(void) 0x611B60
float CPopulation::FindCarMultiplierMotorway() {
    return ((float(__cdecl *)())0x611B60)();
}

// Converted from cdecl float CPopulation::FindPedMultiplierMotorway(void) 0x611B80
float CPopulation::FindPedMultiplierMotorway() {
    return ((float(__cdecl *)())0x611B80)();
}

// Converted from cdecl void CPopulation::ManagePed(CPed *ped,CVector const&playerPosn) 0x611FC0
void CPopulation::ManagePed(CPed* ped, CVector const& playerPosn) {
    ((void(__cdecl *)(CPed*, CVector const&))0x611FC0)(ped, playerPosn);
}

// Converted from cdecl int CPopulation::FindNumberOfPedsWeCanPlaceOnBenches(void) 0x612240
int CPopulation::FindNumberOfPedsWeCanPlaceOnBenches() {
    return ((int(__cdecl *)())0x612240)();
}

// Converted from cdecl void CPopulation::RemoveAllRandomPeds(void) 0x6122C0
void CPopulation::RemoveAllRandomPeds() {
    ((void(__cdecl *)())0x6122C0)();
}

// Converted from cdecl bool CPopulation::TestRoomForDummyObject(CObject *object) 0x612320
bool CPopulation::TestRoomForDummyObject(CObject* object) {
    return ((bool(__cdecl *)(CObject*))0x612320)(object);
}

// Converted from cdecl bool CPopulation::TestSafeForRealObject(CDummyObject *dummyObject) 0x6123A0
bool CPopulation::TestSafeForRealObject(CDummyObject* dummyObject) {
    return ((bool(__cdecl *)(CDummyObject*))0x6123A0)(dummyObject);
}

// Converted from cdecl CPed* CPopulation::AddPed(ePedType pedType,uint modelIndex,CVector const&posn,bool makeWander) 0x612710
CPed* CPopulation::AddPed(ePedType pedType, unsigned int modelIndex, CVector const& posn, bool makeWander) {
    return ((CPed* (__cdecl *)(ePedType, unsigned int, CVector const&, bool))0x612710)(pedType, modelIndex, posn, makeWander);
}

// Converted from cdecl CPed* CPopulation::AddDeadPedInFrontOfCar(CVector const&posn,CVehicle *vehicle) 0x612CD0
CPed* CPopulation::AddDeadPedInFrontOfCar(CVector const& posn, CVehicle* vehicle) {
    return ((CPed* (__cdecl *)(CVector const&, CVehicle*))0x612CD0)(posn, vehicle);
}

// Converted from cdecl int CPopulation::ChooseCivilianOccupation(bool male,bool female,int animType,int ignoreModelIndex,int statType,bool,bool,bool checkAttractor,char *attrName) 0x612F90
int CPopulation::ChooseCivilianOccupation(bool male, bool female, int animType, int ignoreModelIndex, int statType, bool arg5, bool arg6, bool checkAttractor, char* attrName) {
    return ((int(__cdecl *)(bool, bool, int, int, int, bool, bool, bool, char*))0x612F90)(male, female, animType, ignoreModelIndex, statType, arg5, arg6, checkAttractor, attrName);
}

// Converted from cdecl void CPopulation::ChooseCivilianCoupleOccupations(int &model1,int &model2) 0x613180
void CPopulation::ChooseCivilianCoupleOccupations(int& model1, int& model2) {
    ((void(__cdecl *)(int&, int&))0x613180)(model1, model2);
}

// Converted from cdecl int CPopulation::ChooseCivilianOccupationForVehicle(bool male,CVehicle *vehicle) 0x613260
int CPopulation::ChooseCivilianOccupationForVehicle(bool male, CVehicle* vehicle) {
    return ((int(__cdecl *)(bool, CVehicle*))0x613260)(male, vehicle);
}

// Converted from cdecl void CPopulation::CreateWaitingCoppers(CVector posn,float) 0x6133F0
void CPopulation::CreateWaitingCoppers(CVector posn, float arg1) {
    ((void(__cdecl *)(CVector, float))0x6133F0)(posn, arg1);
}

// Converted from cdecl CPed* CPopulation::AddPedInCar(CVehicle *vehicle,bool driver,int gangPedType,int seatNumber,bool male,bool criminal) 0x613A00
CPed* CPopulation::AddPedInCar(CVehicle* vehicle, bool driver, int gangPedType, int seatNumber, bool male, bool criminal) {
    return ((CPed* (__cdecl *)(CVehicle*, bool, int, int, bool, bool))0x613A00)(vehicle, driver, gangPedType, seatNumber, male, criminal);
}

// Converted from cdecl void CPopulation::PlaceMallPedsAsStationaryGroup(CVector const&posn) 0x613CD0
void CPopulation::PlaceMallPedsAsStationaryGroup(CVector const& posn) {
    ((void(__cdecl *)(CVector const&))0x613CD0)(posn);
}

// Converted from cdecl void CPopulation::PlaceCouple(ePedType pedType1,int modelIndex1,ePedType pedType2,int modelIndex2,CVector posn) 0x613D60
void CPopulation::PlaceCouple(ePedType pedType1, int modelIndex1, ePedType pedType2, int modelIndex2, CVector posn) {
    ((void(__cdecl *)(ePedType, int, ePedType, int, CVector))0x613D60)(pedType1, modelIndex1, pedType2, modelIndex2, posn);
}

// Converted from cdecl bool CPopulation::AddPedAtAttractor(int modelIndex,C2dEffect *attractor,CVector posn,CEntity *entity,int decisionMakerType) 0x614210
bool CPopulation::AddPedAtAttractor(int modelIndex, C2dEffect* attractor, CVector posn, CEntity* entity, int decisionMakerType) {
    return ((bool(__cdecl *)(int, C2dEffect*, CVector, CEntity*, int))0x614210)(modelIndex, attractor, posn, entity, decisionMakerType);
}

// Converted from cdecl float CPopulation::FindDistanceToNearestPedOfType(ePedType pedType,CVector posn) 0x6143E0
float CPopulation::FindDistanceToNearestPedOfType(ePedType pedType, CVector posn) {
    return ((float(__cdecl *)(ePedType, CVector))0x6143E0)(pedType, posn);
}

// Converted from cdecl int CPopulation::PickGangCar(int gangId) 0x614490
int CPopulation::PickGangCar(int gangId) {
    return ((int(__cdecl *)(int))0x614490)(gangId);
}

// Converted from cdecl int CPopulation::PickRiotRoadBlockCar(void) 0x6144B0
int CPopulation::PickRiotRoadBlockCar() {
    return ((int(__cdecl *)())0x6144B0)();
}

// Converted from cdecl void CPopulation::ConvertToRealObject(CDummyObject *dummyObject) 0x614580
void CPopulation::ConvertToRealObject(CDummyObject* dummyObject) {
    ((void(__cdecl *)(CDummyObject*))0x614580)(dummyObject);
}

// Converted from cdecl void CPopulation::ConvertToDummyObject(CObject *object) 0x614670
void CPopulation::ConvertToDummyObject(CObject* object) {
    ((void(__cdecl *)(CObject*))0x614670)(object);
}

// Converted from cdecl bool CPopulation::AddToPopulation(float,float,float,float) 0x614720
bool CPopulation::AddToPopulation(float arg0, float arg1, float arg2, float arg3) {
    return ((bool(__cdecl *)(float, float, float, float))0x614720)(arg0, arg1, arg2, arg3);
}

// Converted from cdecl int CPopulation::GeneratePedsAtAttractors(CVector posn,float,float,float,float,int decisionMakerType,int numPeds) 0x615970
int CPopulation::GeneratePedsAtAttractors(CVector posn, float arg1, float arg2, float arg3, float arg4, int decisionMakerType, int numPeds) {
    return ((int(__cdecl *)(CVector, float, float, float, float, int, int))0x615970)(posn, arg1, arg2, arg3, arg4, decisionMakerType, numPeds);
}

// Converted from cdecl void CPopulation::GeneratePedsAtStartOfGame(void) 0x615C90
void CPopulation::GeneratePedsAtStartOfGame() {
    ((void(__cdecl *)())0x615C90)();
}

// Converted from cdecl void CPopulation::ManageObject(CObject *object,CVector const&posn) 0x615DC0
void CPopulation::ManageObject(CObject* object, CVector const& posn) {
    ((void(__cdecl *)(CObject*, CVector const&))0x615DC0)(object, posn);
}

// Converted from cdecl void CPopulation::ManageDummy(CDummy *dummy,CVector const&posn) 0x616000
void CPopulation::ManageDummy(CDummy* dummy, CVector const& posn) {
    ((void(__cdecl *)(CDummy*, CVector const&))0x616000)(dummy, posn);
}

// Converted from cdecl void CPopulation::ManageAllPopulation(void) 0x6160A0
void CPopulation::ManageAllPopulation() {
    ((void(__cdecl *)())0x6160A0)();
}

// Converted from cdecl void CPopulation::ManagePopulation(void) 0x616190
void CPopulation::ManagePopulation() {
    ((void(__cdecl *)())0x616190)();
}

// Converted from cdecl void CPopulation::RemovePedsIfThePoolGetsFull(void) 0x616300
void CPopulation::RemovePedsIfThePoolGetsFull() {
    ((void(__cdecl *)())0x616300)();
}

// Converted from cdecl void CPopulation::ConvertAllObjectsToDummyObjects(void) 0x616420
void CPopulation::ConvertAllObjectsToDummyObjects() {
    ((void(__cdecl *)())0x616420)();
}

// Converted from cdecl void CPopulation::PopulateInterior(int numPeds,CVector posn) 0x616470
void CPopulation::PopulateInterior(int numPeds, CVector posn) {
    ((void(__cdecl *)(int, CVector))0x616470)(numPeds, posn);
}

// Converted from cdecl void CPopulation::Update(bool generatePeds) 0x616650
void CPopulation::Update(bool generatePeds) {
    ((void(__cdecl *)(bool))0x616650)(generatePeds);
}