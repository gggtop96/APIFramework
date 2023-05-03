#include "Enemy.h"


Enemy::Enemy()
{
}

Enemy::~Enemy()
{

}

void Enemy::Start()
{
	srand((unsigned int)GetTickCount64());
	transform.position = Vector3(WIDTH + 75, float(rand()%(HEIGHT - 150) + 75), 0.0f);
	transform.rotation = Vector3(0.0f, 0.0f, 0.0f);
	transform.scale = Vector3(150.0f, 150.0f, 0.0f);

	Speed = 0.5f;
}


int Enemy::Update()
{
	transform.position.x -= Speed;

	if (transform.position.x < 0)
		return 2;

	return 0;
}

void Enemy::Render(HDC hdc)
{
	Ellipse(hdc,
		int(transform.position.x - (transform.scale.x * 0.5f)),
		int(transform.position.y - (transform.scale.y * 0.5f)),
		int(transform.position.x + (transform.scale.x * 0.5f)),
		int(transform.position.y + (transform.scale.y * 0.5f)));

}

void Enemy::Destroy()
{

}

BOOL Iscollision(float c1x, float c1y, float c1r, float c2x, float c2y, float c2r)
{
	float deltaX = c1x = c2x;
	float deltaY = c1y - c2y;

	float length = sqrt(deltaX * deltaX + deltaY * deltaY);

	if (length > (c1r + c2r))
		return FALSE;

	return TRUE;
}