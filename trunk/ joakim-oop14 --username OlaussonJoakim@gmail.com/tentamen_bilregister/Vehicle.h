#include <string>
#include <iostream>
#include <sstream>
#include <clocale>
#include <vector>
using namespace std;
#pragma once

class Vehicle {
private:
	string brand;
	int year;
	double purchasingPrice;
	double sellingPrice;
	int id;
public:
	Vehicle(void){

		this->brand = "";
		this->year= this->id = 0;
		this->purchasingPrice = this->sellingPrice = 0;
	}

	Vehicle(int id, string brand, int year, double purchasingPrice, double sellingPrice){
		this->id = id;
		this->brand = brand;
		this->year = year;
		this->purchasingPrice = purchasingPrice;
		this->sellingPrice = sellingPrice;
	}
	int getId(){ return this->id; }
	string getBrand(){ return this->brand; }
	int getYear(){ return this->year; }
	double getPurchasingPrice(){ return this->purchasingPrice; }
	double getSellingPrice(){ return this->sellingPrice; }

	void setId(){ this->id = id; }
	void setBrand(){ this->brand = brand; }
	void setYear(){ this->year = year; }
	void setPurchasingPrice(){ this->purchasingPrice = purchasingPrice; }
	void setSellingPrice(){ this->sellingPrice = sellingPrice; }

	void read(){
		cout << "Id: ";
		cin >> id;

		cout << "Brand: ";
		getline(cin, brand);

		cout << "Year: ";
		cin >> year;

		cout << "Purchasing price: ";
		cin >> purchasingPrice;

		cout << "Selling price: ";
		cin >> sellingPrice;
	}

	void write(){
		cout << "Id: " << id << endl;
		cout << "Brand: " << brand << endl;
		cout << "Year: " << year << endl;
		cout << "Purchasing price: " << purchasingPrice << endl;
		cout << "Selling price: " << sellingPrice << endl;
	}

	friend ostream & operator << (ostream &out, const Vehicle &vehicle){
		out << "(";
		out << vehicle.id << ",";
		out << vehicle.brand << ",";
		out << vehicle.year << ",";
		out << vehicle.purchasingPrice << ",";
		out << vehicle.sellingPrice << ",";
		out << ")";
		return out;
	}

	friend istream & operator >> (istream &in, Vehicle &vehicle)
	{
		string s;
		getline(in, s, '(');

		in >> skipws >> vehicle.id;
		getline(in, s, ',');

		in >> skipws >> vehicle.brand;
		getline(in, s, ',');

		in>>skipws>>vehicle.year;
		getline(in, s, ',');

		in >> skipws >> vehicle.purchasingPrice;
		getline(in, s, ',');

		in >> skipws >> vehicle.sellingPrice;

		getline(in, s, ')');

		return in;
	}
	
	~Vehicle(void){

	}
};