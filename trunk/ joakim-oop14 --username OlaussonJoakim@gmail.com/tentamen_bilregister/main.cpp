#include "Vehicle.h"
#include <iostream>
#include <tchar.h>
#pragma once
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	/*void_main3_1(){}*/
	Vehicle v1;
	Vehicle vr("Volvo", 1992, 40000, 10000);

	/*void_main3_2{}*/
	v1.read();
	v1.write();

	/*void_main3_3*/
	string str;
	Vehicle v2("Saab", 1998, 90000, 45000);

	cout << v1 << endl;
	cout << v2 << endl;
	cin >> v1;
	std::getline(cin, str);
	cout << v1 << endl;

	/*void_main3_4*/

	system("PAUSE");
	return 0;
}