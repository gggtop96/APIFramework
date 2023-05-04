#pragma once
#include "include.h"

class Logo
{
public:
	virtual void Start()PURE;
	virtual int Update()PURE;
	virtual void Render(HDC hdc)PURE;
	virtual void Destroy()PURE;

public:
	Logo();
	virtual ~Logo();
};
