#include <string>
#include <iostream>
#include <sstream>
#include <clocale>
using namespace std;
#pragma once

class Vehicle {
private:
	string brand;
	int year;
	double purchasingPrice;
	double sellingPrice;
	
public:
	Vehicle(void){

		this->brand = "";
		this->year = this->purchasingPrice = this->sellingPrice = 0;
	}

	Vehicle(string brand, int year, double purchasingPrice, double sellingPrice){
		this->brand = brand;
		this->year = year;
		this->purchasingPrice = purchasingPrice;
		this->sellingPrice = purchasingPrice;
	}

	string getBrand(){ return this->brand; }
	int getYear(){ return this->year; }
	double purchasingPrice(){ return this->purchasingPrice; }
	double sellingPrice(){ return this->sellingPrice; }

	void setBrand(){ this->brand = brand; }
	void setYear(){ this->year = year; }
	void setPurchasingPrice(){ this->purchasingPrice = purchasingPrice; }
	void setSellingPrice(){ this->sellingPrice = sellingPrice; }

	void read(){
		cout << "Brand: " << endl;
		getline(cin, brand);

		cout << "Year: " << endl;
		cin >> year;

		cout << "Purchasing price: " << endl;
		cin >> purchasingPrice;

		cout << "Selling price: " << endl;
		cin >> sellingPrice;
	}

	void write(){
		cout << "Brand: " << brand << endl;
		cout << "Year: " << year << endl;
		cout << "Purchasing price: " << purchasingPrice << endl;
		cout << "Selling price: " << sellingPrice << endl;
	}

	friend ostream & operator << (ostream &out, const Vehicle &vehicle){
		out << "(";
	}
	

	~Vehicle(void);
};