#include "Vehicle.h"
#include "vehicleRegister.h"
#include <iostream>
#include <tchar.h>
#pragma once
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	/*void_main3_1(){}*/
	cout << "main3_1" << endl;
	Vehicle v1;
	Vehicle vr1(1,"Volvo", 1992, 40000, 10000);

	/*void_main3_2{}*/
	cout << "main3_2" << endl;
	v1.read();
	v1.write();

	/*void_main3_4*/
	cout << "main3_3" << endl;
	string str;
	Vehicle v2(2,"Saab", 1998, 90000, 45000);

	cout << v1 << endl;
	cout << v2 << endl;
	cin >> v1;
	std::getline(cin, str);
	cout << v1 << endl;

	/*void_main3_5*/
	cout << "main3_4" << endl;
	Vehicle v3(3,"Saab", 1995, 60000, 30000);
	Vehicle v4(4,"Koenigsegg", 2005, 1500000, 1000000);
	Vehicle v5(5,"Volvo", 1999, 70000, 50000);
	vehicleRegister vr2;

	vr2.add(v3);
	vr2.add(v4);
	vr2.add(v5);
	
	vr2.setVehicleInfo("Bilar till salu: ");
	vr2.writeToFile();
	
	/*void_main3_5*/
	cout << "main3_6" << endl;
	vr2.readFromFile("test.txt");

	system("PAUSE");
	return 0;
}