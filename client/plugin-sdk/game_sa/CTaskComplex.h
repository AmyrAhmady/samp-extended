/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTask.h"

class PLUGIN_API CTaskComplex : public CTask {
protected:
    CTaskComplex(plugin::dummy_func_t a) : CTask(a) {}
public:
    CTaskComplex();
	CTask *m_pSubTask;

	// vtable
	virtual void SetSubTask(CTask *subTask);
	virtual CTask *CreateNextSubTask(class CPed *ped);//=0
	virtual CTask *CreateFirstSubTask(class CPed *ped);//=0
	virtual CTask *ControlSubTask(class CPed *ped);//=0
};

VALIDATE_SIZE(CTaskComplex, 0xC);