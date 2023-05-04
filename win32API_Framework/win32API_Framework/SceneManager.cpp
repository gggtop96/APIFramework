#include "SceneManager.h"

#include "Logo.h"
#include "Menu.h"
#include "Stage.h"

#include "Player.h"
#include "Enemy.h"
#include "ObjectManager.h"

SceneManager::SceneManager::Instance = nullptr;

SceneManager::SceneManager()
{

}

SceneManager::~SceneManager()
{

}

void SceneManager::SetScene(SCENEID _State)
{
	if (SceneState != nullptr)
	{
		delete SceneState;
		SceneState = nullptr;
	}

	Switch(_State)
	{
		case LOGO:
			SceneState = new Logo;
			break;

		case MENU:
			SceneState = new Menu;
			break;

		case STAGE:
			SceneState = new Stage;
			break;
	}
	SceneState->Start();
}

void SceneManager::Update()
{
	SceneState -> Update();
}

void SceneManager::Render(HDC hdc)
{
	SceneState -> Render(hdc);
}

void SceneManager::Destroy()
{
	delete SceneState
}
