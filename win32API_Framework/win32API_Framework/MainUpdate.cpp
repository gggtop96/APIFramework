#include "MainUpdate.h"


MainUpdate::MainUpdate() : m_pPlayer(NULL)
{

}

MainUpdate::~MainUpdate()
{
	Destroy();
}

void MainUpdate::Start()
{
	m_hdc = GetDC(g_hWnd);

	SceneManager
}

void MainUpdate::Update()
{
	if (m_pPlayer)
	m_pPlayer -> Update();

	if (m_pEnemy)
		m_pEnemy -> Update();
}

void MainUpdate::Render()
{

	Rectangle(m_hdc, 0, 0, WIDTH, HEIGHT);


}

void MainUpdate::Destroy()
{
	if(m_pPlayer)
	{
		delete m_pPlayer;
		m_pPlayer = NULL;
	}

	if (m_pEnemy)
	{
		delete m_pEnemy;
		m_pEnemy = NULL;
	}
}


