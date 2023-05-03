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
	float deltaX = c1x - c2x;
	float deltaY = c1y - c2y;

	float Distance = sqrt(deltaX * deltaX + deltaY * deltaY);

	if (Distance > (c1r + c2r))
		return FALSE;


	for(i = BulletList.begin(); i != End;) // 총알의 배열하고 끝좌표?
	{

		float fx = 총알의 x값 - 몬스터의 x값;
		float fy = 총알의 y값 - 몬스터의 y값;
		float distance = sqrt(fx * fx + fy * fy);

		if (distance <= 총알의 반지름 + 몬스터의 반지름)
		{
			i = Bullet.erase();
			End = Bullet.end();
		}
	}
	return TRUE;
}