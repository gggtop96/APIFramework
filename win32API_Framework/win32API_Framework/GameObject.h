#pragma once
#include "Include.h"



class GameObject
{
protected:
	Transform transform;
	float Speed;
	
public:
	virtual void Start()PURE;
	virtual void Start(Vector3 _position)PURE; 
	// _position 매개변수 생성 player, Bullet 헤더파일에도 생성
	
	virtual int Update()PURE;
	virtual void Render(HDC hdc)PURE;
	virtual void Destroy()PURE;

public:
	Transform GetTransform() { return transform; }
	//void SetTransform(Transform _transform) { transform = _transform; }

	Vector3 GetPosition() { return transform.position; }
	void SetPosition(Vector3 _position)
	{
		transform.position = _position;
	}

public:
	GameObject();
	virtual ~GameObject(); // 소멸자에 virtual을 붙여야 제대로 초기화 생성
};
