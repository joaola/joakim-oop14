#pragma once
#include <string.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include "Vehicle.h"
#include <clocale>
using namespace std;
class vehicleRegister{

private:
	vector<Vehicle>v;
	string vehicleInfo;
public:

	vehicleRegister(void){
	}

	void add(Vehicle a){
		v.push_back(a);
	}

	void setVehicleInfo(string vehicleInfo){
		this->vehicleInfo=vehicleInfo;
	}

	void deleteObj(){
		v.pop_back();
	}

	string list(){
		ostringstream oss;
		string s = "";
		for (int i = 0; i < v.size(); i++)
		{
			oss << v[i] << endl;
		}
		return oss.str();
	}

	void writeToFile(){
		ofstream fout;
		fout.open("test.txt");
		fout << "vehicleRegister= " << this->vehicleInfo << endl;

		for (auto &a : v){
			{
				fout << "Vehicle= " << a << endl;
			}

			fout.close();
		}
	}

	void readFromFile(string fileName){
		string str, strRow;
		ifstream fin;

		try{
			fin.open(fileName);
			if (!fin.good()){
				cout << "Gick ej att öppna" << endl;
				return;
			}
			v.clear();
			while (getline(fin, strRow)){
				istringstream iss(strRow);
				getline(iss, str, '=');
				if (str.compare("vehicleRegister") == 0){
					getline(iss, this->vehicleInfo);
				}
				else if (str.compare("Vehicle") == 0){
					Vehicle a;
					iss >> a;
					if (a.getId() != -1){
						v.push_back(a);
					}

				}
			}
			fin.close();
		}
		catch (exception e){
			cerr << "Exception: " << fileName << endl;
			cerr << e.what() << endl;
		}
	}

	~vehicleRegister(void){

	}
};