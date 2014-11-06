#pragma once
#include <string>
#include <istream>
#include <ostream>
#include <iostream>
#include <sstream>
using namespace std;

class room{
private:
	int roomNr;
	int level;
	double area;
	string type_of_room;

public:
	room(void){ //konstruktor
		this-> level = 0;
		this-> area = 0;
		this-> type_of_room = "";
	}

	room(int level, double area, string type_of_room){ //konstruktor med parametrar
		this->level = level;
		this->area = area;
		this->type_of_room = type_of_room;
	}

	void Read(){
		string str;

		cout << "Level: ";
		cin >> level;

		cout << "Area: ";
		cin >> area;

		getline(cin, str); //läser bort vita tecken och '\n' (enter)
		
		cout << "Type of room : ";
		getline(cin, type_of_room);

	}

	void Write(){
		cout << "Level: " << level << endl;
		cout << "Area: " << area << endl;
		cout << "Type of room: " << type_of_room << endl;
	}

	friend ostream& operator <<(ostream &o, const room &Room){
		o << "(";
		o << Room.level << ",";
		o << Room.area << ",";
		o << Room.type_of_room;
		o << ")";
		return o;
	}

	friend istream& operator >>(istream& i, room& Room){
		string s;
		getline(i, s, '(');
		i >> Room.level; //int
		getline(i, s, ',');
		i >> Room.area; //double
		getline(i, s, ',');
		getline(i, Room.type_of_room, ')'); //string
		return i;
	}



	~room(void){ //destruktor

	}

	void Room(){

	}

	int getLevel(){
		return this->level;
	}

	double getArea(){
		return this->area;
	}

	string getTypeOfRoom(){
		return this->type_of_room;
	}

	void setLevel(int level){
		this->level = level;
	}

	void setArea(double area){
		this->area = area;
	}

	void setTypeOfRoom(string type_of_room){
		this-> type_of_room = type_of_room;
	}

};