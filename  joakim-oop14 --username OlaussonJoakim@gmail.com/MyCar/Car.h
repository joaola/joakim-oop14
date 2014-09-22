#pragma once
#include <iostream>
#include <string>
	using namespace std;
class Car
{
private:
	string brand;
	int year;
	double price;
public:
	// Konstruktorer
	Car(); //Konstruktor utan parametrar, b�r nollst�lla medlemsvariablerna
		Car(string b, int y, double p); //Konstruktor med initering av medlemsvariablerna via parametrar
		//N�gra metoder / medlemsfunktioner
		void ReadFromConsole();
	void WriteToConsole();
	// get/set-metoder
	string GetBrand() { return brand; }
	void SetBrand(string b) { brand = b; }
	//...
};
