#pragma once
#include "GameObject.h"

class Bullet : public GameObject
{
public:
	virtual void Start()override;
	virtual void Start(Vector3 _position)override; //GameObject 헤더에서 만든 가상함수를 override
	virtual int Update()override;
	virtual void Render(HDC hdc)override;
	virtual void Destroy()override;

public:
	Bullet();
	virtual ~Bullet();
};