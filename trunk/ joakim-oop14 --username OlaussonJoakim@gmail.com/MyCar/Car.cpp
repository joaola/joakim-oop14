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
//Lägg in den andra konstruktorn som tar parametrar
void Car::WriteToConsole()
{
	cout << "Märke=" << brand << endl;
	cout << "Årsmodell=" << year << endl;
	cout << "Pris=" << price << endl;

	//etc.
}

void Car::ReadFromConsole()
{
	cout << "Ange märke: " << endl;
	cin >> brand;

	cout << "Ange årsmodell: " << endl;
	cin >> year;

	cout << "Ange pris: " << endl;
	cin >> price;
}
//Lägg in ReadFromConsole

