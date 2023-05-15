#pragma once
#include <Windows.h>

class Windows
{
public :
	int WindowsInitialize();

	int WindowProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam);


	
};
