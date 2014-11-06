#pragma once
#include <iostream>
#include <ostream>
#include <fstream>
#include <sstream>
#include <clocale>
#include <string>
#include <vector>
#include "Movie.h"
using namespace std;
class movieRegister{
private:
	string name;
	vector<Movie> v;
public:
	movieRegister(){
		name = "";
	}

	string getName(){return name;}
	void setName(string name){this->name = name;}

	//void writeToFile(){
	//	ofstream fout;
	//	fout.open("text.txt");
	//	fout << "movieRegister=" << this->name << endl;

	//	for (auto &a : v){
	//		fout << "Movie=" << a << endl;
	//	}
	//	fout.close();
	//}

	//void Add(Movie m)
	//{
	//	v.push_back(m);
	//}

	//void deleteObj(){
	//	v.pop_back();
	//}

	//string List()
	//{
	//	ostringstream oss;

	//	string s = "";

	//	for (int i = 0; i < v.size(); i++)
	//	{
	//		oss << v[i] << endl;
	//	}

	//	return oss.str();
	//}

	//void readFromFile(string fileName){
	//	string str, strRow;
	//	ifstream fin;
	//	try{
	//		fin.open(fileName);
	//		if (!fin.good()){
	//			cout << "Gick ej att öppna" << endl;
	//			return;

	//		}
	//		v.clear();
	//		while (getline(fin, strRow)){
	//			istringstream iss(strRow);
	//			getline(iss, str, '=');
	//			if (str.compare("movieRegister") == 0)
	//			{
	//				getline(iss, this->name);
	//			}
	//			else if (str.compare("Movie") == 0){
	//				Movie m;

	//				if (m.getPlayingTime() != 0){
	//					v.push_back;
	//				}
	//			}
	//		}
	//		fin.close();
	//	}
	//	catch (exception e){
	//		cerr << "Exception: " << fileName << endl;
	//		cerr << e.what() << endl;
	//	}
	//}

	//string SearchKeyword(string keyword)
	//{
	//	ostringstream oss;

	//	for (auto &item : v)
	//	{
	//		if (item.getTitle() == keyword)
	//		{
	//			oss << item << endl;
	//		}
	//	}
	//	return oss.str();
	//}

	//string SearchWordInTitle(string word)
	//{
	//	ostringstream oss;

	//	for (auto &item : v)
	//	{
	//		if (item.getTitle().find(word) != string::npos)
	//		{
	//			oss << item << endl;
	//		}
	//	}
	//	return oss.str();
	//}

	~movieRegister(void){

	}


};