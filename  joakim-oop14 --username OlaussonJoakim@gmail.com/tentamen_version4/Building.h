#pragma once
#include"Room.h"
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm> //search
using namespace std;

class Building{

private:
	string buildingType;
	vector<room>v;
public:
	Building(void){
		buildingType = "";
	}

	string getBuildingType(){ return buildingType; }
	void setBuildingType(string buildingType){this->buildingType = buildingType; }

	void Add(room r){
		v.push_back(r);
	}

	string Search(string str){
		room r1;
		for (int i = 0; i<(int)(v.size()); i++){
			if (str == v[i].getTypeOfRoom()){
				return v[i].getTypeOfRoom();
			}
			else
			{
				cout << "";
			}
				
				
		}
		return "Hittades ej";
	}

	void DeleteObj(){
		v.pop_back();
	}

	string List(){
		ostringstream oss;
		string s = "";
		for (int i = 0; i < (int)(v.size()); i++){
			oss << v[i] << endl;
		}
		return oss.str();
	}

	void WriteToFile(){
		ofstream fout;
		fout.open("test.txt");
		fout << "Building: " << this->buildingType << endl;

		for (auto &a : v){
			fout << "Room: " << a << endl;
		}
		fout.close();
	}

	void ReadFromFile(string fileName){
		string str, strRow;
		ifstream fin;
		try{
			fin.open(fileName);
			if (!fin.good())
			{
				cout << "Gick ej att öppna" << endl;
				return;
			}
			v.clear();

			while (getline(fin, strRow)){
				istringstream iss(strRow);
				getline(iss, str, '=');
				if (str.compare("Building") == 0){
					getline(iss, this->buildingType);
				}
				else if (str.compare("Room") == 0){
					room r;
					iss >> r;
					if (r.getRoomNr()!=-1)
					{
						v.push_back(r);
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

	double calculateArea(){
		double sumOfArea = 0;
		for (int i = 0; i < (int)(v.size()); i++)
		{
			sumOfArea += v[i].getArea();

		}
		return sumOfArea;
	}

	~Building(void){

	}
};