#include "MainUpdate.h"

MainUpdate::MainUpdate()
{

}

MainUpdate::~MainUpdate()
{

}

void MainUpdate::Start()
{
	m_hdc = GetDC(g_hWnd);

	rcPoint.left = 100;
	rcPoint.top = 100;

	rcPoint.right = 200;
	rcPoint.bottom = 200;

}

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void MainUpdate::Update()
{
	int x = 1;
	int y = 1;
	gotoxy(x, y);

	if (GetAsyncKeyState(VK_UP))
	{
		rcPoint.top;
	}

	if (GetAsyncKeyState(VK_DOWN))
	{
		rcPoint.bottom;
	}

	if (GetAsyncKeyState(VK_LEFT))
	{
		rcPoint.left += 1;
		//rcPoint.right += 1;
	}

	if (GetAsyncKeyState(VK_RIGHT))
	{
		rcPoint.right += 1;
		//rcPoint.left += 1;
	}

	if (GetAsyncKeyState(VK_SPACE))
	{
	
	}
}

void MainUpdate::Render()
{
	Rectangle(m_hdc, 0, 0, 1280, 720);

	Rectangle(m_hdc,
		rcPoint.left,
		rcPoint.top,
		rcPoint.right,
		rcPoint.bottom);

}

void MainUpdate::Destroy()
{

}


