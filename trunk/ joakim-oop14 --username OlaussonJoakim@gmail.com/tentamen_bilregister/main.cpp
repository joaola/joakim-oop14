#include "Vehicle.h"
#include <iostream>
#include <tchar.h>
#pragma once
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	Vehicle v1;
	Vehicle vr("Volvo", 1992, 40000, 10000);

	system("PAUSE");
	return 0;
}