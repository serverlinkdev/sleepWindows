// sleepWindows.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <PowrProf.h>

#pragma comment(lib, "PowrProf.lib")

int main(int argc, _TCHAR* argv[])
{
	SetSuspendState(FALSE, FALSE, FALSE);

	return 0;
}
