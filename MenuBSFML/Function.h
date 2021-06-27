#pragma once
#include <Windows.h>
#include <string>


HWND GetMyHWND(const char* WindowName)//LPSTR
{
	char CurrentName[20];
	HWND hWnd = GetWindow(GetDesktopWindow(), GW_CHILD);
	while (hWnd)
	{
		hWnd = GetWindow(hWnd, GW_HWNDNEXT);
		GetWindowTextA(hWnd, CurrentName, 20);
		if (!strcmp(CurrentName, WindowName))
		{
			//printf("My hWnd %p", hWnd);
			return hWnd;
		}
	}
	return 0;
}