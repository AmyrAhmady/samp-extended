/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "CShadowCamera.h"
#include "CSphere.h"

class CPhysical;

class PLUGIN_API CRealTimeShadow {
public:
    CPhysical *m_pOwner;
    bool m_bCreated;
    unsigned char m_nIntensity;
    CShadowCamera m_camera;
    bool m_bBlurred;
    CShadowCamera m_blurCamera;
    unsigned int m_nBlurPasses;
    bool m_bDrawMoreBlur;
    unsigned int m_nRwObjectType;
    RpLight *m_pLight;
    CSphere m_boundingSphere;
    CSphere m_baseSphere;

    CRealTimeShadow();
    ~CRealTimeShadow();

    struct RwFrame *SetLightProperties(float angle, float _unused_param, bool setLight);
    void Destroy();
    CShadowCamera *GetShadowCamera();
    struct RwTexture *GetShadowRwTexture();
    void DrawBorderAroundTexture(RwRGBA  const& color);
    // this creates all stuff for shadow processing (cameras, textures)
    bool Create(bool isBlurred, int blurPasses, bool drawMoreBlur);
    // this one registers shadow for entity
    bool SetupForThisEntity(class CPhysical *owner);
    // this updates texture and give it to us
    RwTexture *Update();
};

VALIDATE_SIZE(CRealTimeShadow, 0x4C);
