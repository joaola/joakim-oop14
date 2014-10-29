#include "Vehicle.h"
#include "vehicleRegister.h"
#include <iostream>
#include <tchar.h>
#pragma once
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	/*void_main3_1(){}*/
	cout << "main3_1_2" << endl;
	Vehicle v1;
	Vehicle vr1(1,"Volvo", 1992, 40000, 10000);

	/*void_main3_2{}*/
	v1.write();
	vr1.write();
	v1.read();
	vr1.write();
	
	v1.setBrand("Koenigsegg");
	v1.write();
	cout << "M�rke: " << v1.getBrand() << endl;


	/*void_main3_3*/
	cout << "main3_3" << endl;
	string str;
	Vehicle v2;
	Vehicle v3(2,"Saab", 1998, 90000, 45000);

	cout << v2 << endl;
	cout << v3 << endl;
	cout << "TEST123" << endl;
	cin >> v2;
	cout << "BLABLA" << endl;
	std::getline(cin, str);
	cout << v2 << endl;

	/*void_main3_4*/
	cout << "main3_4" << endl;
	Vehicle v4(3,"Saab", 1995, 60000, 30000);
	Vehicle v5(4,"Koenigsegg", 2005, 1500000, 1000000);
	Vehicle v6(5,"Volvo", 1999, 70000, 50000);
	vehicleRegister vr2;

	vr2.add(v4);
	vr2.add(v5);
	vr2.add(v6);
	
	vr2.setVehicleInfo("Bilar till salu: ");
	vr2.writeToFile();
	
	/*void_main3_6*/
	cout << "main3_6" << endl;
	vr2.readFromFile("test.txt");
	
	cout << vr2.calculateStorageValue();

	system("PAUSE");
	return 0;
}