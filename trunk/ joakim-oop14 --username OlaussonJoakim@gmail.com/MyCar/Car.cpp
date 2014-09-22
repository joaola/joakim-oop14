#include "Car.h"
Car::Car()
{
	brand = "";
	year = 0;
	price = 0;
}
Car::Car(string b, int y, double p){
	this->brand = b;
	this->year = y;
	this->price = p;
}
//L�gg in den andra konstruktorn som tar parametrar
void Car::WriteToConsole()
{
	cout << "M�rke=" << brand << endl;
	cout << "�rsmodell=" << year << endl;
	cout << "Pris=" << price << endl;

	//etc.
}

void Car::ReadFromConsole()
{
	cout << "Ange m�rke: " << endl;
	cin >> brand;

	cout << "Ange �rsmodell: " << endl;
	cin >> year;

	cout << "Ange pris: " << endl;
	cin >> price;
}
//L�gg in ReadFromConsole

