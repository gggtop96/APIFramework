#include "ObjectManager.h"
#include "GameObject.h"

ObjectManager* ObjectManager :: Instance = nullptr;


ObjectManager::ObjectManager()
{
}

ObjectManager::~ObjectManager()
{
}


void ObjectManager::AddObject(GameObject* _Object)
{
	map<string, list<GameObject*>>::iterator iter = ObjectList.find(_Object->GetKey());
	// iterator -> 반복자, map은 키값 + 메시지를 가지고 있는 구조인데
	// iterator는 앞의 키값을 가져와 언제든 참고 가능
	// 예시) 바탕화면 바로가기
	if (iter == ObjectList.end())
	{
		list < GameObject*> tempList;
		tempList.push_back(_Object);

		ObjectList.insert(make_pair(_Object->GetKey(), tempList));
	}
		
	else
		iter->second.push_back(_Object);

}


list<GameObject*>* ObjectManager::GetObjectList(string key)
{
	map<string, list<GameObject*>>::iterator iter = ObjectList.find(key);
	if (iter == ObjectList.end())
		return nullptr;
	else
	return & iter -> second;

}