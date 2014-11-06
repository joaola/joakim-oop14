#pragma once
#include "Movie.h"
#include "movieRegister.h"
#include <string>
#include <clocale>
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <memory>
using namespace std;

class movieDatabase : public vector<movieRegister>
{
public:
	movieDatabase(){

	}

	//void readFromFilesToDatabase(){
	//	this->clear(); //nollställer vektorn

	//	string str, strRow;
	//	ifstream fin ("db.txt");

	//	while (getline(fin, strRow)){

	//		movieRegister mr;
	//		mr.readFromFile(strRow);
	//		if (mr.getName().compare("") != 0)
	//		{
	//			this->push_back(mr);
	//		}

	//	}
	//}

	//string List()
	//{
	//	string s = "";
	//	for (auto &item : *this)
	//	{
	//		s += "\n" + item.getName() + "\n";
	//		s += item.List();
	//	}
	//	return s;
	//}

	//string SearchKeyword(string keyword)
	//{
	//	string s = "";

	//	for (auto &item : *this)
	//	{
	//		s += item.getName() + "\n" + item.SearchKeyword(keyword);
	//	}

	//	return s;
	//}

	//string SearchWordInTitle(string keyword)
	//{
	//	string s = "";

	//	for (auto &item : *this)
	//	{
	//		s += item.getName() + "\n" + item.SearchWordInTitle(keyword);
	//	}

	//	return s;
	//}



	~movieDatabase(){ //destruktor

	}

};