/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "FxManager_c.h"

enum FxQuality_e : unsigned int
{
	FXQUALITY_LOW,
	FXQUALITY_MEDIUM,
	FXQUALITY_HIGH,
	FXQUALITY_VERY_HIGH
};

class CVehicle;

class Fx_c {
public:
	FxSystem_c *m_pPrtBlood;
	FxSystem_c *m_pPrtBoatsplash;
	FxSystem_c *m_pPrtBubble;
	FxSystem_c *m_pPrtCardebris;
	FxSystem_c *m_pPrtCollisionsmoke;
	FxSystem_c *m_pPrtGunshell;
	FxSystem_c *m_pPrtSand;
	FxSystem_c *m_pPrtSand2;
	FxSystem_c *m_pPrtSmoke_huge;
	FxSystem_c *m_pPrtSmokeII3expand;
	FxSystem_c *m_pPrtSpark;
	FxSystem_c *m_pPrtSpark2;
	FxSystem_c *m_pPrtSplash;
	FxSystem_c *m_pPrtWake;
	FxSystem_c *m_pPrtWatersplash;
	FxSystem_c *m_pPrtWheeldirt;
	FxSystem_c *m_pPrtGlass;
	TList_c<ListItem_c> m_entityFxList;
	unsigned int m_nBloodPoolsCount;
	FxQuality_e m_fxQuality;
	unsigned int m_nVerticesCount2;
	unsigned int m_nVerticesCount;
	unsigned int m_nTransformRenderFlags;
	RwRaster *m_pRasterToRender;
	RwMatrix *m_pTransformLTM;
	void *m_pVerts;

    Fx_c();
    ~Fx_c();
    void Update(RwCamera* camera, float timeDelta);
    void Render(RwCamera* camera, unsigned char arg1);
    void InitStaticSystems();
    void ExitStaticSystems();
    void CreateMatFromVec(RwMatrix* out, CVector* origin, CVector* direction);
    void SetFxQuality(FxQuality_e quality);
    FxQuality_e GetFxQuality();
    // dummy function
    void InitEntitySystems();
    bool Init();
    void Reset();
    void AddBlood(CVector& origin, CVector& direction, int amount, float arg3);
    void AddWood(CVector& origin, CVector& direction, int amount, float arg3);
    void AddSparks(CVector& origin, CVector& direction, float force, int amount, CVector across, unsigned char sparksType, float spread, float life);
    void AddTyreBurst(CVector& position, CVector& velocity);
    void AddBulletImpact(CVector& position, CVector& direction, int bulletFxType, int amount, float arg4);
    void AddPunchImpact(CVector& position, CVector& velocity, int arg2);
    void AddDebris(CVector& position, RwRGBA& color, float scale, int amount);
    void AddGlass(CVector& position, RwRGBA& color, float scale, int amount);
    void AddWheelSpray(CVehicle* vehicle, CVector position, unsigned char arg2, unsigned char arg3, float arg4);
    void AddWheelGrass(CVehicle* vehicle, CVector position, unsigned char arg2, float arg3);
    void AddWheelGravel(CVehicle* vehicle, CVector position, unsigned char arg2, float arg3);
    void AddWheelMud(CVehicle* vehicle, CVector position, unsigned char arg2, float arg3);
    void AddWheelSand(CVehicle* vehicle, CVector position, unsigned char arg2, float arg3);
    void AddWheelDust(CVehicle* vehicle, CVector position, unsigned char arg2, float arg3);
    void TriggerWaterHydrant(CVector& position);
    void TriggerGunshot(CEntity* entity, CVector& origin, CVector& target, bool doGunflash);
    void TriggerTankFire(CVector& origin, CVector& target);
    void TriggerWaterSplash(CVector& position);
    void TriggerBulletSplash(CVector& position);
    void TriggerFootSplash(CVector& position);
    void CreateEntityFx(CEntity* entity, char* fxName, RwV3d* position, RwMatrix* transform);
    void DestroyEntityFx(CEntity* entity);
    void ExitEntitySystems();
    void Exit();
};

VALIDATE_SIZE(Fx_c, 0x70);

void RenderBegin(RwRaster* raster, RwMatrix* transform, unsigned int transformRenderFlags);
void RenderAddTri(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float u1, float v1, float u2, float v2, float u3, float v3, int r1, int g1, int b1, int a1, int r2, int g2, int b2, int a2, int r3, int g3, int b3, int a3);
void RenderEnd();
void RotateVecIntoVec(RwV3d* vectorsOut, RwV3d* vectorsIn, RwV3d* dir);
void RotateVecAboutVec(RwV3d* out, RwV3d* arg1, RwV3d* arg2, float angle);

extern PLUGIN_API Fx_c &g_fx;
