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

		this->brand="";
		this->year = 0;
		this->id = -1;
		this->purchasingPrice = this->sellingPrice = 0;
	}

	Vehicle(int id, string brand, int year, double purchasingPrice, double sellingPrice){
		this->id = id;
		this->brand = brand;
		this->year = year;
		this->purchasingPrice = purchasingPrice;
		this->sellingPrice = sellingPrice;
	}

	void read(){
		string str;
		cout << "Id: ";
		cin >> id;

		getline(cin, str);

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
		out << vehicle.sellingPrice;
		out << ")";
		return out;
	}

	friend istream & operator >> (istream &in, Vehicle &vehicle)
	{
		string s;
		getline(in, s, '(');

		in >> skipws >> vehicle.id;
		getline(in, s, ',');

		getline(in, vehicle.brand, ',');

		in>>vehicle.year;
		getline(in, s, ',');

		in >> vehicle.purchasingPrice;
		getline(in, s, ',');

		in >> vehicle.sellingPrice;

		getline(in, s, ')');

		return in;
	}
	
	~Vehicle(void){ //Destruktor
	}
	//Getters
	int getId(){ return this->id; }
	string getBrand(){ return this->brand; }
	int getYear(){ return this->year; }
	double getPurchasingPrice(){ return this->purchasingPrice; }
	double getSellingPrice(){ return this->sellingPrice; }

	//Setters
	void setId(int id){ this->id = id; }
	void setBrand(string brand){ this->brand = brand; }
	void setYear(int year){ this->year = year; }
	void setPurchasingPrice(double purchasingPrice){ this->purchasingPrice = purchasingPrice; }
	void setSellingPrice(double sellingPrice){ this->sellingPrice = sellingPrice; }
};