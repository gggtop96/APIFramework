#pragma once
#include "include.h"

class Scene;
class SceneManager
{


private:
	static SceneManager* Instance;

public:
	static SceneManager* GetInstnace()
	{
		if (Instance == nullptr)
			Instance = new SceneManager;
		return Instance;
	}
private:
	Scene* SceneState;
public:
	void SetScene(SCENEID _State)
		void

private:
	SceneManager();
public:
	~SceneManager();
};

