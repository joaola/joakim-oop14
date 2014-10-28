#pragma once
#include "Article.h"
#include "articleRegister.h"
#include <string>
#include <clocale>
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <memory>
using namespace std;
class Database : public vector<articleRegister>{
public:
	Database(void){
	}

	void readFromFilesToDatabase(){
		this->clear(); //Nollställer vektorn

		string str, strRow;
		ifstream fin("db.txt");
		while (getline(fin, strRow)){
			articleRegister ar;
			ar.readFromFile(strRow);
			if (ar.getNewsPaper().compare("") != 0)
			{
				this->push_back(ar);
			}
		}
	}

	string List()
	{
		string s = "";
		for (auto &item : *this){
			s += "\n" + item.getNewsPaper() + "\n";
			s += item.List();
		}

		return s;
	}
	string searchKeyword(string keyword){
		string s = "";
		for (auto &item : *this){
			s += item.getNewsPaper() + "\n" + item.searchKeyword(keyword);
		}
		return s;
	}

	string searchWordInTitle(string keyword){
		string s = "";
		for (auto &item : *this){
			s += item.getNewsPaper() + "\n" + item.searchWordInTitle(keyword);

		}
		return s;
	}

	~Database(void){

	}
};