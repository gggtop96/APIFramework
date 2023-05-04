#pragma once
#include "include.h"


class Menu
{
public:
	virtual void Start()override;
	virtual int Update()override;
	virtual void Render(HDC hdc)override;
	virtual void Destroy()override;

public:
	Menu();
	virtual ~Menu();

};

