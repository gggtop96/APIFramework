#pragma once
#include "include.h"

class GameObject;
class Stage
{
private:
	GameObject* m_pPlayer;

public:
	virtual void Start()PURE;
	virtual int Update()PURE;
	virtual void Render(HDC hdc)PURE;
	virtual void Destroy()PURE;

public:
	Stage();
	virtual ~Stage();
};

