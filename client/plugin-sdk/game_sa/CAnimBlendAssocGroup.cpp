/*
Plugin-SDK (Grand Theft Auto San Andreas) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/

#include "CAnimBlendAssocGroup.h"
// Converted from thiscall void CAnimBlendAssocGroup::CAnimBlendAssocGroup(void) 0x4CDE70
CAnimBlendAssocGroup::CAnimBlendAssocGroup() {
	plugin::CallMethod<0x4CDE70, CAnimBlendAssocGroup *>(this);
}

// Converted from thiscall CAnimBlendAssociation* CAnimBlendAssocGroup::CopyAnimation(char const *AnimName) 0x4CE0B0
CAnimBlendAssociation* CAnimBlendAssocGroup::CopyAnimation(char const* AnimName) {
	return plugin::CallMethodAndReturn<CAnimBlendAssociation*, 0x4CE0B0, CAnimBlendAssocGroup *, char const*>(this, AnimName);
}

// Converted from thiscall CAnimBlendAssociation* CAnimBlendAssocGroup::CopyAnimation(uint ID) 0x4CE130
CAnimBlendAssociation* CAnimBlendAssocGroup::CopyAnimation(unsigned int ID) {
	return plugin::CallMethodAndReturn<CAnimBlendAssociation*, 0x4CE130, CAnimBlendAssocGroup *, unsigned int>(this, ID);
}

// Converted from thiscall void CAnimBlendAssocGroup::CreateAssociations(char const *szBlockName) 0x4CE220
void CAnimBlendAssocGroup::CreateAssociations(char const* szBlockName) {
	plugin::CallMethod<0x4CE220, CAnimBlendAssocGroup *, char const*>(this, szBlockName);
}

// Converted from thiscall void CAnimBlendAssocGroup::CreateAssociations(char const *AnimName,RpClump *pClump,char ** arg3,int NumAnimations) 0x4CE6E0
void CAnimBlendAssocGroup::CreateAssociations(char const* AnimName, RpClump* pClump, char** arg3, int NumAnimations) {
	plugin::CallMethod<0x4CE6E0, CAnimBlendAssocGroup *, char const*, RpClump*, char**, int>(this, AnimName, pClump, arg3, NumAnimations);
}

// Converted from thiscall void CAnimBlendAssocGroup::CreateAssociations(char const *AnimName, char const *arg2 , char const *arg3, int arg4) 0x4CE3B0
void CAnimBlendAssocGroup::CreateAssociations(char const* AnimName, char const* arg2, char const* arg3, int arg4) {
	plugin::CallMethod<0x4CE3B0, CAnimBlendAssocGroup *, char const*, char const*, char const*, int>(this, AnimName, arg2, arg3, arg4);
}

// Converted from thiscall void CAnimBlendAssocGroup::DestroyAssociations(void) 004CDFF0
void CAnimBlendAssocGroup::DestroyAssociations() {
	plugin::CallMethod<0x4CDFF0, CAnimBlendAssocGroup *>(this);
}

// Converted from thiscall CAnimBlendAssociation* CAnimBlendAssocGroup::GetAnimation(char const *AnimName) 0x4CE040
CAnimBlendAssociation* CAnimBlendAssocGroup::GetAnimation(char const* AnimName) {
	return plugin::CallMethodAndReturn<CAnimBlendAssociation*, 0x4CE040, CAnimBlendAssocGroup *, char const*>(this, AnimName);
}

// Converted from thiscall CAnimBlendAssociation* CAnimBlendAssocGroup::GetAnimation(uint ID) 0x4CE090
CAnimBlendAssociation* CAnimBlendAssocGroup::GetAnimation(unsigned int ID) {
	return plugin::CallMethodAndReturn<CAnimBlendAssociation*, 0x4CE090, CAnimBlendAssocGroup *, unsigned int>(this, ID);
}

// Converted from thiscall uint CAnimBlendAssocGroup::GetAnimationId(char const *AnimName) 0x4CE1B0
unsigned int CAnimBlendAssocGroup::GetAnimationId(char const* AnimName) {
	return plugin::CallMethodAndReturn<unsigned int, 0x4CE1B0, CAnimBlendAssocGroup *, char const*>(this, AnimName);
}

// Converted from thiscall void CAnimBlendAssocGroup::InitEmptyAssociations(RpClump *pClump) 0x4CDFB0
void CAnimBlendAssocGroup::InitEmptyAssociations(RpClump* pClump) {
	plugin::CallMethod<0x4CDFB0, CAnimBlendAssocGroup *, RpClump*>(this, pClump);
}

// Converted from thiscall void CAnimBlendAssocGroup::~CAnimBlendAssocGroup() 0x4CE1D0
CAnimBlendAssocGroup::~CAnimBlendAssocGroup() {
	plugin::CallMethod<0x4CE1D0, CAnimBlendAssocGroup *>(this);
}

