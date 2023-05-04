#pragma once
#include "Include.h"
#include "GameObject.h"

class CollisionManager
{
public:
	// ��(��) �浹
	/*
	//temp = player, dest = �浹ü
	static bool Collision(GameObject* temp, GameObject* dest) 
	{
		// x���� y���� ���Ѵ�.
		float fx = dest->GetPosition().x - temp->GetPosition().x;
		float fy = dest->GetPosition().y - temp->GetPosition().y;

		// ������ ���� �������� ���� ����
		float sum = dest->GetScale().x + temp->GetScale().x;

		// �Ÿ��� ����
		float distance = sqrt((fx * fx) + (fy * fy));

		// �Ÿ��� �������� �պ��� �۴ٸ� �浹
		if (distance < sum)
			return true;

		return false;
	}
	*/

	// Rect �浹
	//temp = player, dest = �浹ü
	static bool Collision(GameObject* temp, GameObject* dest)
	{
		// ������ Rect ��, ��, ��, �� ��ǥ�� ���Ͽ� �浹�� Ȯ��
		if (temp -> GetPosition().x + (temp -> GetScale().x * 0.5f) > dest -> GetPosition().x - (dest->GetScale().x * 0.5f) &&
			dest -> GetPosition().x + (dest -> GetScale().x * 0.5f) > temp -> GetPosition().x - (temp->GetScale().x * 0.5f) &&
			temp -> GetPosition().y + (temp -> GetScale().y * 0.5f) > dest -> GetPosition().y - (dest->GetScale().y * 0.5f) &&
			dest -> GetPosition().y + (dest -> GetScale().y * 0.5f) > temp -> GetPosition().y - (temp->GetScale().y * 0.5f))
			return false;
	}
};